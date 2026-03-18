/*
 * XREFs of ?OnTimerNotification@InteractiveControlDevice@@QEAAJXZ @ 0x1C0211C68
 * Callers:
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1C0210DC0 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C02116D8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0212154 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::OnTimerNotification(InteractiveControlDevice *this)
{
  __int16 v2; // ax
  _WORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+2Ch] [rbp-1Ch]

  if ( !*((_DWORD *)this + 58) )
    *((_DWORD *)this + 94) = 1;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 95) = 1;
  InteractiveControlDevice::FlushBufferedInput(this, 128);
  v2 = *((_WORD *)this + 196);
  v5 = 0;
  v7 = 0;
  v4[0] = v2;
  v6 = 1;
  InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v4);
  return 0LL;
}
