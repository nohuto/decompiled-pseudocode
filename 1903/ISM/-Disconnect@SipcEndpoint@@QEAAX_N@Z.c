/*
 * XREFs of ?Disconnect@SipcEndpoint@@QEAAX_N@Z @ 0x1800D555C
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800279A0 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::Disconnect(SipcEndpoint *this, char a2)
{
  __int64 v4; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( a2 )
    (*((void (__fastcall **)(_QWORD, char *, _QWORD))this + 19))(*((_QWORD *)this + 22), (char *)this + 16, 0LL);
}
