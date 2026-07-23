/*
 * XREFs of _CmCreateDevicePanelWorker @ 0x1408FC7F8
 * Callers:
 *     _CmCreateDevicePanel @ 0x1408FC688 (_CmCreateDevicePanel.c)
 * Callees:
 *     _CmRaiseCreateEvent @ 0x1406FE840 (_CmRaiseCreateEvent.c)
 *     _CmOpenDevicePanelRegKey @ 0x1408FD2F4 (_CmOpenDevicePanelRegKey.c)
 */

__int64 __fastcall CmCreateDevicePanelWorker(__int64 a1, __int64 a2, int a3, __int64 *a4, bool *a5, __int16 a6)
{
  int v9; // ebx
  bool v10; // dl
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenDevicePanelRegKey(a1, a2, a3, (_DWORD)a4, a3, 1, (__int64)a4, (__int64)v12);
    if ( v9 >= 0 )
    {
      v10 = v12[0] == 1;
      *a5 = v12[0] == 1;
      if ( v10 )
        CmRaiseCreateEvent(a1, a2, 6u, *a4);
    }
  }
  return (unsigned int)v9;
}
