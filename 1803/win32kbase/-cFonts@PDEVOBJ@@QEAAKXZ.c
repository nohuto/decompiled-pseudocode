/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0032300
 * Callers:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0066DD0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00767F4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, char *); // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 2096LL) == -1 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(v1 + 2888);
    if ( v4 )
      *(_DWORD *)(*(_QWORD *)this + 2096LL) = v4(*(_QWORD *)(v1 + 1792), 0LL, 0LL, &v5);
    else
      *(_DWORD *)(v1 + 2096) = 0;
  }
  return *(unsigned int *)(*(_QWORD *)this + 2096LL);
}
