/*
 * XREFs of IsHotKey @ 0x1C010E548
 * Callers:
 *     IsUninterceptable @ 0x1C010DEF4 (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     EditionIsHotKey @ 0x1C01EBC50 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C0019FC0 (GetDesktopView.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C01EBC70 (WPP_RECORDER_SF_DDqq.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(int a1, int a2)
{
  char v3; // si
  struct tagHOTKEY * near *i; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-38h]

  v3 = a1;
  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    if ( *((unsigned __int16 *)i + 12) == a1 && *((_DWORD *)i + 7) == a2 && (*((_WORD *)i + 13) & 0x100) == 0 )
      break;
  }
  if ( (*((_DWORD *)*i + 120) & 0xC) != 0 )
    return i;
  if ( GetDesktopView(*((_QWORD *)*i + 52), grpdeskRitInput) )
  {
    if ( ((_BYTE)i[3] & 0xB) == 0
      && gpqForeground
      && (unsigned int)(a2 - 173) > 6
      && a2 != 7
      && !(unsigned __int8)CheckAccess(*((_QWORD *)*i + 52) + 872LL, gpqForeground + 436LL) )
    {
      EtwTraceUIPIInputError(*i, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqq(gpqForeground, v6, v7, v8, v9, a2, v3, (char)*i, gpqForeground);
      return 0LL;
    }
    return i;
  }
  return 0LL;
}
