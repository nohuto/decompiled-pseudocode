/*
 * XREFs of ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1801832AC
 * Callers:
 *     ?OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180183710 (-OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellE.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044ED0 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::ApplyPriorityBoostIfNeeded(
        CTaskContinuityActivitiesExperienceManager *this)
{
  int v1; // ebx
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 96);
    if ( *v2 )
    {
      v7 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v2,
             &v7);
      v1 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      if ( v1 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
        v1 = v4;
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      if ( v1 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x90,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v1);
    }
  }
  return (unsigned int)v1;
}
