/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180213C38
 * Callers:
 *     ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x18019E630 (-ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z.c)
 *     ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180213EB0 (-GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1802140B4 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004F820 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180213648 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x18021C23C (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        CGdiSpriteBitmap **a3)
{
  int v5; // ebx
  struct ID2DContext *v6; // rdi
  char v7; // r15
  unsigned int v8; // r9d
  __int64 v9; // r8
  signed int DefaultDevice; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  CGdiSpriteBitmap *v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  signed int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  signed int v20; // eax
  unsigned int v21; // r9d
  unsigned int v23; // [rsp+20h] [rbp-10h]
  CGdiSpriteBitmap *v24; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v25; // [rsp+78h] [rbp+48h] BYREF

  v5 = 0;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0;
  v25 = 0LL;
  v8 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)a1 + 2);
      if ( !a2 || a2 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v9 + 8LL * v8) + 24LL) + 24LL) )
        break;
      if ( ++v8 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v24 = *(CGdiSpriteBitmap **)(v9 + 8LL * v8);
    if ( v24 )
      goto LABEL_23;
  }
LABEL_7:
  if ( a2 )
  {
LABEL_10:
    v12 = CGenericInk::CreateResource(*((CGenericInk **)a1 + 1), a2, &v24);
    v5 = v12;
    if ( v12 < 0 )
    {
      v21 = v12;
      v23 = 83;
      goto LABEL_31;
    }
    v14 = v24;
    v25 = a1;
    v15 = *((_DWORD *)v24 + 20);
    v16 = v15 + 1;
    if ( v15 + 1 >= v15 )
    {
      if ( v16 <= *((_DWORD *)v24 + 19) )
      {
        v13 = *((unsigned int *)v24 + 20);
        *(_QWORD *)(*((_QWORD *)v24 + 7) + 8 * v13) = v25;
        *((_DWORD *)v14 + 20) = v16;
LABEL_19:
        v18 = *((_DWORD *)a1 + 10);
        v7 = 1;
        v19 = v18 + 1;
        if ( v18 + 1 < v18 )
        {
          v5 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          goto LABEL_26;
        }
        if ( v19 > *((_DWORD *)a1 + 9) )
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8, 1, &v24);
          v5 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v20, 0xC3u, 0LL);
LABEL_26:
          if ( v5 < 0 )
          {
            v23 = 88;
LABEL_28:
            v21 = v5;
LABEL_31:
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v21, v23, 0LL);
            goto LABEL_32;
          }
          goto LABEL_23;
        }
        v5 = 0;
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * *((unsigned int *)a1 + 10)) = v24;
        *((_DWORD *)a1 + 10) = v19;
LABEL_23:
        *a3 = v24;
        v24 = 0LL;
        goto LABEL_32;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24 + 56, 8, 1, &v25);
      v5 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v17, 0xC3u, 0LL);
    }
    else
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v5 < 0 )
    {
      v23 = 85;
      goto LABEL_28;
    }
    goto LABEL_19;
  }
  DefaultDevice = FindDefaultDevice(&v25);
  v5 = DefaultDevice;
  if ( DefaultDevice >= 0 )
  {
    v6 = v25;
    a2 = v25;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DefaultDevice, 0x4Fu, 0LL);
  v6 = v25;
LABEL_32:
  if ( v5 < 0 )
  {
    *a3 = 0LL;
    if ( v7 )
    {
      if ( !v24 )
        goto LABEL_38;
      CD2DResource::RemoveResourceNotifier((CGdiSpriteBitmap *)((char *)v24 + 16), a1);
    }
  }
  if ( v24 )
    CGdiSpriteBitmap::Release(v24);
LABEL_38:
  if ( v6 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v5;
}
