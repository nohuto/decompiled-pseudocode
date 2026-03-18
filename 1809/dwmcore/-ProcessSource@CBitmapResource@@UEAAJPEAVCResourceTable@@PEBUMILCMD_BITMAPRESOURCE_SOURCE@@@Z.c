/*
 * XREFs of ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18009E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18009E868 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAPRESOURCE_SOURCE *a3)
{
  struct IBitmapSource **v3; // rdi
  unsigned int v6; // ebx
  int (__fastcall ***v7)(_QWORD, GUID *, struct IBitmapSource **); // rcx
  int BitmapFromWICBitmapSource; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int BitmapFromMemory; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  struct IUnknown *v18; // [rsp+30h] [rbp-28h]
  _DWORD v19[6]; // [rsp+40h] [rbp-18h] BYREF

  v3 = (struct IBitmapSource **)((char *)this + 80);
  v6 = 0;
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  v7 = (int (__fastcall ***)(_QWORD, GUID *, struct IBitmapSource **))*((_QWORD *)a3 + 1);
  if ( v7 )
  {
    if ( (**v7)(v7, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, v3) < 0 )
    {
      BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(*((struct IWICBitmapSource **)a3 + 1), v3);
      v6 = BitmapFromWICBitmapSource;
      if ( BitmapFromWICBitmapSource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapFromWICBitmapSource, 0x73u);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)*v3 + 32LL))(
                *v3,
                (char *)this + 72,
                (char *)this + 76);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x75u);
      }
    }
  }
  else
  {
    v19[2] = 0;
    v19[0] = 87;
    v19[1] = 1;
    BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                         1u,
                         1u,
                         (const struct PixelFormatInfo *)v19,
                         4u,
                         4u,
                         &byte_18030C0AC,
                         v18,
                         v3);
    v6 = BitmapFromMemory;
    if ( BitmapFromMemory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, BitmapFromMemory, 0x8Bu);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)*v3 + 32LL))(
              *v3,
              (char *)this + 72,
              (char *)this + 76);
      v6 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x8Du);
    }
  }
  v12 = *((_QWORD *)a3 + 1);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 2) + 64LL))((char *)this + 16, 0LL, 0LL);
  return v6;
}
