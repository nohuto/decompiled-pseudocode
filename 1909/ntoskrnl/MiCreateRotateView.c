/*
 * XREFs of MiCreateRotateView @ 0x1406EB1B8
 * Callers:
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400734A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetInPageSupportBlock @ 0x140093A1C (MiGetInPageSupportBlock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *PoolWithTag; // rbx
  void *v3; // rdi
  void *v5; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x77776D4Du);
  if ( PoolWithTag )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x208uLL) >= 0 )
      {
        PoolWithTag[16] = 8;
        *((_QWORD *)PoolWithTag + 1) = v3;
        MiInsertVadEvent(a1, (__int64 *)PoolWithTag, 0);
        return 1LL;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      v5 = v3;
    }
    else
    {
      v5 = PoolWithTag;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
