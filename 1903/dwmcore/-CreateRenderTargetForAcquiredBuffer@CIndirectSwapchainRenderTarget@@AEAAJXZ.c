/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801950DC
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801956C0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18019602C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F0B0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  __int64 v2; // rcx
  unsigned int LowPart; // edx
  struct _LUID v4; // r8
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // edx
  signed int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  signed int v13; // eax
  unsigned int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF

  v20 = 1LL;
  v19 = 0LL;
  v18 = 0LL;
  v2 = 0LL;
  LowPart = this[52].LowPart;
  if ( LowPart )
  {
    v4 = this[49];
    while ( *(_QWORD *)(*(_QWORD *)&v4 + 16LL * (unsigned int)v2) != *(_QWORD *)&this[65] )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= LowPart )
        goto LABEL_7;
    }
    v5 = *(_QWORD *)(*(_QWORD *)&v4 + 16LL * (unsigned int)v2 + 8);
    if ( v5 )
      goto LABEL_17;
  }
LABEL_7:
  v6 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[65])(
         *(_QWORD *)&this[65],
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 367;
    goto LABEL_30;
  }
  v6 = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
         (__int64)&qword_180340368,
         v20,
         0LL,
         (__int64)&this[45],
         this[66],
         (unsigned int)DisplayId::All,
         v19,
         &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 376;
LABEL_30:
    v14 = v6;
    goto LABEL_31;
  }
  v2 = (__int64)&this[49];
  *(struct _LUID *)&v17 = this[65];
  *((_QWORD *)&v17 + 1) = v18;
  v8 = this[52].LowPart;
  v9 = v8 + 1;
  if ( (int)v8 + 1 >= (unsigned int)v8 )
  {
    if ( v9 <= this[51].HighPart )
    {
      *(_OWORD *)(*(_QWORD *)v2 + 16 * v8) = v17;
      this[52].LowPart = v9;
LABEL_16:
      v5 = v18;
      v18 = 0LL;
LABEL_17:
      v11 = this[37].LowPart;
      v20 = v5;
      v12 = v11 + 1;
      if ( (int)v11 + 1 >= (unsigned int)v11 )
      {
        if ( v12 <= this[36].HighPart )
        {
          v7 = 0;
          *(_QWORD *)(*(_QWORD *)&this[34] + 8 * v11) = v20;
          this[37].LowPart = v12;
LABEL_24:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          goto LABEL_32;
        }
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[34], 8, 1, &v20);
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v13, 0xC3u, 0LL);
      }
      else
      {
        v7 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v7 >= 0 )
        goto LABEL_24;
      v16 = 390;
      goto LABEL_26;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 16, 1, &v17);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v10, 0xC3u, 0LL);
  }
  else
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( v7 >= 0 )
    goto LABEL_16;
  v16 = 382;
LABEL_26:
  v14 = v7;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v14, v16, 0LL);
LABEL_32:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v7;
}
