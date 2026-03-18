/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801C23CC
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x18025B744 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180089E04 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801C46F4 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 v3; // rcx
  __int64 BspPolygonList; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  signed int v11; // eax
  struct CPolygon *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( BspPolygonList )
  {
LABEL_8:
    v8 = *(_DWORD *)(BspPolygonList + 24);
    v9 = v8 + 1;
    if ( v8 + 1 >= v8 )
    {
      if ( v9 <= *(_DWORD *)(BspPolygonList + 20) )
      {
        *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * *(unsigned int *)(BspPolygonList + 24)) = v13;
        *(_DWORD *)(BspPolygonList + 24) = v9;
        v7 = 0;
LABEL_15:
        (**(void (__fastcall ***)(struct CPolygon *))v13)(v13);
        return v7;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8, 1, &v13);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC3u, 0LL);
    }
    else
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x1A12u, 0LL);
      return v7;
    }
    goto LABEL_15;
  }
  v5 = DefaultHeap::Alloc(0x20uLL);
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
  if ( BspPolygonList )
  {
    CVisual::SetBspPolygonList(this, BspPolygonList);
    goto LABEL_8;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x1A0Eu, 0LL);
  return v7;
}
