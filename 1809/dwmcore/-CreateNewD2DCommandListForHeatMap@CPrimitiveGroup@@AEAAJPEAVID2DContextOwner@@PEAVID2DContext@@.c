/*
 * XREFs of ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801ABBDC
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801ABE90 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  __int64 v4; // rax
  char v7; // si
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  struct ID2DContextOwner *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  struct ID2DContextOwner *v18; // rcx
  int v19; // r9d
  unsigned int v21; // [rsp+20h] [rbp-40h]
  char *v22; // [rsp+80h] [rbp+20h] BYREF
  struct ID2DContextOwner *v23; // [rsp+88h] [rbp+28h] BYREF

  v23 = a2;
  v4 = *(_QWORD *)a3;
  *a4 = 0LL;
  v23 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct ID2DContextOwner **))(v4 + 232))(
         a3,
         *((_QWORD *)this + 84),
         *((_QWORD *)this + 85),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         &v23);
  v10 = v8;
  if ( v8 < 0 )
  {
    v21 = 933;
    v19 = v8;
    goto LABEL_21;
  }
  v11 = v23;
  v22 = (char *)this + 56;
  v12 = *((_DWORD *)v23 + 20);
  v13 = v12 + 1;
  v10 = v12 + 1 < v12 ? 0x80070216 : 0;
  if ( v12 + 1 < v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xB5u);
  }
  else if ( v13 > *((_DWORD *)v23 + 19) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23 + 56, 8, 1, &v22);
    v10 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    v9 = v12;
    *(_QWORD *)(*((_QWORD *)v23 + 7) + 8LL * v12) = v22;
    *((_DWORD *)v11 + 20) = v13;
  }
  if ( v10 < 0 )
  {
    v21 = 935;
    goto LABEL_18;
  }
  v15 = *((_DWORD *)this + 34);
  v7 = 1;
  v16 = v15 + 1;
  v10 = v15 + 1 < v15 ? 0x80070216 : 0;
  if ( v15 + 1 < v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xB5u);
  }
  else if ( v16 > *((_DWORD *)this + 33) )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8, 1, &v23);
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v17, 0xC0u);
  }
  else
  {
    v9 = v15;
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v15) = v23;
    *((_DWORD *)this + 34) = v16;
  }
  if ( v10 < 0 )
  {
    v21 = 938;
LABEL_18:
    v19 = v10;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v19, v21);
    v18 = v23;
    goto LABEL_22;
  }
  v18 = 0LL;
  *a4 = v23;
  v23 = 0LL;
LABEL_22:
  if ( v10 < 0 && v7 )
  {
    CD2DResource::RemoveResourceNotifier(
      (struct ID2DContextOwner *)((char *)v18 + 16),
      (CPrimitiveGroup *)((char *)this + 56));
    v18 = v23;
  }
  if ( v18 )
    (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v10;
}
