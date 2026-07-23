/*
 * XREFs of ObpSetObjectAuditInfo @ 0x140862CD0
 * Callers:
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CB090 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14069CB50 (RtlValidSecurityDescriptor.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, PSECURITY_DESCRIPTOR *a2, char a3)
{
  _QWORD *v7; // rbx
  PSECURITY_DESCRIPTOR v8; // rdi
  SIZE_T v9; // r14
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rcx

  if ( !RtlValidSecurityDescriptor(*a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    v7 = (_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F]);
  else
    v7 = 0LL;
  if ( v7 && !*v7 )
  {
    v8 = *a2;
    if ( a3 )
    {
      *a2 = 0LL;
    }
    else
    {
      v9 = RtlLengthSecurityDescriptor(*a2);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x4941624Fu);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      memmove(PoolWithTag, *a2, v9);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    v12 = a1 + 16;
    if ( *v7 )
    {
      ExReleasePushLockEx(v12, 0LL);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *v7 = v8;
      ExReleasePushLockEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
