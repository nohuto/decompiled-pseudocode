/*
 * XREFs of ?GetModifierState@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801484A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetModifierState(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 136LL))(
           *((_QWORD *)this + 4),
           a2);
}
