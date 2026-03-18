/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015BE14
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015CBA0 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FA840 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  __int64 v2; // rcx
  unsigned int LowPart; // edx
  struct _LUID v4; // r8
  __int64 v5; // rdi
  int RenderTargetBitmapFromTexture; // eax
  int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v2 = 0LL;
  v20 = 1LL;
  LowPart = this[53].LowPart;
  if ( LowPart )
  {
    v4 = this[50];
    while ( *(_QWORD *)(*(_QWORD *)&v4 + 16LL * (unsigned int)v2) != *(_QWORD *)&this[66] )
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
  RenderTargetBitmapFromTexture = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[66])(
                                    *(_QWORD *)&this[66],
                                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                    &v19);
  v7 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v16 = 369;
    goto LABEL_30;
  }
  RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                    (int)&qword_180308A48,
                                    v20,
                                    0,
                                    (int)this + 368,
                                    this[67],
                                    DisplayId::All,
                                    v19,
                                    (__int64)&v18);
  v7 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v16 = 378;
LABEL_30:
    v14 = RenderTargetBitmapFromTexture;
    goto LABEL_31;
  }
  v2 = (__int64)&this[50];
  *(struct _LUID *)&v17 = this[66];
  *((_QWORD *)&v17 + 1) = v18;
  v8 = this[53].LowPart;
  v9 = v8 + 1;
  v7 = (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v7, 0xB5u);
  }
  else if ( v9 > this[52].HighPart )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 16, 1, &v17);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v2 + 16 * v8) = v17;
    this[53].LowPart = v9;
  }
  if ( v7 >= 0 )
  {
    v5 = v18;
    v18 = 0LL;
LABEL_17:
    v11 = this[37].LowPart;
    v20 = v5;
    v12 = v11 + 1;
    v7 = v11 + 1 < v11 ? 0x80070216 : 0;
    if ( v11 + 1 < v11 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v7, 0xB5u);
    }
    else if ( v12 > this[36].HighPart )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[34], 8, 1, &v20);
      v7 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v13, 0xC0u);
    }
    else
    {
      v2 = v11;
      *(_QWORD *)(*(_QWORD *)&this[34] + 8LL * v11) = v20;
      this[37].LowPart = v12;
    }
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      goto LABEL_32;
    }
    v16 = 392;
    goto LABEL_26;
  }
  v16 = 384;
LABEL_26:
  v14 = v7;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v14, v16);
LABEL_32:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v7;
}
