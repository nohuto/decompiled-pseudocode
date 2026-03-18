/*
 * XREFs of ?IsOfType@COverlayRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COverlayRenderTarget::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  char v3; // bl

  if ( a2 == 110 || a2 == 43 )
    return 1;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2) : 0 )
    return 1;
  return v3;
}
