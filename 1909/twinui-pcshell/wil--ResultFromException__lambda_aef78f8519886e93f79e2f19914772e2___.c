/*
 * XREFs of wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___ @ 0x1803B3708
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___ @ 0x1803B329C (ShellPositionerManager--DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___.c)
 * Callees:
 *     _lambda_aef78f8519886e93f79e2f19914772e2_::operator() @ 0x1803B3E70 (_lambda_aef78f8519886e93f79e2f19914772e2_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_aef78f8519886e93f79e2f19914772e2_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
