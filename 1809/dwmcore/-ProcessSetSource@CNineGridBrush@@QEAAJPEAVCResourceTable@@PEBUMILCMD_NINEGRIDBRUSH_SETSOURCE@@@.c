/*
 * XREFs of ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x18006EA30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006EA8C (-SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z @ 0x18006EAFC (-IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetSource(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETSOURCE *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CSpriteVisualContent *v5; // rbx
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType && !CNineGridBrush::IsValidSourceResource(ResourceWithoutType) )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x116u);
  }
  else
  {
    v7 = CNineGridBrush::SetSource(this, v5);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x11Au);
  }
  return v9;
}
