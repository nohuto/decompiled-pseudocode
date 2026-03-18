/*
 * XREFs of ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x180248BE8
 * Callers:
 *     ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x180248C9C (--_ECHolographicFrameProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

void __fastcall CHolographicFrameProcessor::~CHolographicFrameProcessor(CHolographicFrameProcessor *this)
{
  char *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'};
  *((_QWORD *)this + 1) = &CHolographicFrameProcessor::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 3) = &CHolographicFrameProcessor::`vftable'{for `IFlipPresentCallback'};
  *((_QWORD *)this + 4) = &CHolographicFrameProcessor::`vftable'{for `IFlipContentCallback'};
  *((_QWORD *)this + 5) = &CHolographicFrameProcessor::`vftable'{for `IHolographicWin32kInteropTexture'};
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 16);
  v2 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 11);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    CDirtyRegion::Release((CDirtyRegion *)(v3 + 8));
  }
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
}
