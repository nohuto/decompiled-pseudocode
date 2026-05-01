/*
 * XREFs of ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x1803B1054
 * Callers:
 *     ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x1803B10C0 (--_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(
        DesktopSingleViewShellExperiencePersonality *this)
{
  *(_QWORD *)this = &DesktopSingleViewShellExperiencePersonality::`vftable';
  if ( *((_DWORD *)this + 8) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
