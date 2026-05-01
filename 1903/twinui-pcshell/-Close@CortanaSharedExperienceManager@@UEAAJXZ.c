/*
 * XREFs of ?Close@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18017DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180052C2C (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Close(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  CortanaSharedExperienceManager::GetDesktopView((__int64)this - 16, &v6);
  if ( v6 && (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6), v3 = v2, v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 58) + 48LL))(*((_QWORD *)this + 58));
    v3 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return v3;
}
