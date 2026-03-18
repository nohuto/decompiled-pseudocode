/*
 * XREFs of ?Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStrokeRenderState@@PEAVCGenericInkTipPointSource@@IPEAUIDCompositionDirectInkFactoryPartner@@PEAPEAV1@@Z @ 0x180183E24
 * Callers:
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180178110 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CSuperWetInkScribble@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@PEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180183FA8 (-Initialize@CSuperWetInkScribble@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@PEAUIDComposi.c)
 */

__int64 __fastcall CSuperWetInkScribble::Create(
        struct IDCompositionDirectInkWetStrokePartner *a1,
        const struct DCompWetInkStrokeRenderState *a2,
        struct CGenericInkTipPointSource *a3,
        int a4,
        struct IDCompositionDirectInkFactoryPartner *a5,
        struct CSuperWetInkScribble **a6)
{
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rdi
  CMILRefCountBase *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (volatile signed __int32 *)operator new(0x60uLL);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CSuperWetInkScribble::`vftable';
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    *((_OWORD *)v10 + 2) = *(_OWORD *)a2;
    *((_OWORD *)v10 + 3) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v10 + 4) = *((_OWORD *)a2 + 2);
    *((_QWORD *)v10 + 10) = *((_QWORD *)a2 + 6);
    *((_DWORD *)v10 + 22) = a4;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (CMILRefCountBase *)v11;
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v12 = (CMILRefCountBase *)v11;
  }
  v13 = CSuperWetInkScribble::Initialize((CSuperWetInkScribble *)v11, a1, a5);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v12 = 0LL;
    v14 = 0;
    *a6 = (struct CSuperWetInkScribble *)v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v13);
  }
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return v14;
}
