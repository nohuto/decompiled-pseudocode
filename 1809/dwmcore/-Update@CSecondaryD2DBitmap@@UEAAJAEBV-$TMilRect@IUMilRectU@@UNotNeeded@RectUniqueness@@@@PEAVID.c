/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800984E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x180098868 (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x18009B26C (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x18009B384 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18009B420 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x18009B4D8 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180149B9C (McTemplateU0qqqq.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180180F78 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180181314 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x180202538 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryBitmap *this, struct MilRectU *a2, __int64 a3)
{
  __int64 v3; // rax
  CSecondaryD2DBitmap *v4; // rsi
  int *v7; // r14
  struct tagRECT *v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  int valid; // eax
  unsigned int v13; // ebx
  int v14; // r15d
  int left; // eax
  unsigned int v17; // xmm0_4
  int top; // eax
  unsigned int v19; // xmm1_4
  int right; // eax
  unsigned int v21; // xmm0_4
  int bottom; // eax
  float v23; // xmm2_4
  float v24; // xmm1_4
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  int v29; // r9d
  unsigned __int8 PixelFormatSize; // al
  unsigned int v31; // [rsp+20h] [rbp-B9h]
  bool v32; // [rsp+28h] [rbp-B1h]
  struct IBitmapLock *v33; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-91h] BYREF
  struct ID3D11Resource *v35; // [rsp+50h] [rbp-89h] BYREF
  struct IUnknown *v36; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v37[8]; // [rsp+60h] [rbp-79h] BYREF
  void *v38; // [rsp+68h] [rbp-71h] BYREF
  _OWORD v39[4]; // [rsp+70h] [rbp-69h] BYREF
  __int16 v40; // [rsp+B0h] [rbp-29h]
  struct tagRECT v41; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v42; // [rsp+D0h] [rbp-9h] BYREF
  unsigned int v43; // [rsp+D4h] [rbp-5h]
  unsigned int v44; // [rsp+D8h] [rbp-1h]
  float v45; // [rsp+DCh] [rbp+3h]
  struct tagRECT X; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *((_QWORD *)this - 30);
  v4 = (CSecondaryBitmap *)((char *)this - 264);
  v33 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v7 = *(int **)(v3 + 24);
  if ( CSecondaryD2DBitmap::HasPrefilterScale((CSecondaryBitmap *)((char *)this - 264)) )
  {
    left = v9->left;
    v39[1] = _xmm;
    v39[0] = _xmm;
    *(float *)&v17 = (float)left;
    top = v9->top;
    v40 = 32085;
    *(float *)&v19 = (float)top;
    right = v9->right;
    v42 = v17;
    *(float *)&v21 = (float)right;
    bottom = v9->bottom;
    v43 = v19;
    v39[2] = _xmm;
    v23 = *((float *)this - 9) / 96.0;
    v45 = (float)bottom;
    v24 = *((float *)this - 10) / 96.0;
    v39[3] = _xmm;
    v44 = v21;
    CMILMatrix::Scale((CMILMatrix *)v39, v24, v23, 1.0);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v39);
    v41.left = (int)floorf_0(*(float *)&X.left);
    v41.top = (int)floorf_0(*(float *)&X.top);
    v41.right = (int)ceilf_0(*(float *)&X.right);
    v41.bottom = (int)ceilf_0(*(float *)&X.bottom);
    CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v42);
    v25 = v41.left;
    if ( v42 > v41.left )
      v25 = v42;
    v41.left = v25;
    v26 = v41.top;
    if ( v43 > v41.top )
      v26 = v43;
    v41.top = v26;
    v27 = v41.right;
    if ( v44 < v41.right )
      v27 = v44;
    v41.right = v27;
    v28 = v41.bottom;
    if ( LODWORD(v45) < v41.bottom )
      v28 = LODWORD(v45);
    v41.bottom = v28;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v41) )
    {
      v41.bottom = 0;
      v41.right = 0;
      v41.top = 0;
      v41.left = 0;
    }
  }
  else
  {
    v41 = *v9;
  }
  X = v41;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this, &X)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v41) )
  {
    v13 = -2147024809;
    v31 = 216;
    v29 = -2147024809;
    goto LABEL_45;
  }
  if ( CSecondaryD2DBitmap::HasPrefilterScale(v4) )
  {
    valid = CSecondaryD2DBitmap::CreateScaledLock(v11, &v41, a3, &v33);
    v13 = valid;
    if ( valid >= 0 )
      goto LABEL_7;
    v31 = 221;
LABEL_35:
    v29 = valid;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v29, v31);
    goto LABEL_15;
  }
  valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, struct IBitmapLock **))(*(_QWORD *)a3 + 64LL))(
            a3,
            &v41,
            &v33);
  v13 = valid;
  if ( valid < 0 )
  {
    v31 = 225;
    goto LABEL_35;
  }
LABEL_7:
  v14 = *(_DWORD *)(*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v42);
  if ( v14 != *(_DWORD *)(*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 20) + 24LL))(
                           (char *)this - 160,
                           &v42) )
  {
    valid = CSecondaryD2DBitmap::FormatConvertLock(v4, &v33);
    v13 = valid;
    if ( valid < 0 )
    {
      v31 = 236;
      goto LABEL_35;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v33 + 40LL))(v33, &v34);
  v13 = valid;
  if ( valid < 0 )
  {
    v31 = 239;
    goto LABEL_35;
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v33 + 48LL))(v33, v37, &v38);
  v13 = valid;
  if ( valid < 0 )
  {
    v31 = 240;
    goto LABEL_35;
  }
  if ( v7[185] < 40960
    && (*(int (__fastcall **)(struct IBitmapLock *, struct IUnknown **))(*(_QWORD *)v33 + 56LL))(v33, &v36) >= 0 )
  {
    CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver((CD3DResourceManager *)(v7 + 216), v36);
  }
  valid = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this - 16))(
            *((_QWORD *)this - 16),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v35);
  v13 = valid;
  if ( valid < 0 )
  {
    v31 = 259;
    goto LABEL_35;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v14);
    McTemplateU0qqqq(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v41.right - v41.left,
      v41.bottom - v41.top,
      v14,
      PixelFormatSize >> 3);
  }
  CD3DDeviceLevel1::UpdateSubresource((CD3DDeviceLevel1 *)v7, v35, &v41, v38, v34, v32, 0);
  valid = CSecondaryBitmap::AddValidRect(this, a2);
  v13 = valid;
  if ( valid < 0 )
  {
    v31 = 278;
    goto LABEL_35;
  }
LABEL_15:
  if ( v35 )
    ((void (__fastcall *)(struct ID3D11Resource *))v35->lpVtbl->Release)(v35);
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  if ( v33 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v33 + 16LL))(v33);
  return v13;
}
