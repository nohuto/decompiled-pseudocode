/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0131148
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01452E4 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ValidateHbwnd @ 0x1C00E0270 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(_QWORD *a1, __int64 a2, HWND a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rax
  char v12; // dl
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("This object expected to be empty at the time of call");
  if ( !*(_DWORD *)(a2 + 84) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expected for passed-in inputDest to be backed by window");
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect different handle");
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)a1 + 7) = *(_OWORD *)(a2 + 112);
  *((_OWORD *)a1 + 8) = *(_OWORD *)(a2 + 128);
  *((_OWORD *)a1 + 9) = *(_OWORD *)(a2 + 144);
  *((_OWORD *)a1 + 10) = *(_OWORD *)(a2 + 160);
  a1[9] = 0LL;
  v10 = *((_DWORD *)a1 + 21);
  if ( v10 == 2 )
  {
    if ( a4 == 2 )
    {
      v11 = ValidateHwndEx(a3, 1, 0);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(128LL, v8, v9);
    v12 = 1;
  }
  else
  {
    if ( v10 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0xB8uLL);
      return a1[9] != 0LL;
    }
    if ( a4 == 2 )
    {
      v11 = ValidateHbwnd((unsigned __int64)a3);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(128LL, v8, v9);
    v12 = 23;
  }
  v11 = HMValidateHandleNoSecure((unsigned __int64)a3, v12);
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  v14[0] = a1 + 9;
  v14[1] = v11;
  HMAssignmentLock((__int64)v14);
  return a1[9] != 0LL;
}
