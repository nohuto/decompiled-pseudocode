/*
 * XREFs of ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0172AC0
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0172C90 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0173A3C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0030E4C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0171A24 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerCapture(
        PDEVICE_OBJECT a1,
        __int64 a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v8; // rbx
  struct _KTHREAD **v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx

  v8 = a2;
  v9 = (struct _KTHREAD **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        90,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  if ( v9[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)(a4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v9[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(_QWORD *)(v8 + 40);
  if ( v10 )
  {
    v13 = v10 + (a6 != 0 ? 176LL : 32LL);
    if ( !CInputDest::operator==((unsigned int *)(v13 + 8), (__int64)a3, (__int64)a3) )
    {
      if ( *(_DWORD *)(v13 + 100) )
      {
        CTouchProcessor::ReleasePointerCaptureInt(v9, (struct CPointerCaptureInfo *)v13, v15);
        if ( *(_DWORD *)(v13 + 100) )
        {
          if ( a4 != 2 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v15);
        }
      }
      CInputDest::operator=(v13 + 8, (__int64)a3, v15);
    }
    *(_DWORD *)(v13 + 136) = a5;
    *(_DWORD *)v13 = a4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        7,
        93,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    return 1LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 91, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            7,
            92,
            (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
        }
      }
    }
    return 0LL;
  }
}
