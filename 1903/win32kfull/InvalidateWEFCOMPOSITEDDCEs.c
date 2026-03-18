/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E95E0
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0083D00 (xxxSystemTimerProc.c)
 * Callees:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E94C0 (FlushWEFCOMPOSITEDDCEBounds.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDDCEs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
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
