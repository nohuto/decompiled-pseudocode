/*
 * XREFs of ??$?0$0BJ@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BJ@$$CBG@Z @ 0x180106A9C
 * Callers:
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18010A120 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *this,
        const WCHAR *a2)
{
  this[1].Reserved.Reserved1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(this, a2, 0x19u, 0x18u);
  return this;
}
