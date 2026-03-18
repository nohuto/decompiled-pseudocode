/*
 * XREFs of ?SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z @ 0x1C00A89D4
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000C2BC (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::SetTargetProperty(
        DirectComposition::CAnimationBinding *this,
        float a2,
        bool *a3)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, bool *, bool *))(**((_QWORD **)this + 2) + 144LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 3),
    a3,
    a3);
}
