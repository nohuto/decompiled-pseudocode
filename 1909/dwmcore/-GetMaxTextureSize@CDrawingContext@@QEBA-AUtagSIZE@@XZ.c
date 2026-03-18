/*
 * XREFs of ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180013A24
 * Callers:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800139E8 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801FC97C (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

struct tagSIZE __fastcall CDrawingContext::GetMaxTextureSize(struct _LUID *this, unsigned int *a2)
{
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // edx
  struct CD3DDeviceLevel1 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[49], &v8);
  v4 = v8;
  if ( ExistingDevice < 0 )
  {
    *a2 = 0;
    a2[1] = 0;
    if ( !v4 )
      return (struct tagSIZE)a2;
  }
  else
  {
    v5 = *((_DWORD *)v8 + 188);
    v6 = *((_DWORD *)v8 + 189);
    if ( v5 >= 0x4000 )
      v5 = 0x4000;
    *a2 = v5;
    if ( v6 >= 0x4000 )
      v6 = 0x4000;
    a2[1] = v6;
  }
  CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 496));
  return (struct tagSIZE)a2;
}
