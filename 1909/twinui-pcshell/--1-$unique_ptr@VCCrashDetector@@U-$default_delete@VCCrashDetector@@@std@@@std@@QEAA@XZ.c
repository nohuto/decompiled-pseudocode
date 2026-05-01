/*
 * XREFs of ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1802B2460
 * Callers:
 *     __lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()_::_1_::dtor$4 @ 0x1802B278B (__lambda_858eee636f27872cdf74bbc97c00a8bc_--operator()_--_1_--dtor$4.c)
 *     __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::dtor$4 @ 0x1802C31EA (__lambda_795e02c192f463c18ca265aec6362396_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18015AC88 (--1CCrashDetector@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CCrashDetector>::~unique_ptr<CCrashDetector>(CCrashDetector **a1)
{
  CCrashDetector *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CCrashDetector::~CCrashDetector(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
