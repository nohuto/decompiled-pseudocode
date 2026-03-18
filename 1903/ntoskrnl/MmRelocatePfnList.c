/*
 * XREFs of MmRelocatePfnList @ 0x140892CEC
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x140005420 (MiIdentifyPfnWrapper.c)
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MiUnlockDynamicMemoryShared @ 0x140005F00 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140005F64 (MiLockDynamicMemoryShared.c)
 *     MiClaimPhysicalRun @ 0x1400D9208 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x1400DA610 (MiPfnsWorthTrying.c)
 *     MiCreatePteCopyList @ 0x14012F194 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131AD8 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x1402D1990 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // xmm1_8
  __int64 v13; // [rsp+58h] [rbp-9h] BYREF
  __int128 v14; // [rsp+60h] [rbp-1h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  _QWORD v16[4]; // [rsp+78h] [rbp+17h] BYREF
  int v17; // [rsp+D8h] [rbp+77h] BYREF

  memset(v16, 0, 24);
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_140465A4D) | (a4 << byte_140465A4E);
  MiCreatePteCopyList(a1, 0x100uLL, (__int64)v16);
  CurrentThread = KeGetCurrentThread();
  v9 = &a2[3 * a1];
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  while ( a2 < v9 )
  {
    v10 = a2[1];
    v11 = 0LL;
    *(_QWORD *)&v14 = 0LL;
    v15 = 0LL;
    *((_QWORD *)&v14 + 1) = v10;
    if ( !(unsigned int)MiIsPfn(v10) )
      goto LABEL_15;
    MiIdentifyPfnWrapper(48 * v10 - 0x58000000000LL);
    v11 = v15;
    if ( v15 != a2[2]
      || (((unsigned __int64)v14 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || MiPfnsWorthTrying((__int16 *)&MiSystemPartition, 48 * v10 - 0x58000000000LL, 1LL, 0, &v17) )
    {
      goto LABEL_15;
    }
    if ( v17 == 1 )
      MiEmptyKernelStackCache();
    if ( MiClaimPhysicalRun(
           (__int64)&MiSystemPartition,
           v10,
           1LL,
           0xFFFFFFFFFLL,
           (__int64)v16,
           0x400000,
           v7,
           0LL,
           *(unsigned __int8 *)(48 * v10 - 0x58000000000LL + 34) >> 6,
           &v13)
      || v13 == -1 )
    {
LABEL_15:
      v15 = v11 | 2;
    }
    else
    {
      *((_QWORD *)&v14 + 1) = v13;
    }
    v12 = v15;
    *(_OWORD *)a2 = v14;
    a2[2] = v12;
    a2 += 3;
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  MiReleasePteCopyList((__int64)v16);
  return 0LL;
}
