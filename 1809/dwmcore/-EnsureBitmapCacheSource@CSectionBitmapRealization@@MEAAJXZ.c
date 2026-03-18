/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x180091E90
 * Callers:
 *     <none>
 * Callees:
 *     ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x180091DF0 (-MapSection@CSectionBitmapRealization@@IEAAJXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18009672C (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(CSectionBitmapRealization *this)
{
  struct IBitmapSource *v1; // rdi
  _QWORD *v2; // r14
  unsigned int v3; // ebx
  INT v6; // eax
  INT v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int RequiredBufferSize; // eax
  unsigned int v12; // r11d
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  struct IUnknown *v17; // [rsp+30h] [rbp-30h]
  _DWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF
  struct WICRect v19; // [rsp+50h] [rbp-10h] BYREF
  struct IBitmapSource *v20; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 464);
  v3 = 0;
  v20 = 0LL;
  if ( !*((_QWORD *)this + 58) )
  {
    v6 = *((_DWORD *)this + 110);
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 111);
      if ( v7 )
      {
        v19.X = 0;
        v19.Y = 0;
        v19.Width = v6;
        v18[0] = *((_DWORD *)this + 113);
        v18[1] = *((_DWORD *)this + 38);
        v8 = *((_DWORD *)this + 49);
        v19.Height = v7;
        v18[2] = v8;
        v9 = CSectionBitmapRealization::MapSection((HANDLE *)this);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x16Fu);
        }
        else
        {
          RequiredBufferSize = GetRequiredBufferSize(*((enum DXGI_FORMAT *)this + 113), *((_DWORD *)this + 112), &v19);
          v13 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 110),
                  *((_DWORD *)this + 111),
                  (const struct PixelFormatInfo *)v18,
                  v12,
                  RequiredBufferSize,
                  *((unsigned __int8 **)this + 57),
                  v17,
                  &v20);
          v3 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x181u);
            v1 = v20;
          }
          else
          {
            v1 = v20;
            v15 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, _QWORD *))v20)(
                    v20,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v3 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x183u);
            else
              (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, *v2);
          }
        }
        if ( v1 )
          (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v1 + 16LL))(v1);
      }
    }
  }
  return v3;
}
