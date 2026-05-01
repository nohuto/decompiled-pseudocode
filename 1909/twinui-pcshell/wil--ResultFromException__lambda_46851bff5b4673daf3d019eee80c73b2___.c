/*
 * XREFs of wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180015E60
 * Callers:
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180015E24 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x180074CB0 (_lambda_46851bff5b4673daf3d019eee80c73b2_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_46851bff5b4673daf3d019eee80c73b2_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
