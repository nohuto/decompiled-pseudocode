/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800802A8
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800303B0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180070E1C (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180410A78 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180410BB8 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180411838 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(CSingleViewShellExperience *this, __int64 *a2)
{
  __int64 v4; // rcx
  char v5; // si
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v10; // esi
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v10 = *((_DWORD *)this + 16);
    v11 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    v12 = CSingleViewShellExperience::DestroyView(this);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x191,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v12);
    *((_DWORD *)this + 16) = v10;
    *((_DWORD *)this + 17) = v11;
  }
  v4 = 0LL;
  if ( &v21 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
  }
  v21 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v5 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = (unsigned int)v6;
    v14 = 412LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v13);
    goto LABEL_12;
  }
  v5 = 0;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v7 = -2147023673;
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 15) )
  {
    v16 = CSingleViewShellExperience::SetWindowBand((__int64)this);
    v7 = v16;
    if ( v16 < 0 )
    {
      v13 = (unsigned int)v16;
      v14 = 427LL;
      goto LABEL_28;
    }
  }
  if ( *((_BYTE *)this + 53) )
  {
    ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride((char *)this + 72, *((_QWORD *)this + 3));
    LOBYTE(v17) = *((_BYTE *)this + 53);
    v18 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
            *((_QWORD *)this + 11),
            this,
            v17);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v18);
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v7 = -2147023673;
    v14 = 449LL;
LABEL_27:
    v13 = (unsigned int)v7;
    goto LABEL_28;
  }
  v8 = (***((__int64 (__fastcall ****)(_QWORD, CSingleViewShellExperience *))this + 11))(*((_QWORD *)this + 11), this);
  v7 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BD,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  if ( v7 < 0 )
  {
LABEL_19:
    v15 = CSingleViewShellExperience::DestroyView(this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C7,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v15);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    CSingleViewShellExperience::ResetViews(this);
    v14 = 460LL;
    goto LABEL_27;
  }
LABEL_12:
  if ( v5 )
  {
    v19 = CSingleViewShellExperience::DestroyView(this);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19B,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v19);
  }
  return (unsigned int)v7;
}
