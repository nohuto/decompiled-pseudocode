/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0175A5C
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0164BE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0166484 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01727F4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0175FC8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0176894 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0176FD4 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        struct _KTHREAD **a1,
        __int64 a2,
        __int64 a3,
        CInputDest *a4,
        __int64 a5,
        int *a6,
        _WORD *a7,
        _DWORD *a8,
        int a9)
{
  int v9; // edx
  unsigned __int16 v10; // r13
  unsigned int v12; // r15d
  unsigned int v14; // r12d
  int v16; // edx
  int v17; // ecx
  struct CInputPointerNode *NodeById; // rdi
  int v19; // r8d
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v27; // edx
  int v28; // edx
  CInputDest *v29; // rax
  _QWORD *Target; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int16 v35; // cx
  __int64 v36; // rdx
  unsigned __int16 v37; // bx
  int v38; // [rsp+20h] [rbp-1B8h]
  __int16 v39; // [rsp+50h] [rbp-188h]
  _BYTE v40[136]; // [rsp+78h] [rbp-160h] BYREF
  _BYTE v41[128]; // [rsp+100h] [rbp-D8h] BYREF

  v9 = 0;
  v10 = *(_WORD *)a3;
  v12 = *(_DWORD *)(a3 + 8);
  v14 = *(_DWORD *)(a3 + 20);
  v39 = 0;
  if ( a1[10] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3);
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      55,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, v10, 1, 1);
  if ( NodeById )
  {
    if ( (*(_DWORD *)(a3 + 20) & 1) == 0 )
    {
      v22 = *((_DWORD *)NodeById + 14);
      if ( v22 != v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_LL(v17, v16, v19, 58, v38, v22, v12);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v23) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v23,
                7,
                59,
                (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
      if ( !CTouchProcessor::SetNewValidState(a1, v14, NodeById) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v27, 7, 60, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v28) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                7,
                61,
                (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
    }
  }
  else
  {
    v39 = 1;
    NodeById = CTouchProcessor::CreateNode((CTouchProcessor *)a1, v10, v12, v14);
    if ( !NodeById )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v20, 7, 56, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v21) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v21,
              7,
              57,
              (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
          }
        }
      }
LABEL_19:
      InputTraceLogging::Pointer::DropInput();
      CInputDest::SetEmpty(a4, v24, v25);
      return 0LL;
    }
  }
  CTouchProcessor::UpdateStateIndicator(
    (CTouchProcessor *)a1,
    NodeById,
    v14,
    *(_QWORD *)(a3 + 88),
    *(struct tagPOINT *)(a3 + 48));
  v29 = CInputDest::CInputDest((CInputDest *)v40, (__int64 **)a4);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(a1, v41, a3, NodeById, v14, v29, a7, a8, a9);
  CInputDest::operator=(a5, Target, v31);
  CInputDest::SetEmpty((CInputDest *)v41, v32, v33);
  *a7 |= v39;
  v35 = *a7 | (2 * (*((_DWORD *)NodeById + 72) & 4));
  *a7 = v35;
  v36 = 2 * (*((_DWORD *)NodeById + 72) & 1u);
  LOWORD(v36) = v35 | (2 * (*((_WORD *)NodeById + 144) & 1));
  *a7 = v36;
  *a7 = v36 | (2 * (*((_DWORD *)NodeById + 72) & 2));
  *a6 = *((_DWORD *)NodeById + 15) & 0x1F0;
  *((_DWORD *)NodeById + 15) = v14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v36) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v36,
      7,
      62,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  v37 = *((_WORD *)NodeById + 16);
  CInputDest::SetEmpty(a4, v36, v34);
  return v37;
}
