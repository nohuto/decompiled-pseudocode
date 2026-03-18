/*
 * XREFs of ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1801F3ED4
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020DF74 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x1801F4788 (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801F4A48 (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CRadialGradientBrush::CreateRadialGradientEffect(
        CRadialGradientBrush *this,
        struct CRadialGradientEffect **a2)
{
  __int64 v3; // rax
  bool IsCenteredGradient; // di
  char *v6; // rax
  _QWORD *v7; // rcx
  volatile signed __int32 *v8; // rbx
  int v9; // esi
  CDirtyRegion *v10; // rcx
  struct CRadialGradientEffect *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v14; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp+18h]

  v14 = 0LL;
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    v14 = (volatile signed __int32 *)*((_QWORD *)this + 23);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v8 = v14;
  }
  else
  {
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(&v14);
    IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
    v6 = (char *)DefaultHeap::Alloc(0x48uLL);
    v8 = (volatile signed __int32 *)v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 8) = 0;
      v7 = v6 + 36;
      *((_DWORD *)v6 + 2) = 0;
      *(_QWORD *)v6 = &CRadialGradientEffect::`vftable'{for `CMILRefCountBase'};
      *((_QWORD *)v6 + 2) = &CRadialGradientEffect::`vftable'{for `Windows::UI::Composition::IEffectInstance'};
      *((_QWORD *)v6 + 3) = &CRadialGradientEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
      v6[68] = IsCenteredGradient;
      if ( IsCenteredGradient )
        *v7 = 0LL;
      else
        memset_0(v7, 0, 0x20uLL);
    }
    else
    {
      v8 = 0LL;
    }
    v15 = v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v14 = v8;
      v15 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, 0x8007000E, 0x14u, 0LL);
      v8 = v14;
    }
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_18;
    }
    v10 = (CDirtyRegion *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = v14;
    }
    if ( v10 )
      CDirtyRegion::Release(v10);
  }
  v11 = (struct CRadialGradientEffect *)v8;
  v8 = 0LL;
  v9 = 0;
  *a2 = v11;
LABEL_18:
  if ( v8 )
    CDirtyRegion::Release((CDirtyRegion *)v8);
  return (unsigned int)v9;
}
