/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00771B0
 * Callers:
 *     CitProcessCallout @ 0x1C00332B0 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0185170 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077210 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C01D0CF0);
  WORD2(qword_1C01D0CE4) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C01D0CC1 )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C01C7780 = 0;
  }
  byte_1C01D0CC1 = 1;
}
