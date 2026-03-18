/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0172410
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C004EAF0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C016B5FC (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C016B64C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016B8BC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 **a5,
        unsigned int a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rdx
  CTouchProcessor *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  PDEVICE_OBJECT v19; // rcx
  int v20; // r9d
  CInputDest *v22; // rax
  _BYTE v23[128]; // [rsp+40h] [rbp-98h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        87,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(a1, (const struct CPointerInputFrame *)v7, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !*(_DWORD *)a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = *(_DWORD *)(v7 + 48);
  v12 = 0;
  v13 = *(_QWORD *)(v7 + 136);
  if ( v11 )
  {
    while ( *(_DWORD *)v13 != -1 )
    {
      v13 += 168LL;
      if ( ++v12 >= v11 )
        goto LABEL_11;
    }
    v22 = CInputDest::CInputDest((CInputDest *)v23, a5);
    CTouchProcessor::InitializeQFrame(a6, v13, v12, 0LL, v22, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = 88;
        goto LABEL_16;
      }
    }
  }
  else
  {
LABEL_11:
    v13 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    CInputDest::operator=(v13 + 16, (__int64)a5, v10);
    if ( *(_DWORD *)(v13 + 152) != 22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    CTouchProcessor::InitializeQFrameCoalesceState(v15, (struct CPointerQFrame *)v13, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v20 = 89;
LABEL_16:
        LOBYTE(v17) = 5;
        WPP_RECORDER_SF_(v19->DeviceExtension, v17, 7, v20, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)a5, v17, v18);
  return v13;
}
