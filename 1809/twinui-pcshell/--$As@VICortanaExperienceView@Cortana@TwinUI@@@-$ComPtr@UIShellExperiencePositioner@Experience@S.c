/*
 * XREFs of ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D788
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18001CB40 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18001D6FC (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
        _QWORD *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12, a2);
}
