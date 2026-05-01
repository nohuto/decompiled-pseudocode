/*
 * XREFs of ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x18023CD90
 * Callers:
 *     __lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator()_::_1_::dtor$4 @ 0x18023D12B (__lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator()_--_1_--dtor$4.c)
 *     __lambda_41ea728de8cee2282d4ec3314b3d541b_::operator()_::_1_::dtor$4 @ 0x18024D69E (__lambda_41ea728de8cee2282d4ec3314b3d541b_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x180113FAC (--1CCrashDetector@@QEAA@XZ.c)
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
