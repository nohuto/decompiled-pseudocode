/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18008350C
 * Callers:
 *     _dynamic_initializer_for__BlockError__ @ 0x180003770 (_dynamic_initializer_for__BlockError__.c)
 *     _dynamic_initializer_for__BlockIdle__ @ 0x1800037C0 (_dynamic_initializer_for__BlockIdle__.c)
 *     _dynamic_initializer_for__BlockListening__ @ 0x180003810 (_dynamic_initializer_for__BlockListening__.c)
 *     _dynamic_initializer_for__BlockResponding__ @ 0x180003940 (_dynamic_initializer_for__BlockResponding__.c)
 *     _dynamic_initializer_for__BlockThinking__ @ 0x180003A50 (_dynamic_initializer_for__BlockThinking__.c)
 *     _dynamic_initializer_for__error__ @ 0x180003C60 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x1800049F0 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__listening__ @ 0x180004B20 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180005EF0 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180007090 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEBUColor@UI@Windows@@0Uforward_iterator_tag@1@@Z @ 0x18039CE90 (--$_Range_construct_or_tidy@PEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UCol.c)
 */

_QWORD *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<Windows::UI::Color>::_Range_construct_or_tidy<Windows::UI::Color const *>(a1, *a2, a2[1]);
  return a1;
}
