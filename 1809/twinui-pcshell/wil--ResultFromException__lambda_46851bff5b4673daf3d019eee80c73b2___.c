/*
 * XREFs of wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180031B84
 * Callers:
 *     _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180031A94 (_lambda_7a5168388c52e35df9f99ba32a5252ab_--operator().c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180033400 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180332520 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x18005BC80 (_lambda_46851bff5b4673daf3d019eee80c73b2_--operator().c)
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
