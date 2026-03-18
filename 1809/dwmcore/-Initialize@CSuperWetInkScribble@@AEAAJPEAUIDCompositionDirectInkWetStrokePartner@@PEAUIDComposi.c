/*
 * XREFs of ?Initialize@CSuperWetInkScribble@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@PEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180183FA8
 * Callers:
 *     ?Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStrokeRenderState@@PEAVCGenericInkTipPointSource@@IPEAUIDCompositionDirectInkFactoryPartner@@PEAPEAV1@@Z @ 0x180183E24 (-Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStro.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSuperWetInkScribble::Initialize(
        CSuperWetInkScribble *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        struct IDCompositionDirectInkFactoryPartner *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (_QWORD *)((char *)this + 16);
  v5 = *((_QWORD *)this + 2);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, char *, _QWORD *))(*(_QWORD *)a3 + 48LL))(
         a3,
         a2,
         (char *)this + 32,
         v3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
