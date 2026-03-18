/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1406BC4D0
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x14064B958 (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1406BC0A0 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406BC464 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AB00 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[3], (__int64)a1, 1, a2);
}
