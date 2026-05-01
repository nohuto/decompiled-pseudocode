/*
 * XREFs of ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190100
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180014BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030A98 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180070E60 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801919DC (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewCreated(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rdi
  HWND v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  CPeopleBarFlyoutExperienceManager *v9; // rsi
  __int64 v10; // rdi
  _OWORD *v11; // rax
  _OWORD *v12; // rbx
  int updated; // eax
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a2 + 3);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( !v5 || SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v18 = 0LL;
    v7 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)a2, 1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
             v4,
             &v18);
      v6 = v7;
      if ( v7 >= 0 )
      {
        LODWORD(v15) = 0;
        v9 = (CPeopleBarFlyoutExperienceManager *)((char *)this - 64);
        *(_QWORD *)&v16 = v9;
        *((_QWORD *)&v16 + 1) = CPeopleBarFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged;
        v10 = 0LL;
        v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v12 = v11;
        if ( v11 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v11);
          v12[1] = v16;
          *((_QWORD *)v12 + 4) = v15;
          *(_QWORD *)v12 = off_18043AB28;
          v10 = (__int64)v12;
        }
        v19 = v10;
        updated = CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(v9, 1);
        v6 = updated;
        if ( updated >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14B,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
            (const char *)(unsigned int)updated);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_15;
      }
      v8 = 324LL;
    }
    else
    {
      v8 = 322LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    return v6;
  }
  v6 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)0x80004005LL);
  return v6;
}
