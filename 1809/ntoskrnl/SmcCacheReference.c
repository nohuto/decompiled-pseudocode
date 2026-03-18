/*
 * XREFs of SmcCacheReference @ 0x1408AECC8
 * Callers:
 *     SmcGetCacheStats @ 0x1408AEFA0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1408AF110 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1408AF35C (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1408AF61C (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1408AFB60 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  BOOLEAN v5; // dl

  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v5 = ExAcquireRundownProtection_0(v4 + 1);
  if ( v5 )
  {
    if ( (v4[3].Count & 0xFFF) == a2 >> 4 )
    {
      v3.Count = v4->Count;
      v5 = 0;
    }
    if ( v5 )
      ExReleaseRundownProtection_0(v4 + 1);
  }
  return v3;
}
