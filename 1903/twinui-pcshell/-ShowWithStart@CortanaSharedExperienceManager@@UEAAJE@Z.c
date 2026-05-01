/*
 * XREFs of ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180052CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180052E84 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShowWithStart(CortanaSharedExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 53) + 32LL))(
         *((_QWORD *)this + 53),
         1LL,
         *((_QWORD *)this + 63));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      -2);
    return v5;
  }
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v12);
  if ( !v12 )
  {
    v5 = -2147467259;
    v9 = 2147500037LL;
    v10 = 465LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v9,
      -2);
    goto LABEL_5;
  }
  LOBYTE(v6) = a2;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 88LL))(v12, v6);
  v5 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 466LL;
    goto LABEL_10;
  }
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v5;
}
