/*
 * XREFs of DrvUnattachMirrorDriversInSession @ 0x1C00B79E0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvUnattachMirrorDriversInSession(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  wchar_t *i; // rdx

  v3 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  WdLogEvent5_WdEvent(v3);
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
    return 0LL;
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 8) != 0 )
      *((_DWORD *)i + 65) = 0;
  }
  return 1LL;
}
