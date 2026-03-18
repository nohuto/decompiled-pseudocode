/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00B3568
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C00B3414 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01CA37C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01CA3DC (FeedbackGetWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

__int64 __fastcall Feedback::GetStore(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = GetProp(a2, (unsigned __int16)gatomFeedbackSettings, 1LL);
  return a1;
}
