/*
 * XREFs of ?Release@InputStateManager@@UEAAKXZ @ 0x180008C90
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x180038380 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x180038390 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800383A0 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::Release(InputStateManager *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 24);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
