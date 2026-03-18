/*
 * XREFs of ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801FA938
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18008C790 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ @ 0x180068168 (-GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetSwapChainSize(
        CSurfaceBrush *this,
        char a2,
        struct D2D_SIZE_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  struct IImageSource *NonVisualSurfaceImageSourceNoRef; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int128 *v12; // rdx
  __int64 v13; // rcx
  char v14; // bl
  float v15; // xmm0_4
  __int64 v16; // xmm1_8
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-71h] BYREF
  __int64 v20; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v21[8]; // [rsp+50h] [rbp-61h] BYREF
  int v22; // [rsp+90h] [rbp-21h]
  __int128 v23; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-1h]
  struct D2D_RECT_F v25; // [rsp+B8h] [rbp+7h] BYREF
  struct D2D_RECT_F v26; // [rsp+C8h] [rbp+17h] BYREF

  v22 = 0;
  v20 = 0LL;
  v19 = 0LL;
  NonVisualSurfaceImageSourceNoRef = CSurfaceBrush::GetNonVisualSurfaceImageSourceNoRef(this);
  v9 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)NonVisualSurfaceImageSourceNoRef + 80LL))(
         NonVisualSurfaceImageSourceNoRef,
         &v20);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, (const int *)"\a", 1u, v9, 0x364u, 0LL);
  }
  else
  {
    if ( a2
      && (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
           v20,
           &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
           &v19) >= 0 )
    {
      v12 = &v23;
      LOBYTE(v12) = 1;
      v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, struct D2D_RECT_F *, __int128 *, struct D2D_RECT_F *))(*(_QWORD *)v19 + 24LL))(
              v19,
              v12,
              v21,
              &v25,
              &v23,
              &v26);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v20 + 40LL))(v20, v21, &v25);
      if ( v14 )
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v21, (__int64)&v25, &v26.left);
      else
        v26 = v25;
    }
    v15 = v26.bottom - v26.top;
    if ( (float)(v26.right - v26.left) == 0.0 || v15 == 0.0 )
    {
      v11 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v13, (const int *)"\a", 1u, 0x88980007, 0x38Cu, 0LL);
    }
    else
    {
      a3->width = v26.right - v26.left;
      a3->height = v15;
      if ( a4 )
      {
        v23 = (__int128)v25;
        *a4 = v25;
      }
      if ( a5 )
      {
        if ( v14 )
        {
          *(_QWORD *)&v23 = v21[0];
          *((_QWORD *)&v23 + 1) = v21[2];
          v24 = v21[6];
        }
        else
        {
          v24 = 0LL;
          v23 = _xmm;
        }
        v16 = v24;
        *(_OWORD *)&a5->m11 = v23;
        *(_QWORD *)&a5->m[2][0] = v16;
      }
      v11 = 0;
    }
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  return v11;
}
