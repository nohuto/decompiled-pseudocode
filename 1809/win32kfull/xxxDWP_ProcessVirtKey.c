/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C0008640
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02261E8 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall xxxDWP_ProcessVirtKey(struct tagTHREADINFO *a1)
{
  if ( (_DWORD)a1 == 115 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      WindowManagementExtended::xxxCloseApplication(gptiCurrent, (struct tagTHREADINFO *)(unsigned int)a1);
  }
}
