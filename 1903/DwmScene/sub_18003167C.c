/*
 * XREFs of sub_18003167C @ 0x18003167C
 * Callers:
 *     sub_180021B70 @ 0x180021B70 (sub_180021B70.c)
 *     sub_180022260 @ 0x180022260 (sub_180022260.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_180034170 @ 0x180034170 (sub_180034170.c)
 *     sub_180034820 @ 0x180034820 (sub_180034820.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003167C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
