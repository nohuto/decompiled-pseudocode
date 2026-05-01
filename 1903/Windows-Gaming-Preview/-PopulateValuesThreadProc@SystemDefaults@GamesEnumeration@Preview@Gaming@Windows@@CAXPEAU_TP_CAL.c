/*
 * XREFs of ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011918 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003C308 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValuesThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance);
  if ( v3 >= 0 )
    SetEvent(hEvent);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v3);
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  CloseThreadpoolWork(Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread);
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread = 0LL;
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
}
