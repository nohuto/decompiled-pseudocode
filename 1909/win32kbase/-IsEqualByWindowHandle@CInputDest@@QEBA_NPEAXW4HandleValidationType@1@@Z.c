/*
 * XREFs of ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015B95C
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016AA38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C016AFD8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016D858 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016EA28 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0026630 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ValidateHbwnd @ 0x1C01035E0 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputDest::IsEqualByWindowHandle(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // rax

  v3 = *(_DWORD *)(a1 + 92);
  v4 = 0LL;
  if ( v3 == 2 )
  {
    v5 = *(__int64 **)(a1 + 80);
    if ( a3 )
    {
      v6 = (unsigned int)(a3 - 1);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 != 1 )
        {
LABEL_5:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v6);
          return v4;
        }
        v7 = ValidateHwndEx(a2, 1, 0);
      }
      else
      {
        v7 = HMValidateHandleNoSecure(a2, 1);
      }
LABEL_8:
      if ( v7 )
      {
        if ( (__int64 *)v7 == v5 )
          LOBYTE(v4) = 1;
      }
      return v4;
    }
LABEL_20:
    if ( v5 )
      v4 = *v5;
    LOBYTE(v4) = v4 == a2;
    return v4;
  }
  v8 = 1;
  if ( v3 != 1 )
    return v4;
  v5 = *(__int64 **)(a1 + 80);
  if ( !a3 )
    goto LABEL_20;
  v6 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 1 )
      goto LABEL_5;
    v7 = ValidateHbwnd(a2, a2, v6);
    goto LABEL_8;
  }
  v9 = HMValidateHandleNoSecure(a2, 23);
  if ( !v9 || (__int64 *)v9 != v5 )
    return 0;
  return v8;
}
