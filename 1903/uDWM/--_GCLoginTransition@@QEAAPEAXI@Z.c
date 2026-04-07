/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x18008F0B0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002C490 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x18008EC3C (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18002F6C8 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CLoginTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
