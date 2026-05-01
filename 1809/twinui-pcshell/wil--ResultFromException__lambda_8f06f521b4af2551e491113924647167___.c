/*
 * XREFs of wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167___ @ 0x180095600
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___ @ 0x180095310 (ShellPositionerManager--DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___.c)
 * Callees:
 *     _lambda_8f06f521b4af2551e491113924647167_::operator() @ 0x18009582C (_lambda_8f06f521b4af2551e491113924647167_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_8f06f521b4af2551e491113924647167_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
