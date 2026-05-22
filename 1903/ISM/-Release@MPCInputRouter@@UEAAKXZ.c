/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x18002A6B0
 * Callers:
 *     ?Release@MPCInputRouter@@W7EAAKXZ @ 0x180037F90 (-Release@MPCInputRouter@@W7EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WBA@EAAKXZ @ 0x180037FA0 (-Release@MPCInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WBI@EAAKXZ @ 0x180037FB0 (-Release@MPCInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCA@EAAKXZ @ 0x180037FC0 (-Release@MPCInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCI@EAAKXZ @ 0x180037FD0 (-Release@MPCInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDA@EAAKXZ @ 0x180037FE0 (-Release@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDCI@EAAKXZ @ 0x180037FF0 (-Release@MPCInputRouter@@WDCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDDA@EAAKXZ @ 0x180038000 (-Release@MPCInputRouter@@WDDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDI@EAAKXZ @ 0x180038010 (-Release@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WEA@EAAKXZ @ 0x180038020 (-Release@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WEI@EAAKXZ @ 0x180038030 (-Release@MPCInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
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
