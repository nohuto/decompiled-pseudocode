/*
 * XREFs of ?AnimateClipChangedElement@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUClipChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x18037B6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SwitchItemCloseAnimationCoordinator::AnimateClipChangedElement(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ClipChangedInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 104LL))(*(_QWORD *)a2, (char *)a2 + 8, 19LL);
}
