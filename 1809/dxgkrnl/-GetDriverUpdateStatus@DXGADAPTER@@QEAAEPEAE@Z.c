/*
 * XREFs of ?GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z @ 0x1C00EE0B0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DpiIsDriverUpdateInProgress @ 0x1C00F012C (DpiIsDriverUpdateInProgress.c)
 */

unsigned __int8 __fastcall DXGADAPTER::GetDriverUpdateStatus(DXGADAPTER *this, unsigned __int8 *a2)
{
  int v2; // eax

  *a2 = 0;
  v2 = *((_DWORD *)this + 77);
  if ( (v2 & 0x20) != 0 || (v2 & 4) != 0 )
    return 0;
  else
    return DpiIsDriverUpdateInProgress(*((_QWORD *)this + 24));
}
