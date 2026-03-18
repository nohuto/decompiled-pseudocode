/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1406B7CF0
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x14065F5F8 (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1406B78C0 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406B7C84 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14003A840 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[3], (__int64)a1, 1, a2);
}
