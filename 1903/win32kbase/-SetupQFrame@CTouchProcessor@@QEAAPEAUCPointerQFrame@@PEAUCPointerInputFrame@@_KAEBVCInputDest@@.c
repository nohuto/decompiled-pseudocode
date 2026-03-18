/*
 * XREFs of ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01747A8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016F2EC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C016D7FC (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016DABC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::SetupQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 **a4,
        unsigned int a5)
{
  __int64 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 i; // rbx
  CInputDest *v14; // rax
  _BYTE v16[128]; // [rsp+40h] [rbp-98h] BYREF

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        7,
        73,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  v11 = *((_DWORD *)a2 + 12);
  v12 = 0;
  for ( i = *((_QWORD *)a2 + 17); v12 < v11; ++v12 )
  {
    if ( *(_DWORD *)i == -1 )
      break;
    if ( *(_QWORD *)(i + 8) == a3 )
      break;
    i += 168LL;
  }
  if ( v12 >= v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( *(_DWORD *)i == -1 )
  {
    v14 = CInputDest::CInputDest((CInputDest *)v16, a4);
    CTouchProcessor::InitializeQFrame(a5, i, v12, a3, v14, a5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      7,
      74,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return (struct CPointerQFrame *)i;
}
