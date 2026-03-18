/*
 * XREFs of ??1CD2DCommandList@@MEAA@XZ @ 0x1801697B8
 * Callers:
 *     ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x180169840 (--_GCD2DCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x180169CC4 (-RemoveAll@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCP.c)
 */

void __fastcall CD2DCommandList::~CD2DCommandList(CD2DCommandList *this)
{
  int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = 0;
  *(_QWORD *)this = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  if ( *((int *)this + 30) > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)this + 14));
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      ++v1;
      v3 += 8LL;
    }
    while ( v1 < *((_DWORD *)this + 30) );
  }
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((char *)this + 104);
  CD2DResource::~CD2DResource(this);
}
