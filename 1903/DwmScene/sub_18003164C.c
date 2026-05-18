/*
 * XREFs of sub_18003164C @ 0x18003164C
 * Callers:
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003164C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 176);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
