/*
 * XREFs of ?Release@DWMLegacyInputTarget@@UEAAKXZ @ 0x1800524B0
 * Callers:
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x180054510 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x180054570 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800545C0 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMLegacyInputTarget::Release(DWMLegacyInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 24);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 24);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
