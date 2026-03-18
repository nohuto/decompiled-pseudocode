/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01456B0
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C013ECBC (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C013ED1C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        CInputDest *a5,
        int a6)
{
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  PDEVICE_OBJECT v19; // rcx
  unsigned __int16 v20; // r9
  CInputDest *v22; // rax
  _BYTE v23[192]; // [rsp+40h] [rbp-D8h] BYREF

  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x53u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)v9, a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( !*(_DWORD *)a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v13 = *(_DWORD *)(a2 + 48);
  v14 = 0;
  v15 = *(_QWORD *)(a2 + 112);
  if ( v13 )
  {
    while ( *(_DWORD *)v15 != -1 )
    {
      v15 += 224LL;
      if ( ++v14 >= v13 )
        goto LABEL_10;
    }
    v22 = CInputDest::CInputDest((CInputDest *)v23, a5);
    CTouchProcessor::InitializeQFrame(a1, v15, v14, 0LL, v22, a6);
    v19 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v20 = 84;
      goto LABEL_14;
    }
  }
  else
  {
LABEL_10:
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v15 + 8) = 0LL;
    CInputDest::operator=(v15 + 16, (__int64)a5);
    if ( *(_DWORD *)(v15 + 208) != 22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    CTouchProcessor::InitializeQFrameCoalesceState(a1, (struct CPointerQFrame *)v15, a6);
    v19 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v20 = 85;
LABEL_14:
      WPP_RECORDER_SF_(
        (__int64)v19->DeviceExtension,
        5u,
        0xBu,
        v20,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  CInputDest::~CInputDest(a5);
  return v15;
}
