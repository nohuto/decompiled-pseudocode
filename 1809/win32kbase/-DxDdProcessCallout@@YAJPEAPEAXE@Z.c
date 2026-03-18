/*
 * XREFs of ?DxDdProcessCallout@@YAJPEAPEAXE@Z @ 0x1C007EEF0
 * Callers:
 *     GdiProcessCallout @ 0x1C0108800 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxDdProcessCallout(void **a1, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return ((__int64 (__fastcall *)(void **, void *, __int64))qword_1C01CD678)(a1, &gDxgkWin32kEngInterface, a3);
}
