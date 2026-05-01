/*
 * XREFs of ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180077B70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180077C24 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::TakeKeyboardFocus(CortanaSharedExperienceManager *this)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v3);
  if ( v3 )
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  else
    v1 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return v1;
}
