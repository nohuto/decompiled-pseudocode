/*
 * XREFs of ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800ADA5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800ADAAC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetEffect(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEFFECT *a3)
{
  struct CEffect *Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CEffect *)CResourceTable::GetResource((__int64)a2, v5, 0x33u)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x88980403, 0xAF9u, 0LL);
  }
  else
  {
    v8 = CVisual::SetEffect(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xAFDu, 0LL);
  }
  return v10;
}
