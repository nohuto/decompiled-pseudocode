/*
 * XREFs of ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x180432B6C
 * Callers:
 *     ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x180432BD0 (--_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 *v2; // rdi

  *(_QWORD *)this = &DesktopSingleViewShellExperiencePersonality::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  if ( *((_DWORD *)this + 8) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 40LL))(*v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
