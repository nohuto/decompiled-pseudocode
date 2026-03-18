/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C015DC74
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C017422C (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0023D60 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C0026110 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ValidateHbwnd @ 0x1C0105F50 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(__int64 *a1, __int64 a2, HWND a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 *v12; // rax
  char v13; // dl
  __int64 *v15[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(a2 + 92) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  a1[14] = *(_QWORD *)(a2 + 112);
  a1[10] = 0LL;
  v11 = *((_DWORD *)a1 + 23);
  if ( v11 == 2 )
  {
    if ( a4 == 2 )
    {
      v12 = (__int64 *)ValidateHwndEx((__int64)a3, 1, 0);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v13 = 1;
  }
  else
  {
    if ( v11 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x80uLL);
      return a1[10] != 0;
    }
    if ( a4 == 2 )
    {
      v12 = (__int64 *)ValidateHbwnd((unsigned __int64)a3, v8, v10);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v13 = 23;
  }
  v12 = (__int64 *)HMValidateHandleNoSecure((unsigned __int64)a3, v13);
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  v15[0] = a1 + 10;
  v15[1] = v12;
  HMAssignmentLock(v15);
  return a1[10] != 0;
}
