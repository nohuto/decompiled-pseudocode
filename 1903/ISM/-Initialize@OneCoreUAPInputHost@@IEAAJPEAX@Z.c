/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180010164
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x180010080 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180010354 (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180019A0C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18001EE9C (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800212F8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18002CE6C (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800C2F38 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, void *a2)
{
  struct OneCoreUAPInputHost *v3; // rdi
  int v4; // eax
  const char *v5; // r9
  struct ISystemInputRouter **v6; // rsi
  char MPCInputPostProcessorPresent; // al
  struct ISystemInputRouter **v8; // r8
  struct IInputFocusListener *v9; // rdx
  int v10; // eax
  int v11; // ebx
  struct IRawInputClient **v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v21 = -2;
  v3 = OneCoreUAPInputHost::s_pInputHost;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v23);
  v4 = CoreUICreate(&v23);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      -2);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *, bool, struct _FILETIME *), struct OneCoreUAPInputHost *))(*(_QWORD *)v23 + 232LL))(
    v23,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    v3);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v5);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    NtMITSetInputCallbacks(Win32kInterop::s_DeviceNotificationsCallback);
  v6 = (struct ISystemInputRouter **)((char *)v3 + 40);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)v3 + 40);
  *((_QWORD *)v3 + 5) = 0LL;
  MPCInputPostProcessorPresent = IsGetMPCInputPostProcessorPresent();
  v8 = (struct ISystemInputRouter **)((char *)v3 + 40);
  v9 = (struct IInputFocusListener *)(((unsigned __int64)v3 + 8) & -(__int64)(v3 != 0LL));
  if ( MPCInputPostProcessorPresent )
  {
    v10 = MPCInputRouter::Create(a2, v9, v8);
    v11 = v10;
    if ( v10 >= 0 )
    {
LABEL_7:
      v11 = 0;
      goto LABEL_8;
    }
    v20 = 30LL;
  }
  else
  {
    v10 = DWMInputRouter::Create((struct IDWMInputProxy *)a2, v9, v8);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_7;
    v20 = 34LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
    (const char *)(unsigned int)v10,
    -2);
LABEL_8:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v11,
      v21);
    __debugbreak();
  }
  v12 = (struct IRawInputClient **)((char *)v3 + 48);
  v13 = *((_QWORD *)v3 + 6);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = InputStateManager::Create(*v6, (struct IRawInputClient **)v3 + 6);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v14,
      v21);
    __debugbreak();
  }
  v15 = InputProviderManager::InitializeHelper((char *)v3 + 56, *v12, 0LL);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v15,
      v21);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v16);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v17 = *((_QWORD *)v3 + 11);
    if ( v17 )
    {
      *((_QWORD *)v3 + 11) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = Win32kInterop::Create(*v12, *v6, (struct Win32kInterop **)v3 + 11);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v18,
        v21);
      JUMPOUT(0x180041E2ELL);
    }
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v23);
  return 0LL;
}
