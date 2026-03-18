/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C00DBAD4
 * Callers:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00DB9EC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02C19B8 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003A2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z @ 0x1C00DBB20 (-BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z.c)
 */

bool __fastcall BmlIsSupportedSourceMode(DMMVIDPNSOURCEMODE *a1, bool a2, int a3)
{
  int v4; // eax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  if ( a1 )
  {
    v4 = *((_DWORD *)a1 + 18);
    if ( a3 == 2 )
      goto LABEL_7;
    if ( v4 == 1 )
    {
LABEL_4:
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1);
      return BmlIsSupportedGraphicsFormat(GraphicsInfo, a2);
    }
    if ( a3 != 1 )
    {
LABEL_7:
      if ( (unsigned int)(v4 - 3) <= 1 )
        goto LABEL_4;
    }
  }
  return 0;
}
