/*
 * XREFs of ?GetAsyncKeyState@ICoreWindow@Core@UI@Windows@@UE$AAA?AW4CoreVirtualKeyStates@234@W4VirtualKey@System@4@@Z @ 0x18027F9F8
 * Callers:
 *     _lambda_33af26c9d846f3b9c507d9b825ceee74_::operator() @ 0x18027E88C (_lambda_33af26c9d846f3b9c507d9b825ceee74_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Core::ICoreWindow::GetAsyncKeyState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *))(v2 + 160))(a1, a2, &v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return v5;
}
