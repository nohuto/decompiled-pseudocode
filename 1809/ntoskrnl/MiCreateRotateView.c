/*
 * XREFs of MiCreateRotateView @ 0x1406CBC64
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *PoolWithTag; // rbx
  void *v3; // rdi
  __int64 v4; // r9
  void *v6; // rcx

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
        MiInsertVadEvent(a1, PoolWithTag, 0LL, v4);
        return 1LL;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      v6 = v3;
    }
    else
    {
      v6 = PoolWithTag;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return 0LL;
}
