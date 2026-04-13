/*
 * XREFs of ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18000A6F0
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B8AC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x1800283A4 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

bool IsActiveSessionCountLimited(void)
{
  ULONGLONG v0; // rax
  DWORDLONG v1; // rdi
  bool v2; // bl
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&VersionInformation, 0, sizeof(VersionInformation));
  v0 = VerSetConditionMask(0LL, 0x40u, 6u);
  VersionInformation.dwOSVersionInfoSize = 284;
  v1 = v0;
  VersionInformation.wSuiteMask = 16;
  v2 = VerifyVersionInfoW(&VersionInformation, 0x40u, v0);
  VersionInformation.wSuiteMask = 256;
  return !(v2 & !VerifyVersionInfoW(&VersionInformation, 0x40u, v1));
}
