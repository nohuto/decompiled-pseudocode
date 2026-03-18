/*
 * XREFs of ?ProcessSetSourceModifications@CImageLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH_SETSOURCEMODIFICATIONS@@@Z @ 0x18019AB24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18001ABB8 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessSetSourceModifications(
        CImageLegacyMilBrush *this,
        const struct CResourceTable *a2,
        const struct MILCMD_IMAGELEGACYMILBRUSH_SETSOURCEMODIFICATIONS *a3)
{
  __int64 v3; // r11
  __int64 v4; // r10

  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
  Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), (struct _D3DCOLORVALUE *)((char *)this + 56));
  Convert_MilColorB_sRGB_To_MilColorF_scRGB(*(_DWORD *)(v3 + 16), (struct _D3DCOLORVALUE *)(v4 + 72));
  return 0LL;
}
