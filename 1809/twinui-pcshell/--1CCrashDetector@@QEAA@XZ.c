/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x180113FAC
 * Callers:
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x180114290 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x18023CD90 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 *     _lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator() @ 0x18023CE30 (_lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator().c)
 *     _lambda_41ea728de8cee2282d4ec3314b3d541b_::operator() @ 0x18024D338 (_lambda_41ea728de8cee2282d4ec3314b3d541b_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x180116E78 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
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
