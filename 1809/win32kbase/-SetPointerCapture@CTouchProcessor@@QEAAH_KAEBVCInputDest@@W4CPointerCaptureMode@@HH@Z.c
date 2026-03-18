/*
 * XREFs of ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0143C3C
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0143DD4 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0144B2C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0142B4C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerCapture(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x56u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  if ( !*a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  if ( (unsigned int)(a4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 )
  {
    v13 = v11 + (a6 != 0 ? 232LL : 32LL);
    if ( !CInputDest::operator==((unsigned int *)(v13 + 8), (__int64)a3, (__int64)a3) )
    {
      if ( *(_DWORD *)(v13 + 92) )
      {
        CTouchProcessor::ReleasePointerCaptureInt((struct _KTHREAD **)a1, (struct CPointerCaptureInfo *)v13, v14);
        if ( *(_DWORD *)(v13 + 92) )
        {
          if ( a4 != 2 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
        }
      }
      CInputDest::operator=(v13 + 8, (__int64)a3);
    }
    *(_DWORD *)(v13 + 192) = a5;
    *(_DWORD *)v13 = a4;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x59u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    return 1LL;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0x57u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x58u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    return 0LL;
  }
}
