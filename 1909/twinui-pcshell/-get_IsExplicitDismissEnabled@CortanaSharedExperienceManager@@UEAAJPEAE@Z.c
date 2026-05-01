/*
 * XREFs of ?get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1801A0A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180077C24 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::get_IsExplicitDismissEnabled(
        CortanaSharedExperienceManager *this,
        unsigned __int8 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive((__int64)this, &v5);
  if ( v5 )
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  else
    v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return v3;
}
