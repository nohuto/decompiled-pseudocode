/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x18003A7C0
 * Callers:
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x18003A720 (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1801CD790 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002A2AC (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x18003A96C (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  CCompositionSurfaceInfo **v2; // rdi
  CCompositionSurfaceInfo *v3; // rcx
  __int64 v4; // r8

  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( *((_QWORD *)this + 4) )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  v2 = (CCompositionSurfaceInfo **)((char *)this + 48);
  v3 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 6);
  v4 = (__int64)(*((_QWORD *)this + 7) - (_QWORD)v3) >> 3;
  if ( v4 )
  {
    detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 6,
      0LL,
      v4);
    v3 = *v2;
  }
  *v2 = 0LL;
  if ( v3 == (CCompositionSurfaceInfo *)((char *)this + 72) )
    v3 = 0LL;
  operator delete(v3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
