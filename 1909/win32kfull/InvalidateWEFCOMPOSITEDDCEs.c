/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E9460
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0015130 (xxxSystemTimerProc.c)
 * Callees:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E9340 (FlushWEFCOMPOSITEDDCEBounds.c)
 */

__int64 InvalidateWEFCOMPOSITEDDCEs()
{
  __int64 i; // rbx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 64) & 0x4400800) == 0
      && *(_QWORD *)(i + 16)
      && !(unsigned int)GreIsRendering(*(_QWORD *)(i + 8))
      && (*(_DWORD *)(i + 64) & 0x5000) == 0x5000
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 32) + 40LL) + 27LL) & 2) != 0 )
    {
      FlushWEFCOMPOSITEDDCEBounds(i);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
