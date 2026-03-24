/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140696E00
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x140618460 (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x140696A64 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696D9C (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14004D3A0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 1, a2);
}
