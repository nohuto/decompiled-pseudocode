/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C00175F8
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017530 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BE84 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(DXGADAPTER **this)
{
  __int64 v1; // rdx
  int v2; // r8d

  if ( DXGADAPTER::IsDxgmms2(this[2]) )
    return *(_DWORD *)(v1 + 2392) * ((v2 << 6) + ((8 * v2 + 191) & 0xFFFFFFF8)) + 8 * (v2 + 71);
  else
    return 1296LL;
}
