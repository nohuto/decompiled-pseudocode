/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801B5F58
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x180230FF4 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1801B6834 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801B81E8 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 v3; // rcx
  __int64 BspPolygonList; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  struct CPolygon *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  BspPolygonList = CVisual::GetBspPolygonList(this);
  if ( !BspPolygonList )
  {
    v5 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
    BspPolygonList = (__int64)v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 4) = 0;
      *((_DWORD *)v5 + 5) = 0;
      *((_DWORD *)v5 + 6) = 0;
    }
    else
    {
      BspPolygonList = 0LL;
    }
    if ( !BspPolygonList )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x195Au);
      return (unsigned int)v7;
    }
    CVisual::SetBspPolygonList(this, BspPolygonList);
  }
  v8 = *(_DWORD *)(BspPolygonList + 24);
  v9 = v8 + 1;
  v7 = v8 + 1 < v8 ? 0x80070216 : 0;
  if ( v8 + 1 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v7, 0xB5u);
  }
  else if ( v9 > *(_DWORD *)(BspPolygonList + 20) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8, 1, &v13);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v10 = v8;
    *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * v8) = v13;
    *(_DWORD *)(BspPolygonList + 24) = v9;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x195Eu);
  else
    (**(void (__fastcall ***)(struct CPolygon *))v13)(v13);
  return (unsigned int)v7;
}
