/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x18002A230
 * Callers:
 *     ?Release@MPCInputRouter@@W7EAAKXZ @ 0x180037AA0 (-Release@MPCInputRouter@@W7EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WBA@EAAKXZ @ 0x180037AB0 (-Release@MPCInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WBI@EAAKXZ @ 0x180037AC0 (-Release@MPCInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCA@EAAKXZ @ 0x180037AD0 (-Release@MPCInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCI@EAAKXZ @ 0x180037AE0 (-Release@MPCInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDA@EAAKXZ @ 0x180037AF0 (-Release@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDCI@EAAKXZ @ 0x180037B00 (-Release@MPCInputRouter@@WDCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDDA@EAAKXZ @ 0x180037B10 (-Release@MPCInputRouter@@WDDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDI@EAAKXZ @ 0x180037B20 (-Release@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WEA@EAAKXZ @ 0x180037B30 (-Release@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WEI@EAAKXZ @ 0x180037B40 (-Release@MPCInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 72);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 20);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 20) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 72);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
