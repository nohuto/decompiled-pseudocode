/*
 * XREFs of ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x180193EB8
 * Callers:
 *     ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x180194000 (--_GCShoulderTapExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18041063C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CShoulderTapExperienceManager::~CShoulderTapExperienceManager(CShoulderTapExperienceManager *this)
{
  WindowsDeleteString(*((HSTRING *)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 38));
  *((_QWORD *)this + 38) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 37));
  *((_QWORD *)this + 37) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 34));
  *((_QWORD *)this + 34) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 33));
  *((_QWORD *)this + 33) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 32));
  *((_QWORD *)this + 32) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 31));
  *((_QWORD *)this + 31) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  CSingleViewShellExperience::~CSingleViewShellExperience((CShoulderTapExperienceManager *)((char *)this + 40));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>((__int64)this);
}
