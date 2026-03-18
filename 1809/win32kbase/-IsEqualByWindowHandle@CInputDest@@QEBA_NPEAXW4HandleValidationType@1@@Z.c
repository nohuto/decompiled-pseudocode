/*
 * XREFs of ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C013E0C4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C013E678 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0142064 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ValidateHbwnd @ 0x1C00E0270 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall CInputDest::IsEqualByWindowHandle(__int64 a1, void *a2, int a3)
{
  int v3; // eax
  void *v4; // rbx
  void **v5; // rsi
  int v6; // r8d
  __int64 v7; // rax
  char v8; // di
  int v9; // r8d
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0LL;
  if ( v3 == 2 )
  {
    v5 = *(void ***)(a1 + 72);
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
LABEL_5:
          MicrosoftTelemetryAssertTriggeredMsgKM("Unknown HandleValidationType");
          return (char)v4;
        }
        v7 = ValidateHwndEx(a2, 1, 0);
      }
      else
      {
        v7 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
      }
LABEL_8:
      if ( v7 )
      {
        if ( (void **)v7 == v5 )
          LOBYTE(v4) = 1;
      }
      return (char)v4;
    }
LABEL_20:
    if ( v5 )
      v4 = *v5;
    LOBYTE(v4) = v4 == a2;
    return (char)v4;
  }
  v8 = 1;
  if ( v3 != 1 )
    return (char)v4;
  v5 = *(void ***)(a1 + 72);
  if ( !a3 )
    goto LABEL_20;
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_5;
    v7 = ValidateHbwnd((unsigned __int64)a2);
    goto LABEL_8;
  }
  v10 = HMValidateHandleNoSecure((unsigned __int64)a2, 23);
  if ( !v10 || (void **)v10 != v5 )
    return 0;
  return v8;
}
