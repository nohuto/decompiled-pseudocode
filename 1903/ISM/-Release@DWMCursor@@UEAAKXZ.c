/*
 * XREFs of ?Release@DWMCursor@@UEAAKXZ @ 0x180008C90
 * Callers:
 *     ?Release@DWMCursor@@W7EAAKXZ @ 0x180038790 (-Release@DWMCursor@@W7EAAKXZ.c)
 *     ?Release@DWMCursor@@WBA@EAAKXZ @ 0x1800387A0 (-Release@DWMCursor@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::Release(DWMCursor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 16);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
