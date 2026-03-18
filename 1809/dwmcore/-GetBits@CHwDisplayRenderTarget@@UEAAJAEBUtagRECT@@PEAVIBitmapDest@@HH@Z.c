/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180090380
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@WNA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800F10D0 (-GetBits@CHwDisplayRenderTarget@@WNA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800904A0 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x1801FB678 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBits(
        CD3DDeviceLevel1 **this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  LONG left; // eax
  unsigned int v6; // ebx
  unsigned int v11; // ecx
  int Bits; // eax
  unsigned int v13; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-44h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  struct CD3DSurface *v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v24[4]; // [rsp+58h] [rbp-20h] BYREF

  left = a2->left;
  v6 = 0;
  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v24[0] = left;
  v24[2] = a2->right;
  v24[1] = a2->top;
  v24[3] = a2->bottom;
  if ( (*((unsigned __int8 (__fastcall **)(CD3DDeviceLevel1 **))*this + 4))(this) )
  {
    if ( (*((unsigned __int8 (__fastcall **)(CD3DDeviceLevel1 **))*this + 18))(this) )
    {
      v6 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024891, 0x101u);
      goto LABEL_5;
    }
    if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
           a3,
           &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
           &v20) < 0 )
    {
      (*((void (__fastcall **)(CD3DDeviceLevel1 **, _DWORD *))*this + 36))(this, v24);
      Bits = CHwSurfaceRenderTarget::GetBits((CHwSurfaceRenderTarget *)this, a2, a3, a4, a5);
      v6 = Bits;
      if ( Bits >= 0 )
        goto LABEL_5;
      v17 = 309;
      goto LABEL_25;
    }
    v18 = 0;
    Bits = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, unsigned int *))(*(_QWORD *)v20 + 56LL))(
             v20,
             &v22,
             &v18,
             &v19);
    v6 = Bits;
    if ( Bits < 0 )
    {
      v17 = 279;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Bits, v17);
      goto LABEL_5;
    }
    if ( v22 == *((_QWORD *)this[27] + 89) && v18 == *((_DWORD *)this + 29) )
    {
      v16 = v19;
      if ( v19 )
      {
        if ( (*(int (__fastcall **)(CD3DDeviceLevel1 **, GUID *, __int64 *))*this)(
               this,
               &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
               &v23) < 0 )
          goto LABEL_5;
        v16 = v19;
      }
      LOBYTE(v15) = 1;
      Bits = (*((__int64 (__fastcall **)(CD3DDeviceLevel1 **, __int64, __int64, struct CD3DSurface **))*this + 33))(
               this,
               v16,
               v15,
               &v21);
      v6 = Bits;
      if ( Bits < 0 )
      {
        v17 = 288;
      }
      else
      {
        Bits = CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(this[27], v21, a4, a5);
        v6 = Bits;
        if ( Bits >= 0 )
          goto LABEL_5;
        v17 = 294;
      }
      goto LABEL_25;
    }
  }
LABEL_5:
  if ( v21 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v21 + 8LL))(v21);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v6;
}
