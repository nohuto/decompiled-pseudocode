/*
 * XREFs of WppTraceCallback @ 0x1C005D130
 * Callers:
 *     <none>
 * Callees:
 *     WppIsEqualGuid @ 0x1C00029E0 (WppIsEqualGuid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v9; // rbp
  unsigned int v10; // edi
  __int64 v11; // rax
  const void **v12; // r15
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  _WORD *v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rdi
  _DWORD *v20; // rdx
  __int64 v21; // r9
  char v22; // r10
  bool v23; // zf
  __int64 v25; // [rsp+30h] [rbp-38h]
  char v26; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 <= 3u )
    return (unsigned int)-1073741808;
  if ( a1 > 5u )
  {
    if ( a1 <= 7u )
      return v7;
    if ( a1 == 8 )
    {
      v9 = a5;
      v10 = 0;
      v11 = a5;
      v12 = *(const void ***)(a5 + 32);
      do
      {
        v11 = *(_QWORD *)(v11 + 16);
        ++v10;
      }
      while ( v11 );
      if ( v10 > 0x3F )
        return (unsigned int)-1073741811;
      v13 = 32 * v10 + 24;
      if ( v12 )
      {
        v14 = 32 * v10 + 24;
        v13 += *(unsigned __int16 *)v12 + 2;
      }
      else
      {
        v14 = 0;
      }
      if ( v13 > a3 )
      {
        v7 = -1073741789;
        if ( a3 >= 4 )
        {
          *a4 = v13;
          *v6 = 4;
        }
      }
      else
      {
        memset(a4, 0, a3);
        *a4 = v13;
        a4[2] = v14;
        a4[4] = v10;
        if ( v12 )
        {
          v15 = (_WORD *)((char *)a4 + v14);
          *v15 = *(_WORD *)v12;
          memmove(v15 + 1, v12[1], *(unsigned __int16 *)v12);
        }
        if ( v10 )
        {
          v16 = a4 + 10;
          v17 = v10;
          do
          {
            v18 = *(_OWORD *)*(_QWORD *)(v9 + 8);
            *v16 = 528384;
            v16 += 8;
            *((_OWORD *)v16 - 3) = v18;
            *(_BYTE *)(v9 + 41) = 0;
            *(_DWORD *)(v9 + 44) = 0;
            v9 = *(_QWORD *)(v9 + 16);
            --v17;
          }
          while ( v17 );
        }
        *v6 = v13;
      }
      return v7;
    }
    return (unsigned int)-1073741808;
  }
  v19 = a5;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  v20 = a4 + 6;
  do
  {
    if ( WppIsEqualGuid(*(_DWORD **)(v19 + 8), v20) )
      break;
    v19 = *(_QWORD *)(v19 + 16);
  }
  while ( v19 );
  if ( !v19 )
    return (unsigned int)-1073741163;
  if ( v22 == 5 )
  {
    *(_BYTE *)(v19 + 41) = 0;
    *(_DWORD *)(v19 + 44) = 0;
    *(_QWORD *)(v19 + 24) = 0LL;
  }
  else
  {
    v23 = WPPTraceSuite == 2;
    v25 = *(_QWORD *)(v21 + 8);
    *(_QWORD *)(v19 + 24) = v25;
    if ( v23 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, char *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v26,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v19 + 41) = v26;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                             2LL,
                             v19 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v19 + 44) = HIDWORD(v25);
      *(_BYTE *)(v19 + 41) = BYTE2(v25);
    }
  }
  return v7;
}
