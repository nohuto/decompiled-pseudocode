/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0011444
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(DXGADAPTER **this)
{
  int v1; // edx
  int v2; // r8d

  if ( DXGADAPTER::IsDxgmms2(this[2]) )
    return v2 * ((v1 << 6) + 8) + v1 * ((8 * v2 + 191) & 0xFFFFFFF8) + 576;
  else
    return 1296LL;
}
