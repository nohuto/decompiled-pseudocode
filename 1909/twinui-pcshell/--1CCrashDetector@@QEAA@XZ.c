/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x18015AC88
 * Callers:
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18015AF70 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1802B2460 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 *     _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x1802B2490 (_lambda_858eee636f27872cdf74bbc97c00a8bc_--operator().c)
 *     _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802C2E84 (_lambda_795e02c192f463c18ca265aec6362396_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18015DD4C (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  char *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  if ( *((_QWORD *)this + 2) )
    CCrashDetector::StopMonitoring(this);
  v2 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = *(void (__fastcall ****)(_QWORD, __int64))this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
}
