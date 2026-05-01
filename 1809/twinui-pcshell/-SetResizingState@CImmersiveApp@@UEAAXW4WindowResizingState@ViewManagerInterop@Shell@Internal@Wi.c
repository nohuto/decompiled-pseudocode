/*
 * XREFs of ?SetResizingState@CImmersiveApp@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180120460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetResizingState(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 328) )
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 320) + 248LL))(**(_QWORD **)(a1 + 320));
  return result;
}
