/*
 * XREFs of ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C029D278
 * Callers:
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167A7C (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167BDC (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0002180 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall ConvertStringsToOneMultiString(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        unsigned __int16 **a3,
        unsigned int *a4)
{
  struct _UNICODE_STRING *v4; // r10
  __int64 v5; // r15
  unsigned __int16 **v6; // r12
  int v7; // r13d
  __int64 v8; // r14
  unsigned __int64 Length; // r12
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rdx
  char v14; // al
  unsigned int v15; // edi
  char **v16; // rbx
  char *v17; // rcx
  int v18; // r8d
  int v19; // r11d
  unsigned int v20; // edi
  SIZE_T v22; // rax
  unsigned __int16 *v23; // rsi
  int v24; // ebx
  _DWORD *v25; // rbp
  const unsigned __int16 **v26; // r14
  struct _UNICODE_STRING *v27; // [rsp+20h] [rbp-1E8h]
  __int64 v28; // [rsp+28h] [rbp-1E0h]
  wchar_t *Buffer; // [rsp+30h] [rbp-1D8h]
  _DWORD v32[32]; // [rsp+50h] [rbp-1B8h] BYREF
  _QWORD v33[30]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a1;
  v27 = a1;
  v5 = 0LL;
  v6 = a3;
  v7 = 0;
  if ( a2 )
  {
    v8 = a2;
    v28 = a2;
    do
    {
      Length = v4->Length;
      v10 = 0;
      Buffer = v4->Buffer;
      if ( v4->Length )
      {
        v11 = 0LL;
        do
        {
          v12 = &Buffer[v11 / 2];
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          if ( !(_DWORD)v13 )
            break;
          v14 = 0;
          v15 = 0;
          if ( (_DWORD)v5 )
          {
            v16 = (char **)v33;
            while ( !v14 )
            {
              v17 = *v16;
              do
              {
                v18 = *(unsigned __int16 *)&v17[(char *)v12 - *v16];
                v19 = *(unsigned __int16 *)v17 - v18;
                if ( v19 )
                  break;
                v17 += 2;
              }
              while ( v18 );
              if ( !v19 )
                v14 = 1;
              ++v15;
              ++v16;
              if ( v15 >= (unsigned int)v5 )
              {
                if ( v14 )
                  break;
                goto LABEL_18;
              }
            }
          }
          else
          {
LABEL_18:
            if ( (unsigned int)v5 < 0x1E )
            {
              v33[v5] = v12;
              v32[v5] = v13 + 1;
              v5 = (unsigned int)(v5 + 1);
              v7 += v13 + 1;
            }
          }
          v10 += v13 + 1;
          v11 = 2LL * v10;
        }
        while ( v11 < Length );
        v4 = v27;
        v8 = v28;
      }
      ++v4;
      --v8;
      v27 = v4;
      v28 = v8;
    }
    while ( v8 );
    v6 = a3;
  }
  v20 = v7 + 1;
  if ( (unsigned int)(v7 + 1) >= 0xFA00 )
    return 3221225659LL;
  v22 = 2LL * v20;
  if ( !is_mul_ok(v20, 2uLL) )
    v22 = -1LL;
  v23 = (unsigned __int16 *)operator new[](v22, 0x4B677844u, PagedPool);
  if ( !v23 )
    return 3221225495LL;
  v24 = 0;
  if ( (_DWORD)v5 )
  {
    v25 = v32;
    v26 = (const unsigned __int16 **)v33;
    do
    {
      if ( v20 != v24 )
      {
        RtlStringCchCopyW(&v23[v24], v20 - v24, *v26);
        v24 += *v25;
      }
      ++v26;
      ++v25;
      --v5;
    }
    while ( v5 );
  }
  v23[v24] = 0;
  *v6 = v23;
  *a4 = v20;
  return 0LL;
}
