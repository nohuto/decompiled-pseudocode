/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004C1C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180045CA0 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180046B74 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18004BBE8 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ??$?0PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x18004C488 (--$-0PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@AEAA@U-$integral_co.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18004C6F0 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C8E4 (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18004C934 (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18004C9C4 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  WINBOOL v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **); // rbx
  int v13; // eax
  CortanaSharedExperienceManager *v14; // rcx
  int v15; // eax
  HSTRING v16; // rbx
  const unsigned __int16 *StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v18; // rcx
  int CortanaEntryPointAndArgs; // eax
  __int64 v20; // rdx
  int v21; // edi
  __int64 v23; // rdx
  __int64 v24; // rdx
  int cData; // [rsp+20h] [rbp-E0h]
  int cDataa; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v28; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v31; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 length; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v35[320]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD *v37; // [rsp+1E0h] [rbp+E0h]
  __int64 v38; // [rsp+1E8h] [rbp+E8h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v34[1] = -2LL;
  fPending[0] = 0;
  v6 = 0;
  if ( (*(int (__fastcall **)(_QWORD, WINBOOL *))(**(_QWORD **)(a1 + 496) + 64LL))(*(_QWORD *)(a1 + 496), fPending) >= 0 )
    v6 = fPending[0];
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
  {
    Context = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    LODWORD(v34[0]) = v6;
    v37 = v34;
    v38 = 4LL;
    TlgWrite(v7, &unk_1804E333D, 0LL, 0LL, 3u, &pData);
  }
  CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)a1);
  v8 = *(__int64 **)(a1 + 424);
  v9 = *v8;
  if ( !*(_BYTE *)(a1 + 537) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HSTRING))(v9 + 24))(v8, *(_QWORD *)(a1 + 504), a2);
    if ( v10 >= 0 )
      goto LABEL_10;
    v23 = 427LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      cData);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 32))(v8, 1LL, *(_QWORD *)(a1 + 504));
  if ( v10 < 0 )
  {
    v23 = 423LL;
    goto LABEL_22;
  }
LABEL_10:
  v31 = 0LL;
  v11 = *(_QWORD *)(a1 + 424);
  v12 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)v11 + 8LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v13 = v12(v11, &v31);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v13,
      cData);
    goto LABEL_17;
  }
  WindowsDeleteString(0LL);
  Context = 0LL;
  v15 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v14, a2, v31, (HSTRING *)&Context);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      cData);
    WindowsDeleteString((HSTRING)Context);
    goto LABEL_17;
  }
  length = 0;
  v16 = (HSTRING)Context;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)Context, &length);
  *(_QWORD *)fPending = StringRawBuffer;
  WindowsDeleteString(0LL);
  v28 = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                               v18,
                               StringRawBuffer,
                               length,
                               &string,
                               &v28);
  if ( CortanaEntryPointAndArgs < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)CortanaEntryPointAndArgs,
      cDataa);
  Context = (LPVOID)WindowsGetStringRawBuffer(v28, 0LL);
  v34[0] = WindowsGetStringRawBuffer(string, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked(
    v35,
    v20,
    v34,
    &Context);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
    v35,
    fPending);
  v33 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
              &v31,
              &v33) < 0 )
  {
    v21 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v31 + 80LL))(
            v31,
            *(_QWORD *)(a1 + 504),
            v16,
            0LL);
    if ( v21 >= 0 )
      goto LABEL_16;
    v24 = 453LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v21,
      cDataa);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v35);
    WindowsDeleteString(v28);
    v28 = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v16);
    v10 = v21;
    goto LABEL_17;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v33 + 80LL))(v33, v16, a3);
  if ( v21 < 0 )
  {
    v24 = 449LL;
    goto LABEL_26;
  }
LABEL_16:
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v35);
  WindowsDeleteString(v28);
  v28 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v16);
  v10 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return (unsigned int)v10;
}
