/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ @ 0x180226D20
 * Callers:
 *     ?CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAVCBitmapRealization@@@Z @ 0x180226B58 (-CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DX.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18006A090 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x180091DF0 (-MapSection@CSectionBitmapRealization@@IEAAJXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18009672C (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapSubRectRealization::EnsureBitmapCacheSource(CSectionBitmapSubRectRealization *this)
{
  struct IBitmapSource *v1; // rsi
  struct ID2DBitmapCacheSource **v2; // r14
  unsigned int v3; // ebx
  INT v5; // eax
  INT v6; // ecx
  int v7; // r15d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int RequiredBufferSize; // eax
  unsigned int v13; // r11d
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct IUnknown *v19; // [rsp+30h] [rbp-30h]
  _DWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF
  struct WICRect v21; // [rsp+50h] [rbp-10h] BYREF
  struct IBitmapSource *v22; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = (struct ID2DBitmapCacheSource **)((char *)this + 464);
  v3 = 0;
  v22 = 0LL;
  if ( !*((_QWORD *)this + 58) )
  {
    v5 = *((_DWORD *)this + 110);
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 111);
      if ( v6 )
      {
        v7 = *((_DWORD *)this + 113);
        v21.X = 0;
        v21.Y = 0;
        v21.Width = v5;
        v20[1] = *((_DWORD *)this + 38);
        v8 = *((_DWORD *)this + 49);
        v21.Height = v6;
        v20[2] = v8;
        v20[0] = v7;
        v9 = CSectionBitmapRealization::MapSection((HANDLE *)this);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x56u);
        }
        else
        {
          v11 = *((_DWORD *)this + 112);
          GetPixelFormatSize(v7);
          RequiredBufferSize = GetRequiredBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 113), v11, &v21);
          v14 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 110),
                  *((_DWORD *)this + 111),
                  (const struct PixelFormatInfo *)v20,
                  v11,
                  RequiredBufferSize,
                  (unsigned __int8 *)(*((_QWORD *)this + 57) + v13),
                  v19,
                  &v22);
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x68u);
            v1 = v22;
          }
          else
          {
            v1 = v22;
            v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))v22)(
                    v22,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v3 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x6Au);
            else
              CD2DBitmapCache::InitializeCache((CSectionBitmapSubRectRealization *)((char *)this + 16), *v2);
          }
        }
        if ( v1 )
          (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v1 + 16LL))(v1);
      }
    }
  }
  return v3;
}
