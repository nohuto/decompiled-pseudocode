/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180153EE8
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180153DE4 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CortanaConversationCanvas@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180153D88 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CortanaConversationCanvas@@@wil@@CAX.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154744 (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154EA0 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, char *),
        CortanaSharedExperienceManager *a4)
{
  int v7; // eax
  int ShellExperienceView; // ebx
  void *v9; // rcx
  void **v11; // rbx
  void *v12; // r14
  void *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF
  CortanaSharedExperienceManager *v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 48, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
  v7 = (**a3)(a3, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, (char *)this + 456);
  ShellExperienceView = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    v9 = *(void **)a4;
    if ( !*(_QWORD *)a4 )
      return (unsigned int)ShellExperienceView;
LABEL_3:
    operator delete(v9, (const struct std::nothrow_t *)8);
    return (unsigned int)ShellExperienceView;
  }
  v11 = (void **)((char *)this + 400);
  if ( (CortanaSharedExperienceManager *)((char *)this + 400) != a4 )
  {
    v12 = *(void **)a4;
    *(_QWORD *)a4 = 0LL;
    v13 = *v11;
    if ( v12 != *v11 )
    {
      if ( v13 )
        operator delete(v13, (const struct std::nothrow_t *)8);
      *v11 = v12;
    }
  }
  v20 = 0LL;
  v14 = *v11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  ShellExperienceView = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, 1LL, &v20);
  if ( ShellExperienceView < 0 )
  {
    v15 = 326LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 58);
  ShellExperienceView = (**v20)(v20, &GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086, (char *)this + 464);
  if ( ShellExperienceView < 0 )
  {
    v15 = 327LL;
    goto LABEL_12;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v15 = 329LL;
    goto LABEL_12;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v15 = 330LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v9 = *(void **)a4;
    if ( !*(_QWORD *)a4 )
      return (unsigned int)ShellExperienceView;
    goto LABEL_3;
  }
  wil::Feature<__WilFeatureTraits_Feature_CortanaConversationCanvas>::ReportUsageToService(v17, v16, v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  if ( *(_QWORD *)a4 )
    operator delete(*(void **)a4, (const struct std::nothrow_t *)8);
  return 0LL;
}
