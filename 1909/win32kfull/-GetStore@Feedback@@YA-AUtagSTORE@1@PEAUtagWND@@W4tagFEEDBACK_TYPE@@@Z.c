/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C001AB38
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C001A9C4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01DDC6C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01DDCCC (FeedbackGetWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

_QWORD *__fastcall Feedback::GetStore(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
  *((_DWORD *)a1 + 2) = GetProp(a2, (unsigned __int16)gatomFeedbackSettings, 1LL);
  return a1;
}
