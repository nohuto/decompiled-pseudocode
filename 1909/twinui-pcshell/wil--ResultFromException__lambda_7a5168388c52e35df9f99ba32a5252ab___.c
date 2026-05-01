/*
 * XREFs of wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180015D38
 * Callers:
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x180015CF0 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 * Callees:
 *     _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180015D60 (_lambda_7a5168388c52e35df9f99ba32a5252ab_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_7a5168388c52e35df9f99ba32a5252ab_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
