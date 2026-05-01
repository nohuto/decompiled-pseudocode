/*
 * XREFs of ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x180119784
 * Callers:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x1801195F4 (--1CImmersiveApp@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E4C08 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18011D578 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 33) )
    {
      do
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 32) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 33) );
      v2 = (void *)*((_QWORD *)this + 32);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 32) = 0LL;
  }
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((char *)this + 248);
  v4 = (void *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      do
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 21) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 22) );
      v4 = (void *)*((_QWORD *)this + 21);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
}
