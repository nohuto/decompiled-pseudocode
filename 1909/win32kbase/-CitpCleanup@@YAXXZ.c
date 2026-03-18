/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00B7C50
 * Callers:
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01C7D54 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080F24 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C0215810);
  WORD2(qword_1C0215804) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C02157E1 )
  {
    EtwUnregister(qword_1C020C5C8);
    qword_1C020C5C8 = 0LL;
    dword_1C020C5A8 = 0;
  }
  byte_1C02157E1 = 1;
}
