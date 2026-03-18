/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00BACB0
 * Callers:
 *     CitProcessCallout @ 0x1C00372CC (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01C9CF4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084D54 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C0218810);
  WORD2(qword_1C0218804) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C02187E1 )
  {
    EtwUnregister(qword_1C020F5C8);
    qword_1C020F5C8 = 0LL;
    dword_1C020F5A8 = 0;
  }
  byte_1C02187E1 = 1;
}
