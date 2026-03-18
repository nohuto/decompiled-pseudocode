/*
 * XREFs of ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x1C00360D8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SupportGetMultiPlaneOverlayCaps(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 139) )
    return *((_BYTE *)this + 2498) != 0;
  return result;
}
