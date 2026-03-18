/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00EECA0
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C00EEBF4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01A825C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01A82B0 (FeedbackGetWindowSetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feedback::GetStore(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = RealGetProp(*(_QWORD *)(a2 + 120), (unsigned __int16)gatomFeedbackSettings, 1LL);
  return a1;
}
