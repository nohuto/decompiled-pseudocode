/*
 * XREFs of ?GetTextHistory@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x180148560
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180149558 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@wil@@CAX_.c)
 */

__int64 __fastcall TextInputStateAdapter::GetTextHistory(TextInputStateAdapter *this, struct MsgString **a2)
{
  *a2 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::ReportUsageToService();
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgString **))(**((_QWORD **)this + 4) + 280LL))(
           *((_QWORD *)this + 4),
           a2);
}
