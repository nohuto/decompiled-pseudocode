/*
 * XREFs of ?_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z @ 0x18014B8B0
 * Callers:
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x180145B98 (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2)
{
  if ( *((_QWORD *)this + 22) )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(***((_QWORD ***)this + 21) + 136LL))(
      **((_QWORD **)this + 21),
      a2,
      (unsigned int)a2);
}
