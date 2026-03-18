/*
 * XREFs of ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x18015C0A8
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800B1640 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800B1EC0 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v10)(__int64, struct CD3DSurface **, int *, int *); // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct CD3DSurface *v15; // [rsp+30h] [rbp-20h] BYREF
  struct tagPOINT v16; // [rsp+38h] [rbp-18h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF

  v6 = *a3;
  v15 = 0LL;
  v17.left = v6;
  v17.top = a3[1];
  v17.right = a3[2];
  v17.bottom = a3[3];
  v10 = *(__int64 (__fastcall **)(__int64, struct CD3DSurface **, int *, int *))(*(_QWORD *)a4 + 48LL);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
  v11 = v10(a4, &v15, &v18, &v19);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x96Du, 0LL);
  }
  else
  {
    v16.x = v18 + a5;
    v16.y = v19 + a6;
    CD3DDeviceLevel1::CopySurfaceRect(this, a2, &v17, v15, &v16, 0);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
  return v13;
}
