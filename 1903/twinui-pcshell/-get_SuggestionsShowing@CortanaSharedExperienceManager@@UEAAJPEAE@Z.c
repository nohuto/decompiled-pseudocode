/*
 * XREFs of ?get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180181A10
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180052E84 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::get_SuggestionsShowing(
        CortanaSharedExperienceManager *this,
        unsigned __int8 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive((__int64)this, &v5);
  if ( v5 )
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v5 + 40LL))(v5, a2);
  else
    v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return v3;
}
