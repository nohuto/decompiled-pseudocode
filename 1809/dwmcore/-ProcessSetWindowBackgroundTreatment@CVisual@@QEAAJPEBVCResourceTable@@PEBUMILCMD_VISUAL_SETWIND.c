/*
 * XREFs of ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800E4CB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800E4A74 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1800E4C54 (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800E4D88 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 */

__int64 __fastcall CVisual::ProcessSetWindowBackgroundTreatment(
        struct CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  struct CSpriteVisualContent *Resource; // rdi
  __int64 v8; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct CComposition *v10; // rbp
  CWindowBackgroundTreatment *v11; // rax
  CWindowBackgroundTreatment *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rcx
  struct CWindowBackgroundTreatment *v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CSpriteVisualContent *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) == 0LL )
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xABEu);
  }
  else
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)this);
    v16 = WindowBackgroundTreatmentInternal;
    if ( !WindowBackgroundTreatmentInternal
      || *((struct CSpriteVisualContent **)WindowBackgroundTreatmentInternal + 8) != Resource )
    {
      ReleaseInterface<ID2D1Geometry>((__int64 *)&v16);
      v10 = this[2];
      v16 = 0LL;
      v11 = (CWindowBackgroundTreatment *)operator new(0x198uLL);
      if ( v11 )
        v12 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v11, v10, Resource);
      else
        v12 = 0LL;
      Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=((__int64 *)&v16, (__int64)v12);
      if ( v16 )
      {
        CVisual::SetWindowBackgroundTreatmentInternal((CVisual *)this, v16);
        CVisual::PropagateFlags((__int64)this, 5u, 0);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x55u);
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0xAC7u);
      }
    }
  }
  return v3;
}
