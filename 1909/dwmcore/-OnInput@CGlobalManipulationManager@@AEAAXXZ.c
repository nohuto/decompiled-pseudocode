/*
 * XREFs of ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660
 * Callers:
 *     _lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_ @ 0x180236220 (_lambda_35cedf73a04efee64cd2b082b9370e6e_--_lambda_invoker_cdecl_.c)
 *     _lambda_3a52e5ab84f05e70b0707a801853e716_::_lambda_invoker_cdecl_ @ 0x180236290 (_lambda_3a52e5ab84f05e70b0707a801853e716_--_lambda_invoker_cdecl_.c)
 *     ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802382EC (-ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT.c)
 * Callees:
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800A9990 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800A9A28 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800D81A8 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x180236BB0 (-DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238120 (-ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CGlobalManipulationManager::OnInput(CGlobalManipulationManager *this)
{
  struct CManipulationFrame *v2; // rbx
  int *v3; // rsi
  struct CManipulationFrame *v4; // rdi
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-59h] BYREF
  struct CManipulationFrame *v8; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v9[48]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v10[48]; // [rsp+80h] [rbp+7h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v9, L"GestureTargetingInput", 0LL);
  v2 = 0LL;
  v3 = &v7;
  do
  {
    v4 = v2;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v10,
      L"GestureTargetingInputFrame",
      (const struct InputTraceLogging::PerfRegion *)v9);
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v5, &v8, 1, v3);
    v2 = v8;
    v8 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = 0LL;
    if ( v2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
        McTemplateU0qq(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_FRAME_DEQUEUED,
          *((_DWORD *)v2 + 6),
          *((_DWORD *)v2 + 4));
      InputTraceLogging::GestureTargeting::DequeuePointerFrame(
        *((_QWORD *)v2 + 28),
        *((_QWORD *)v2 + 4),
        *((_DWORD *)v2 + 6),
        *((_DWORD *)v2 + 4));
      CGlobalManipulationManager::ProcessManipulationInfo(this, v2);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v10);
  }
  while ( v7-- );
  if ( v2 )
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v2 + 8LL))(v2);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v9);
}
