/*
 * XREFs of ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x1803A2314
 * Callers:
 *     _anonymous_namespace_::GetScreenSketchWindowIfValid @ 0x18017DFA0 (_anonymous_namespace_--GetScreenSketchWindowIfValid.c)
 * Callees:
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180033770 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800770B4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     CoCreateInstance_0 @ 0x180085557 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::VerifyWindowIsInSpecifiedApplication(
        CallerIdentity *this,
        HWND a2,
        const unsigned __int16 *a3,
        struct IUnknown *a4)
{
  unsigned __int16 **v5; // r8
  signed int Error; // ebx
  LPVOID v7; // rbx
  LPVOID pv; // [rsp+68h] [rbp+28h] BYREF
  const unsigned __int16 *v10; // [rsp+70h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+38h] BYREF

  v10 = a3;
  pv = 0LL;
  CoTaskMemFree(0LL);
  if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(this, (unsigned int **)&pv, v5) >= 0 )
  {
LABEL_11:
    Error = CompareStringOrdinal(L"Microsoft.ScreenSketch_8wekyb3d8bbwe!App", -1, (LPCWCH)pv, -1, 1) != 2
          ? 0x80070005
          : 0;
    goto LABEL_12;
  }
  if ( (unsigned int)GetWindowBand(this, &v10) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_12;
  }
  if ( (_DWORD)v10 != 1 )
    Error = -2147024809;
  if ( Error >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Error = CoCreateInstance_0(
              &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
              0LL,
              3u,
              &GUID_de25675a_72de_44b4_9373_05170450c140,
              &ppv);
    if ( Error >= 0 )
    {
      v7 = ppv;
      CoTaskMemFree(pv);
      Error = (*(__int64 (__fastcall **)(LPVOID, CallerIdentity *, LPVOID *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 40LL))(
                v7,
                this,
                &pv,
                0LL,
                0LL,
                0LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    if ( Error >= 0 )
      goto LABEL_11;
  }
LABEL_12:
  CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&pv);
  return (unsigned int)Error;
}
