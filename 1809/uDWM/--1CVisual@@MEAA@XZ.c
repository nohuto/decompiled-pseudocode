/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x18001CCF0
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180013E48 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180021570 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x1800232D0 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180025BCC (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_GUdwmBottomVisual@@UEAAPEAXI@Z @ 0x180038760 (--_GUdwmBottomVisual@@UEAAPEAXI@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x18008FEC4 (--1CRippleEffect@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800AA648 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  __int64 v5; // rax
  int v6; // eax

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 12) = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v5 + 16) + 424LL))(
           *(_QWORD *)(v5 + 16),
           *(unsigned int *)(v5 + 24),
           0LL);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x13Au);
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
