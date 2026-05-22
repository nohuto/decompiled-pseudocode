/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004674
 * Callers:
 *     CreateSystemInputHost @ 0x180004250 (CreateSystemInputHost.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800059E0 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180052B6C (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180052F08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800565F0 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180081ECC (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  struct ISystemInputRouter **v3; // rdi
  int v4; // eax
  const char *v5; // r9
  struct ISystemInputRouter **v6; // r14
  struct ISystemInputRouter *v7; // rcx
  int SystemInputRouter; // eax
  struct ISystemInputRouter *v9; // rcx
  struct ISystemInputRouter *v10; // rsi
  InputStateManager *v11; // rax
  InputStateManager *v12; // rbx
  InputStateManager *v13; // rsi
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r9
  int v18; // eax
  const char *v19; // r9
  struct ISystemInputRouter *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  InputStateManager *v26; // [rsp+60h] [rbp+18h]

  v3 = (struct ISystemInputRouter **)OneCoreUAPInputHost::s_pInputHost;
  v25 = 0LL;
  v4 = CoreUICreate(&v25);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *, bool, struct _FILETIME *), struct ISystemInputRouter **))(*(_QWORD *)v25 + 248LL))(
    v25,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    v3);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v5);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    MITSetInputCallbacks(Win32kInterop::s_DeviceNotificationsCallback);
  v6 = v3 + 5;
  v7 = v3[5];
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  SystemInputRouter = CreateSystemInputRouter(
                        a2,
                        (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)),
                        v3 + 5);
  if ( SystemInputRouter < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)SystemInputRouter);
    __debugbreak();
  }
  v9 = v3[6];
  if ( v9 )
  {
    v3[6] = 0LL;
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *v6;
  if ( !*v6 )
  {
    v14 = -2147024809;
    v15 = 194LL;
    goto LABEL_22;
  }
  v11 = (InputStateManager *)malloc(0xC0uLL);
  v12 = v11;
  if ( v11 )
    memset_0(v11, 0, 0xC0uLL);
  v26 = v12;
  if ( v12 )
    v13 = InputStateManager::InputStateManager(v12, v10);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v14 = -2147024882;
    v15 = 201LL;
LABEL_22:
    v17 = (unsigned int)v14;
    goto LABEL_23;
  }
  v16 = InputStateManager::Initialize(v13);
  v14 = v16;
  if ( v16 >= 0 )
  {
    v3[6] = v13;
    v14 = 0;
    goto LABEL_24;
  }
  v17 = (unsigned int)v16;
  v15 = 204LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v17);
LABEL_24:
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v18 = InputProviderManager::InitializeHelper(v3 + 7, v3[6], 0LL);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v19);
    JUMPOUT(0x180004926LL);
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v20 = v3[11];
    if ( v20 )
    {
      v3[11] = 0LL;
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = Win32kInterop::Create(v3[6], *v6, v3 + 11);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
  }
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
