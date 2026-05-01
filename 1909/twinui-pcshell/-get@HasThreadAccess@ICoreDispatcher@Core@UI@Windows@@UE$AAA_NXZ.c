/*
 * XREFs of ?get@HasThreadAccess@ICoreDispatcher@Core@UI@Windows@@UE$AAA_NXZ @ 0x18030956C
 * Callers:
 *     ?IsUIThread@@YA_NXZ @ 0x180307E20 (-IsUIThread@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

char __fastcall Windows::UI::Core::ICoreDispatcher::HasThreadAccess::get(__int64 a1)
{
  int v1; // eax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 48LL))(a1, &v3);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  return v3;
}
