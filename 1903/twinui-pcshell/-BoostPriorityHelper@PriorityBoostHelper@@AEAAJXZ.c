/*
 * XREFs of ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180075D9C
 * Callers:
 *     ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180075D60 (-BoostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1801C0A78 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044ED0 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x180075F74 (--$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::BoostPriorityHelper(PriorityBoostHelper *this)
{
  char *v1; // rdi
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 108;
  if ( *((_DWORD *)this + 27) )
  {
    v9 = 0;
    v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 8) + 24LL);
    if ( *v2 )
    {
      v10 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v2,
             &v10);
      v4 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x52,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v3);
      v9 = v4;
      if ( v4 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
        v4 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x55,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
            (const char *)(unsigned int)v5);
        v9 = v4;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    else
    {
      v4 = 0;
    }
    ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v9, v1);
    if ( v4 >= 0 )
      return 0LL;
    v7 = 90LL;
  }
  else
  {
    v4 = -2147024875;
    v7 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
