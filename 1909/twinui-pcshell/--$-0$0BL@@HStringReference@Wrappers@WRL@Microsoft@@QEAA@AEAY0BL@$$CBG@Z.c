/*
 * XREFs of ??$?0$0BL@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BL@$$CBG@Z @ 0x18014BB6C
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18033908C (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *this,
        const WCHAR *a2)
{
  this[1].Reserved.Reserved1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(this, a2, 0x1Bu, 0x1Au);
  return this;
}
