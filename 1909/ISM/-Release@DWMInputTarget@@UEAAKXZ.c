/*
 * XREFs of ?Release@DWMInputTarget@@UEAAKXZ @ 0x180009920
 * Callers:
 *     ?Release@DWMInputTarget@@W7EAAKXZ @ 0x180038B40 (-Release@DWMInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBA@EAAKXZ @ 0x180038B50 (-Release@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBI@EAAKXZ @ 0x180038B60 (-Release@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCA@EAAKXZ @ 0x180038B70 (-Release@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCI@EAAKXZ @ 0x180038B80 (-Release@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDA@EAAKXZ @ 0x180038B90 (-Release@DWMInputTarget@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDI@EAAKXZ @ 0x180038BA0 (-Release@DWMInputTarget@@WDI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Release(DWMInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 56);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 16);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 16) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 56);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
