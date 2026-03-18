/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0149870 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C0149A00 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C014C900 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1C01634A8 (ApiSetEditionRimDeviceReadNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, void **a2, __int64 a3, unsigned int a4, void *a5)
{
  unsigned int v6; // ebp
  void **v9; // r15
  int v10; // r14d
  unsigned int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct DEVICEINFO *v15; // rbx
  CHidInput *v16; // rcx
  unsigned int v17; // r8d
  LPCWSTR *v18; // rdx
  CTouchProcessor *v19; // rcx
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  CPTPProcessor *v22; // rcx
  int v23; // eax

  v6 = a3;
  v9 = a2;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    if ( a2[4] != a5 && a5 != (void *)-1LL )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 12);
  }
  else
  {
    v9 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5, a3);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, (char *)a5, IsInjectionDeviceFromKernelHandle);
  v15 = DeviceInfo;
  if ( DeviceInfo )
  {
    v16 = (CHidInput *)*((unsigned int *)DeviceInfo + 50);
    if ( ((unsigned __int8)v16 & 0x40) == 0 )
    {
      v17 = 3;
      if ( v6 == 4 )
      {
        v17 = 12;
      }
      else if ( v6 == 16 )
      {
        v17 = 10;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v17,
        0LL,
        0,
        0);
    }
    if ( *((_QWORD *)v15 + 60) )
    {
      if ( !v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14);
      if ( (*((_DWORD *)v15 + 50) & 0x80u) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14);
      if ( CHidInput::IsTouchpadDevice(v16, v15) )
      {
        v21 = *((_QWORD *)v15 + 60);
        if ( v21 )
          v22 = *(CPTPProcessor **)(v21 + 992);
        else
          v22 = 0LL;
        if ( v22 )
          CPTPProcessor::ProcessInput(
            v22,
            v20,
            (struct RIMCOMPLETEFRAME *)a2,
            -__CFSHR__(*((_DWORD *)v15 + 46), 14),
            -__CFSHR__(*(_DWORD *)(v21 + 308), 7),
            *((_DWORD *)v9 + 13));
      }
      else
      {
        CTouchProcessor::ProcessInput(v19, v18, (struct RIMCOMPLETEFRAME *)a2);
      }
    }
    else
    {
      v23 = *((_DWORD *)v15 + 50);
      if ( (v23 & 0x100) != 0 || (v23 & 0x200) != 0 )
        ApiSetEditionRimDeviceReadNotification(a2, v6, a4, a5);
    }
  }
  return 0LL;
}
