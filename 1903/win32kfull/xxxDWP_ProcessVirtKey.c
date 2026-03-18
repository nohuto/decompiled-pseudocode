/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C000AC00
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023E670 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall xxxDWP_ProcessVirtKey(struct tagTHREADINFO *a1)
{
  if ( (_DWORD)a1 == 115 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
      WindowManagementExtended::xxxCloseApplication(gptiCurrent, (struct tagTHREADINFO *)(unsigned int)a1);
  }
}
