/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180198EF8
 * Callers:
 *     ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199140 (-GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180199210 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801992B0 (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180198D48 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801E3DE0 (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        CGdiSpriteBitmap **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // rdi
  char v5; // r15
  __int64 v6; // r9
  __int64 v9; // r8
  CGdiSpriteBitmap *v10; // rax
  int DefaultDevice; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  CGdiSpriteBitmap *v15; // r10
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // r9d
  unsigned int v24; // [rsp+20h] [rbp-10h]
  CGdiSpriteBitmap *v25; // [rsp+60h] [rbp+30h] BYREF
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
    v10 = *(CGdiSpriteBitmap **)(v9 + 8 * v6);
    v25 = v10;
    if ( v10 )
    {
LABEL_29:
      v25 = 0LL;
      *a3 = v10;
      goto LABEL_33;
    }
  }
LABEL_7:
  if ( a2 )
  {
LABEL_10:
    v13 = CGenericInk::CreateResource(*((CGenericInk **)a1 + 1), a2, &v25);
    v3 = v13;
    if ( v13 < 0 )
    {
      v24 = 83;
      v22 = v13;
      goto LABEL_32;
    }
    v15 = v25;
    v26 = a1;
    v16 = *((_DWORD *)v25 + 20);
    v17 = v16 + 1;
    v3 = v16 + 1 < v16 ? 0x80070216 : 0;
    if ( v16 + 1 < v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0xB5u);
    }
    else if ( v17 > *((_DWORD *)v25 + 19) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25 + 56, 8, 1, &v26);
      v3 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v18, 0xC0u);
    }
    else
    {
      v14 = v16;
      *(_QWORD *)(*((_QWORD *)v25 + 7) + 8LL * v16) = v26;
      *((_DWORD *)v15 + 20) = v17;
    }
    if ( v3 < 0 )
    {
      v24 = 85;
      goto LABEL_27;
    }
    v19 = *((_DWORD *)a1 + 10);
    v5 = 1;
    v20 = v19 + 1;
    v3 = v19 + 1 < v19 ? 0x80070216 : 0;
    if ( v19 + 1 < v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0xB5u);
    }
    else if ( v20 > *((_DWORD *)a1 + 9) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8, 1, &v25);
      v3 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v21, 0xC0u);
    }
    else
    {
      v14 = v19;
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v19) = v25;
      *((_DWORD *)a1 + 10) = v20;
    }
    if ( v3 < 0 )
    {
      v24 = 88;
LABEL_27:
      v22 = v3;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v22, v24);
      goto LABEL_33;
    }
    v10 = v25;
    goto LABEL_29;
  }
  DefaultDevice = FindDefaultDevice(&v26);
  v3 = DefaultDevice;
  if ( DefaultDevice >= 0 )
  {
    v4 = v26;
    a2 = v26;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, DefaultDevice, 0x4Fu);
  v4 = v26;
LABEL_33:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v25 )
        goto LABEL_39;
      CD2DResource::RemoveResourceNotifier((CGdiSpriteBitmap *)((char *)v25 + 16), a1);
    }
  }
  if ( v25 )
    CGdiSpriteBitmap::Release(v25);
LABEL_39:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
