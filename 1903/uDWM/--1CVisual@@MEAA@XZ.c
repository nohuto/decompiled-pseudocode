/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x18001831C
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180020E34 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180022100 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180023120 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180026104 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180037C80 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??_GUdwmBottomVisual@@UEAAPEAXI@Z @ 0x180039830 (--_GUdwmBottomVisual@@UEAAPEAXI@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x180094B4C (--1CRippleEffect@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800AE9C8 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036A78 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  void *v6; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 12) = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                           + 448LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           0LL);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x131u, v6);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
