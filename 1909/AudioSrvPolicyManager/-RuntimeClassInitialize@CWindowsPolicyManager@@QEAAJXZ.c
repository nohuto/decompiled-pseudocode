/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180005478
 * Callers:
 *     ActivatePolicyManager @ 0x180004DF0 (ActivatePolicyManager.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002D18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180008704 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180008C4C (--0CDuckingManager@@AEAA@XZ.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180018AAC (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x18001FB28 (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x1800275C4 (-TS_ServiceStart@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800349FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180034F8E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(struct CPlaybackManager **this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  int Instance; // eax
  HANDLE v17; // rax
  CDuckingManager *v18; // rax
  CDuckingManager *v19; // rdx
  struct CApplicationManager *v20; // rbx
  CApplicationManager *v21; // rax
  DWORD v22; // eax
  struct CApplicationManager *v23; // rbx
  unsigned int dwCreationFlags; // [rsp+28h] [rbp-59h]
  struct CApplicationManager *v25; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-41h]
  _QWORD Recipient[4]; // [rsp+48h] [rbp-39h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+68h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  Recipient[2] = -2LL;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x60uLL);
  if ( v3 )
  {
    *v3 = &CAudioThreadPool::`vftable';
    v3[10] = 0LL;
    *((_DWORD *)v3 + 2) = 3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 1;
    *((_DWORD *)v3 + 18) = 72;
    ThreadPool = (struct CAudioThreadPool *)v3;
  }
  else
  {
    ThreadPool = 0LL;
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = 0;
    if ( RtlDllShutdownInProgress() )
    {
      v4 = -2147023781;
LABEL_14:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_2867a39f176c3dc2c300b28ea7d59b37_Traceguids, v4);
      }
      goto LABEL_18;
    }
    ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
    v3[10] = ThreadpoolCleanupGroup;
    if ( ThreadpoolCleanupGroup )
    {
      v3[3] = ThreadpoolCleanupGroup;
      v3[4] = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = LastError;
    }
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_14;
    g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
    if ( !g_WorkerEventPort )
    {
      v8 = 231LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v8,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v7);
    }
    g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
    if ( !g_EventWorkerThreadHandle )
    {
      v8 = 234LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v8,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v7);
    }
    TS_ServiceStart();
    v25 = 0LL;
    v10 = CApplicationManager::CreateInstance(&v25);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 239LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)v11);
      v20 = v25;
LABEL_49:
      if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 2, 0xFFFFFFFF) == 1 )
      {
        v23 = v25;
        (*(void (__fastcall **)(struct CApplicationManager *))(*(_QWORD *)v25 + 16LL))(v25);
        (*(void (__fastcall **)(struct CApplicationManager *, __int64))(*(_QWORD *)v23 + 8LL))(v23, 1LL);
      }
      return v4;
    }
    v26 = 0LL;
    v13 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 0LL;
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      *((_DWORD *)v13 + 3) = 1;
      *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v13 = &CStreamClassPolicyManager::`vftable';
      v14 = (__int64)v13;
      v26 = v13;
    }
    v26 = 0LL;
    v15 = g_StreamClassPolicyManager;
    g_StreamClassPolicyManager = v14;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( g_StreamClassPolicyManager )
    {
      Instance = CPlaybackManager::CreateInstance(this + 4);
      v4 = Instance;
      if ( Instance < 0 )
      {
        v11 = (unsigned int)Instance;
        v12 = 244LL;
        goto LABEL_42;
      }
      v17 = GetProcessHeap();
      v18 = (CDuckingManager *)HeapAlloc(v17, 0, 0x140uLL);
      if ( v18 )
        v19 = CDuckingManager::CDuckingManager(v18);
      else
        v19 = 0LL;
      this[5] = v19;
      v4 = v19 == 0LL ? 0x8007000E : 0;
      if ( v19 )
      {
        v21 = v25;
        v20 = 0LL;
        v25 = 0LL;
        g_ApplicationManager = v21;
        g_PlaybackManager = this[4];
        memset_0(&spc, 0, sizeof(spc));
        if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
        {
          g_bIsAoAcSystem = 1;
          Recipient[0] = LowPowerEpochNotificationCallback;
          Recipient[1] = 0LL;
          v22 = PowerSettingRegisterNotification(
                  &GUID_LOW_POWER_EPOCH,
                  2u,
                  Recipient,
                  &g_hLowPowerEpochNotificationHandle);
          if ( v22 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0x106,
              (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
              (const char *)v22,
              dwCreationFlags);
        }
        else
        {
          g_bIsAoAcSystem = 0;
        }
        v4 = 0;
        goto LABEL_49;
      }
      v12 = 246LL;
    }
    else
    {
      v4 = -2147024882;
      v12 = 242LL;
    }
    v11 = v4;
    goto LABEL_42;
  }
  v4 = -2147024882;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)v4);
  return v4;
}
