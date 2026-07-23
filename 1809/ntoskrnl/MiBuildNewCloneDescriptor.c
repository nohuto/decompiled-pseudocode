/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x14085F0E0
 * Callers:
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x14013A3C8 (MiUnlockPagedAddress.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetVmPartition @ 0x1402B4770 (MiGetVmPartition.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  _QWORD *PoolWithTag; // rdi
  char *v9; // rax
  char *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  unsigned __int64 v13; // rbx
  __int64 VmPartition; // rax

  v4 = 32 * a2;
  v6 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)a1, v6) < 0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
  if ( !PoolWithTag )
  {
    PsReturnProcessNonPagedPoolQuota(a1, v6);
    return 0LL;
  }
  v9 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v6, 0x6C436D4Du);
  v10 = v9;
  if ( !v9 )
  {
LABEL_6:
    PsReturnProcessNonPagedPoolQuota(a1, v6);
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  memset(v9, 0, 0x20uLL);
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x68436D4Du);
  v12 = v11;
  if ( !v11 )
  {
LABEL_8:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_6;
  }
  memset(v11, 0, 0x20uLL);
  v13 = 0LL;
  if ( v6 )
  {
    while ( (unsigned int)MiLockPagedAddress((ULONG_PTR)&v10[v13]) )
    {
      v13 += 4096LL;
      if ( v13 >= v6 )
        goto LABEL_12;
    }
    while ( v13 )
    {
      v13 -= 4096LL;
      MiUnlockPagedAddress((unsigned __int64)&v10[v13]);
    }
    ExFreePoolWithTag(v12, 0);
    goto LABEL_8;
  }
LABEL_12:
  VmPartition = MiGetVmPartition((__int64)&a1[1].IdealNode[12]);
  *v12 = a2;
  v12[1] = 1LL;
  v12[2] = v10;
  PoolWithTag[6] = 0LL;
  PoolWithTag[4] = &v10[v4 - 32];
  PoolWithTag[12] = a3;
  PoolWithTag[3] = v10;
  PoolWithTag[5] = a2;
  PoolWithTag[7] = v12;
  PoolWithTag[8] = v6;
  _InterlockedIncrement64((volatile signed __int64 *)(VmPartition + 1304));
  v12[3] = VmPartition;
  return PoolWithTag;
}
