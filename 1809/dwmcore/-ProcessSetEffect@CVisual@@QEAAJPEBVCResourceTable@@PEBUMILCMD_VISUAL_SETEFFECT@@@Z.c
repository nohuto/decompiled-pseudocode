/*
 * XREFs of ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800298F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180029D78 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetEffect(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETEFFECT *a3)
{
  struct CEffect *Resource; // rax
  __int64 v5; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CEffect *)CResourceTable::GetResource(a2, v5, 49LL)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0xAA5u);
  }
  else
  {
    v8 = CVisual::SetEffect(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xAA9u);
  }
  return v10;
}
