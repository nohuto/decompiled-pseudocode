/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180094E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x180094F30 (-Validate@CRenderTargetBitmap@@IEBAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180094F6C (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180094FFC (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // r14
  struct IDeviceTexture *v5; // rbx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  struct IDeviceTexture *v14; // rbx
  int DeviceTextureInternal; // eax
  unsigned int v17; // ecx
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-28h]
  struct IDeviceTexture *v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CRenderTargetBitmap *)((char *)this - 144);
  v5 = 0LL;
  v20 = 0LL;
  v8 = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)((char *)this - 144));
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD9u);
  }
  else
  {
    if ( *((_BYTE *)this + 32) )
    {
      v11 = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(v3, *(_QWORD *)a2, *((unsigned int *)a2 + 2));
      v10 = v11;
      if ( v11 < 0 )
      {
        v19 = 227;
        v18 = v11;
        goto LABEL_18;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1))
        && !*((_BYTE *)a2 + 16) )
      {
        v10 = -2147024891;
        v19 = 232;
LABEL_16:
        v18 = v10;
LABEL_18:
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v18, v19);
        return v10;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
      {
        v10 = -2003304307;
        v19 = 238;
        goto LABEL_16;
      }
      v14 = (struct IDeviceTexture *)(v13 + 120);
      if ( v14 )
        (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v14 + 8LL))(v14);
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, &v20);
    v10 = DeviceTextureInternal;
    if ( DeviceTextureInternal >= 0 )
    {
      v14 = v20;
LABEL_8:
      *a3 = v14;
      return v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, DeviceTextureInternal, 0xDEu);
    v5 = v20;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v5 + 16LL))(v5);
  return v10;
}
