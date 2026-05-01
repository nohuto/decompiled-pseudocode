/*
 * XREFs of ?get@HasThreadAccess@ICoreDispatcher@Core@UI@Windows@@UE$AAA_NXZ @ 0x18029092C
 * Callers:
 *     ?IsUIThread@@YA_NXZ @ 0x18028F250 (-IsUIThread@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
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
