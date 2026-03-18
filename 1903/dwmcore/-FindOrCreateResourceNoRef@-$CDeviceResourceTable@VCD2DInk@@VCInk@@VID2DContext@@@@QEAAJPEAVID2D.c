/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180216830
 * Callers:
 *     ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180216AA0 (-GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180216BD4 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180216604 (-CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x18021D94C (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DInk **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // rdi
  char v5; // r15
  __int64 v6; // r9
  __int64 v9; // r8
  signed int DefaultDevice; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CD2DInk *v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  signed int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  struct CD2DInk *v20; // rcx
  signed int v21; // eax
  unsigned int v22; // r9d
  unsigned int v24; // [rsp+20h] [rbp-10h]
  struct CD2DInk *v25; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v26; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v26 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)a1 + 2);
      if ( !a2 || a2 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v6) + 24LL) + 24LL) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v25 = *(struct CD2DInk **)(v9 + 8 * v6);
    if ( v25 )
      goto LABEL_23;
  }
LABEL_7:
  if ( !a2 )
  {
    DefaultDevice = FindDefaultDevice(&v26);
    v3 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DefaultDevice, 0x4Fu, 0LL);
      v4 = v26;
LABEL_32:
      v20 = v25;
      goto LABEL_33;
    }
    v4 = v26;
    a2 = v26;
  }
  v12 = CInk::CreateResource(*((CInk **)a1 + 1), a2, &v25);
  v3 = v12;
  if ( v12 < 0 )
  {
    v22 = v12;
    v24 = 83;
    goto LABEL_31;
  }
  v14 = v25;
  v26 = a1;
  v15 = *((_DWORD *)v25 + 20);
  v16 = v15 + 1;
  if ( v15 + 1 >= v15 )
  {
    if ( v16 <= *((_DWORD *)v25 + 19) )
    {
      v13 = *((unsigned int *)v25 + 20);
      *(_QWORD *)(*((_QWORD *)v25 + 7) + 8 * v13) = v26;
      *((_DWORD *)v14 + 20) = v16;
      goto LABEL_19;
    }
    v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25 + 56, 8, 1, &v26);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v17, 0xC3u, 0LL);
  }
  else
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( v3 < 0 )
  {
    v24 = 85;
    goto LABEL_28;
  }
LABEL_19:
  v18 = *((_DWORD *)a1 + 10);
  v5 = 1;
  v19 = v18 + 1;
  if ( v18 + 1 >= v18 )
  {
    if ( v19 <= *((_DWORD *)a1 + 9) )
    {
      v3 = 0;
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * *((unsigned int *)a1 + 10)) = v25;
      *((_DWORD *)a1 + 10) = v19;
      goto LABEL_23;
    }
    v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8, 1, &v25);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v21, 0xC3u, 0LL);
  }
  else
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( v3 < 0 )
  {
    v24 = 88;
LABEL_28:
    v22 = v3;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v22, v24, 0LL);
    goto LABEL_32;
  }
LABEL_23:
  v20 = 0LL;
  *a3 = v25;
  v25 = 0LL;
LABEL_33:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v20 )
        goto LABEL_39;
      CD2DResource::RemoveResourceNotifier((struct CD2DInk *)((char *)v20 + 16), a1);
      v20 = v25;
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_39:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
