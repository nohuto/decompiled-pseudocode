/*
 * XREFs of ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801EAF8C
 * Callers:
 *     _lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_ @ 0x1801E9AF0 (_lambda_1e2b6ca0fa40af4229692291bbc0b04e_--_lambda_invoker_cdecl_.c)
 *     _lambda_d2b5a6ed0b58bba383995fb75711c660_::_lambda_invoker_cdecl_ @ 0x1801E9B60 (_lambda_d2b5a6ed0b58bba383995fb75711c660_--_lambda_invoker_cdecl_.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801EBA7C (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18002BF04 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18002BFA4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801EA3C0 (-DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB8D8 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801EC234 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CManipulationManager::OnInput(CManipulationManager *this)
{
  __int64 v2; // rbx
  int *v3; // r14
  __int64 v4; // r8
  __int64 v5; // rcx
  struct CManipulationFrame *v6; // rdi
  int v8; // [rsp+20h] [rbp-39h] BYREF
  struct CManipulationFrame *v9; // [rsp+28h] [rbp-31h] BYREF
  __int64 v10; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v11[48]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v12[48]; // [rsp+68h] [rbp+Fh] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v11, L"GestureTargetingInput", 0LL);
  v2 = 0LL;
  v3 = &v8;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v12,
      L"GestureTargetingInputFrame",
      (const struct InputTraceLogging::PerfRegion *)v11);
    LOBYTE(v4) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v5, &v9, v4, v3);
    v6 = v9;
    v9 = 0LL;
    v10 = v2;
    v2 = (__int64)v6;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v9);
    v3 = 0LL;
    if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
        McTemplateU0qq(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_FRAME_DEQUEUED,
          *((_DWORD *)v6 + 6),
          *((_DWORD *)v6 + 4));
      InputTraceLogging::GestureTargeting::DequeuePointerFrame(
        *((_QWORD *)v6 + 22),
        *((_QWORD *)v6 + 4),
        *((_DWORD *)v6 + 6),
        *((_DWORD *)v6 + 4));
      CManipulationManager::ProcessManipulationInfo(this, v6);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v12);
  }
  while ( v8-- );
  v10 = (__int64)v6;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v10);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v11);
}
