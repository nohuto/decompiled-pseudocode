/*
 * XREFs of ?GetHardwareKeyboardTextIntelligenceEnabled@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x180148320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetHardwareKeyboardTextIntelligenceEnabled(
        TextInputStateAdapter *this,
        bool *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, bool *))(**((_QWORD **)this + 4) + 288LL))(*((_QWORD *)this + 4), a2);
}
