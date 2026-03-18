/*
 * XREFs of ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00EEC70
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C00EEBF4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01A825C (FeedbackClearWindowSetting.c)
 * Callees:
 *     <none>
 */

void __fastcall Feedback::Save(Feedback *this, const struct Feedback::tagSTORE *a2)
{
  RealInternalSetProp(
    *(_QWORD *)this + 120LL,
    (unsigned __int16)gatomFeedbackSettings,
    *((unsigned int *)this + 2),
    5LL);
}
