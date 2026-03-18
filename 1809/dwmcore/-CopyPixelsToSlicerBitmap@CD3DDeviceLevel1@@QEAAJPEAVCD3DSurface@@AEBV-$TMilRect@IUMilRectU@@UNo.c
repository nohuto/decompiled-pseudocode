/*
 * XREFs of ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x1801FB678
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180090380 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180090558 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(
        CD3DDeviceLevel1 *this,
        struct CD3DSurface *a2,
        LONG *a3,
        __int64 a4,
        int a5,
        int a6)
{
  LONG v6; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct CD3DSurface *v14; // [rsp+30h] [rbp-20h] BYREF
  struct tagPOINT v15; // [rsp+38h] [rbp-18h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  int v18; // [rsp+88h] [rbp+38h] BYREF

  v6 = *a3;
  v14 = 0LL;
  v16.left = v6;
  v16.top = a3[1];
  v16.right = a3[2];
  v16.bottom = a3[3];
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  v10 = (*(__int64 (__fastcall **)(__int64, struct CD3DSurface **, int *, int *))(*(_QWORD *)a4 + 48LL))(
          a4,
          &v14,
          &v17,
          &v18);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x96Cu);
  }
  else
  {
    v15.x = v17 + a5;
    v15.y = v18 + a6;
    CD3DDeviceLevel1::CopySurfaceRect(this, a2, &v16, v14, &v15, 0);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  return v12;
}
