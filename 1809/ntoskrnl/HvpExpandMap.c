/*
 * XREFs of HvpExpandMap @ 0x1405A48E4
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvpFreeMap @ 0x1406C9CC8 (HvpFreeMap.c)
 *     HvpAllocateMap @ 0x1406CE390 (HvpAllocateMap.c)
 */

__int64 __fastcall HvpExpandMap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // ebp
  void *v14; // rax
  void *v15; // r12
  _QWORD *v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // r12

  v4 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v14 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(12288LL, 0LL, 925977923LL);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    memset(v14, 0, 0x3000uLL);
    v16 = (_QWORD *)(632 * v5 + a1 + 288);
    *(_QWORD *)(632 * v5 + a1 + 280) = v16;
    *v16 = v15;
  }
  v9 = v5;
  if ( a3 )
    v10 = (a3 >> 12) - 1;
  else
    v10 = 0;
  v11 = v10 >> 9;
  v12 = ((a4 >> 12) - 1) >> 9;
  if ( v12 > v11 )
  {
    if ( v11 || (v17 = 632 * v5, *(_QWORD *)(632 * v9 + a1 + 280) != 632 * v9 + a1 + 288) )
    {
LABEL_14:
      if ( !(unsigned __int8)HvpAllocateMap(a1, *(_QWORD *)(632 * v9 + a1 + 280), v11 + 1, v12) )
      {
        v4 = -1073741801;
        HvpFreeMap(a1, *(_QWORD *)(632 * v9 + a1 + 280), v11 + 1, v12);
      }
      return v4;
    }
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(0x2000LL, 0LL, 942755139LL);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x2000uLL);
      *v19 = *(_QWORD *)(v17 + a1 + 288);
      *(_QWORD *)(v17 + a1 + 280) = v19;
      goto LABEL_14;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}
