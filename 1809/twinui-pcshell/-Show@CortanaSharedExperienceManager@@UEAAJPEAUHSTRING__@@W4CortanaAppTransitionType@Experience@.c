/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18001CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18001408C (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18001C05C (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x18001D29C (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001D3B0 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001D4F8 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18001D5A0 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D788 (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18001D7CC (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18001D890 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x18001DBD0 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  CortanaSharedExperienceManager *v13; // rcx
  int v14; // eax
  HSTRING v15; // rbx
  unsigned __int16 *StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v17; // rcx
  int CortanaEntryPointAndArgs; // eax
  const unsigned __int16 *v19; // rsi
  const unsigned __int16 *v20; // rdi
  int v21; // edi
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v28; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v29; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v30; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v33[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v32[1] = -2LL;
  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 472) + 64LL))(*(_QWORD *)(a1 + 472), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>(&string);
  CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)a1);
  v8 = *(__int64 **)(a1 + 400);
  v9 = *v8;
  if ( !*(_BYTE *)(a1 + 513) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HSTRING))(v9 + 24))(v8, *(_QWORD *)(a1 + 480), a2);
    if ( v10 >= 0 )
      goto LABEL_5;
    v23 = 428LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      v25);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 32))(v8, 1LL, *(_QWORD *)(a1 + 480));
  if ( v10 < 0 )
  {
    v23 = 424LL;
    goto LABEL_17;
  }
LABEL_5:
  v30 = 0LL;
  v11 = *(_QWORD *)(a1 + 400);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v12 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)v11 + 8LL))(
          v11,
          &v30);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      v25);
    goto LABEL_12;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v13, a2, v30, &string);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v14,
      v25);
    WindowsDeleteString(string);
    goto LABEL_12;
  }
  length = 0;
  v15 = string;
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
  string = (HSTRING)StringRawBuffer;
  v28 = 0LL;
  v29 = 0LL;
  WindowsDeleteString(0LL);
  v29 = 0LL;
  WindowsDeleteString(v28);
  v28 = 0LL;
  CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                               v17,
                               StringRawBuffer,
                               length,
                               &v28,
                               &v29);
  if ( CortanaEntryPointAndArgs < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BA,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)CortanaEntryPointAndArgs,
      v26);
  v19 = WindowsGetStringRawBuffer(v29, 0LL);
  v20 = WindowsGetStringRawBuffer(v28, 0LL);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v33);
  v33[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33,
    v20,
    v19);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
    v33,
    &string);
  v32[0] = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
              &v30,
              v32) < 0 )
  {
    v21 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v30 + 80LL))(
            v30,
            *(_QWORD *)(a1 + 480),
            v15,
            0LL);
    if ( v21 >= 0 )
      goto LABEL_11;
    v24 = 454LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v21,
      v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33);
    WindowsDeleteString(v29);
    v29 = 0LL;
    WindowsDeleteString(v28);
    v28 = 0LL;
    WindowsDeleteString(v15);
    v10 = v21;
    goto LABEL_12;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(*(_QWORD *)v32[0] + 80LL))(v32[0], v15, a3);
  if ( v21 < 0 )
  {
    v24 = 450LL;
    goto LABEL_21;
  }
LABEL_11:
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33);
  WindowsDeleteString(v29);
  v29 = 0LL;
  WindowsDeleteString(v28);
  v28 = 0LL;
  WindowsDeleteString(v15);
  v10 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  return (unsigned int)v10;
}
