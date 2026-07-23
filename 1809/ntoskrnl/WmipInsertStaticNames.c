/*
 * XREFs of WmipInsertStaticNames @ 0x14059E964
 * Callers:
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140007428 (RtlStringCbCatW.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WmipStaticInstanceNameSize @ 0x14059EB44 (WmipStaticInstanceNameSize.c)
 */

__int64 __fastcall WmipInsertStaticNames(unsigned int *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r12
  unsigned int v8; // ebx
  unsigned int v9; // r14d
  _DWORD *v10; // r15
  int v11; // eax
  wchar_t *v12; // rdi
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r12
  const wchar_t *v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  wchar_t *v20; // rdi
  bool v21; // zf
  __int64 v22; // [rsp+20h] [rbp-68h]
  unsigned int i; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+28h] [rbp-60h]
  wchar_t pszDest[8]; // [rsp+30h] [rbp-58h] BYREF

  result = *(unsigned int *)(a3 + 16);
  if ( (result & 3) != 0 )
  {
    v7 = *(unsigned int *)(a3 + 72);
    result = (*a1 + 3) & 0xFFFFFFFC;
    if ( *a1 + 3 >= *a1 )
    {
      v8 = (*a1 + 3) & 0xFFFFFFFC;
      result = WmipStaticInstanceNameSize(a3);
      v9 = result;
      if ( (unsigned int)result <= ~v8 )
      {
        result = v8 + (unsigned int)result;
        v24 = result;
        if ( (unsigned int)result > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = result;
        }
        else
        {
          v10 = (unsigned int *)((char *)a1 + v8);
          a1[14] = v8;
          v11 = *(_DWORD *)(a3 + 16);
          v22 = v7;
          v12 = (wchar_t *)&v10[v7];
          if ( (v11 & 1) != 0 )
          {
            if ( (v11 & 0x20000) != 0 )
              a1[11] |= 0x10000u;
            for ( i = 0; i < (unsigned int)v7; ++i )
            {
              v13 = v9 - 2;
              *v10++ = (_DWORD)v12 - (_DWORD)a1;
              RtlStringCbCopyW(v12 + 1, v13, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(a3 + 88) + 4LL));
              RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", **(_DWORD **)(a3 + 88) + i);
              RtlStringCbCatW(v12 + 1, v13, pszDest);
              v14 = -1LL;
              do
                ++v14;
              while ( v12[v14 + 1] );
              *v12 = 2 * v14 + 2;
              v9 = v13 - (2 * v14 + 2);
              v12 += ((unsigned __int64)(unsigned int)(2 * v14 + 2) >> 1) + 1;
            }
          }
          else if ( (v11 & 2) != 0 && (_DWORD)v7 )
          {
            v15 = 0LL;
            do
            {
              *v10++ = (_DWORD)v12 - (_DWORD)a1;
              v16 = *(const wchar_t **)(v15 + *(_QWORD *)(a3 + 88));
              v17 = -1LL;
              do
                ++v17;
              while ( v16[v17] );
              v18 = 2 * v17 + 2;
              v19 = v9 - 2;
              *v12 = 2 * v17 + 2;
              v20 = v12 + 1;
              RtlStringCbCopyW(v20, v19, v16);
              v9 = v19 - v18;
              v15 += 8LL;
              v21 = v22-- == 1;
              v12 = &v20[(unsigned __int64)v18 >> 1];
            }
            while ( !v21 );
          }
          result = v24;
          *a1 = v24;
        }
      }
    }
  }
  return result;
}
