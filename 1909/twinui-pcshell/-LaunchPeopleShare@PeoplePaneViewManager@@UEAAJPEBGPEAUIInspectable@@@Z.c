/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180241AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x18023E0F8 (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x18023E5B4 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x180242200 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1802426E8 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1802433A0 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        struct IInspectable *a3)
{
  _DWORD *v5; // rbx
  char v6; // di
  _QWORD *Ptr; // rdx
  std::_Ref_count_base *v8; // rbx
  HRESULT Instance; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  HRESULT v12; // eax
  HWND WindowW; // rax
  const char *v14; // r9
  IUnknown *v15; // rbx
  PVOID Reserved1; // rdx
  IUnknown *pUnk; // [rsp+40h] [rbp-69h] BYREF
  __int64 AppId; // [rsp+48h] [rbp-61h] BYREF
  std::_Ref_count_base *v20; // [rsp+50h] [rbp-59h]
  unsigned __int16 *v21; // [rsp+58h] [rbp-51h] BYREF
  RTL_SRWLOCK *v22; // [rsp+60h] [rbp-49h]
  unsigned __int16 **v23; // [rsp+68h] [rbp-41h]
  char v24; // [rsp+70h] [rbp-39h]
  _BYTE v25[8]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v26; // [rsp+80h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-21h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-9h]
  HSTRING_HEADER v29; // [rsp+A8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v26 = -2LL;
  v21 = a2;
  AppId = 0x25E000001F4LL;
  v5 = operator new(0x60uLL);
  v6 = 1;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)(v5 + 4), v21, 1, AppId);
  AppId = (__int64)(v5 + 4);
  v20 = (std::_Ref_count_base *)v5;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 4));
  AcquireSRWLockExclusive(this + 5);
  v22 = this + 5;
  Ptr = this[7].Ptr;
  if ( this[8].Ptr == Ptr )
  {
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
      &this[6].Ptr,
      Ptr,
      &AppId);
    v8 = v20;
  }
  else
  {
    *Ptr = v5 + 4;
    Ptr[1] = v5;
    v8 = 0LL;
    this[7].Ptr = (char *)this[7].Ptr + 16;
  }
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v22 = this - 11;
  v23 = &v21;
  v24 = 1;
  pUnk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&pUnk);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v11 = 301LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_18;
  }
  v12 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12F,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v12);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x131,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v14);
  AppId = (__int64)PeoplePaneViewManager::s_GetAppId();
  v15 = pUnk;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Launch", 0xFu, 0xEu);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)&AppId)[1].Reserved.Reserved1;
  Instance = ((__int64 (__fastcall *)(IUnknown *, PVOID, _QWORD, __int64, struct IInspectable *, _DWORD, _BYTE *))v15->lpVtbl[1].AddRef)(
               v15,
               Reserved1,
               0LL,
               v28,
               a3,
               0,
               v25);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v11 = 314LL;
    goto LABEL_16;
  }
  v6 = 0;
  v10 = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
  if ( v6 )
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId((PeoplePaneViewManager *)&this[-11], v21);
  return v10;
}
