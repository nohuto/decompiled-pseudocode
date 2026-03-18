/*
 * XREFs of DxgkInitializeDriverWorkarounds @ 0x1C0022BB0
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0150138 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkInitializeDriverWorkarounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 || *(_DWORD *)(v2 + 16) != 1953656900 || *(_DWORD *)(v2 + 20) != 2 )
    return 3221225485LL;
  if ( a2 )
    *a2 = v2 + 5528;
  return 0LL;
}
