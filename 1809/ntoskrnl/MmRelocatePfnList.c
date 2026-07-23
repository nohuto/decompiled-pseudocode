/*
 * XREFs of MmRelocatePfnList @ 0x140860568
 * Callers:
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x14009BE60 (MiClaimPhysicalRun.c)
 *     MiIdentifyPfnWrapper @ 0x1400A7D70 (MiIdentifyPfnWrapper.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     MiLockDynamicMemoryShared @ 0x1400A8874 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1400A88A0 (MiUnlockDynamicMemoryShared.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x1402BB874 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // xmm1_8
  __int64 v14; // [rsp+58h] [rbp-9h] BYREF
  __int128 v15; // [rsp+60h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh]
  _BYTE v17[32]; // [rsp+78h] [rbp+17h] BYREF
  int v18; // [rsp+D8h] [rbp+77h] BYREF

  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_14043B109) | (a4 << byte_14043B10A);
  MiCreatePteCopyList(a1, 0x100uLL, (__int64)v17);
  CurrentThread = KeGetCurrentThread();
  v9 = &a2[3 * a1];
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  while ( a2 < v9 )
  {
    v10 = a2[1];
    v11 = 0LL;
    *(_QWORD *)&v15 = 0LL;
    v16 = 0LL;
    *((_QWORD *)&v15 + 1) = v10;
    if ( !(unsigned int)MiIsPfn(v10) )
      goto LABEL_15;
    MiIdentifyPfnWrapper(48 * v10 - 0x58000000000LL, (__int64)&v15, v12);
    v11 = v16;
    if ( v16 != a2[2]
      || (((unsigned __int64)v15 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || MiPfnsWorthTrying((__int16 *)&MiSystemPartition, 48 * v10 - 0x58000000000LL, 1LL, 0, &v18) )
    {
      goto LABEL_15;
    }
    if ( v18 == 1 )
      MiEmptyKernelStackCache();
    if ( MiClaimPhysicalRun(
           (__int64)&MiSystemPartition,
           v10,
           1LL,
           0xFFFFFFFFFLL,
           (__int64)v17,
           0x400000,
           v7,
           0LL,
           *(unsigned __int8 *)(48 * v10 - 0x58000000000LL + 34) >> 6,
           &v14)
      || v14 == -1 )
    {
LABEL_15:
      v16 = v11 | 2;
    }
    else
    {
      *((_QWORD *)&v15 + 1) = v14;
    }
    v13 = v16;
    *(_OWORD *)a2 = v15;
    a2[2] = v13;
    a2 += 3;
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  MiReleasePteCopyList((__int64)v17);
  return 0LL;
}
