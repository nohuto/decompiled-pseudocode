/*
 * XREFs of ?Release@WGIRawInputProvider@@UEAAKXZ @ 0x180008600
 * Callers:
 *     ?Release@WGIRawInputProvider@@W7EAAKXZ @ 0x180038430 (-Release@WGIRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@WGIRawInputProvider@@WBA@EAAKXZ @ 0x180038440 (-Release@WGIRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIRawInputProvider::Release(WGIRawInputProvider *this)
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
