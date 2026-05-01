/*
 * XREFs of wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1803315AC
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180332420 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 * Callees:
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x180331DC8 (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
