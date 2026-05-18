/*
 * XREFs of sub_18000D618 @ 0x18000D618
 * Callers:
 *     CreateDwmSceneRenderer @ 0x18000D8D0 (CreateDwmSceneRenderer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D618(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18000D570(a1, a2);
}
