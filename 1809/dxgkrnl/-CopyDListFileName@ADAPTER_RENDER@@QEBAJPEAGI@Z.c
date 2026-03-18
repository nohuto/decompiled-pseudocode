/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01C5F30
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00158A0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, char *a2)
{
  __int64 v4; // rdx
  char *v5; // r8
  unsigned __int16 v6; // ax

  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 1) != 0 )
  {
    v5 = (char *)*((_QWORD *)this + 52);
    v6 = *((_WORD *)this + 204);
  }
  else
  {
    v5 = (char *)*((_QWORD *)this + 50);
    v6 = *((_WORD *)this + 196);
  }
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, v4, v5, v6);
}
