/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C003FC30
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C003FAA4 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, char *); // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 2104LL) == -1 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(v1 + 2896);
    if ( v4 )
      *(_DWORD *)(*(_QWORD *)this + 2104LL) = v4(*(_QWORD *)(v1 + 1800), 0LL, 0LL, &v5);
    else
      *(_DWORD *)(v1 + 2104) = 0;
  }
  return *(unsigned int *)(*(_QWORD *)this + 2104LL);
}
