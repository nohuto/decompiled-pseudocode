/*
 * XREFs of ActivatePolicyManager @ 0x180004DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180005478 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180008390.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800349FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivatePolicyManager(__int64 a1, struct IVolumeProvider *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // edi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  signed __int32 v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  g_VolumeProvider = a2;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               3u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &g_DeviceEnumerator);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Instance);
    return v6;
  }
  g_PolicyManager = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v11 = Microsoft::WRL::Details::ModuleBase::module_;
  v8[7] = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioPolicyNotificationManager>'};
  if ( v11 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
  *((_QWORD *)v9 + 4) = 0LL;
  *((_QWORD *)v9 + 5) = 0LL;
  v9[12] = 0;
  *(_QWORD *)v9 = &CWindowsPolicyManager::`vftable';
  *((_QWORD *)v9 + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)v9 + 2) = &CWindowsPolicyManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioPolicyNotificationManager>'};
  v10 = CWindowsPolicyManager::RuntimeClassInitialize((CWindowsPolicyManager *)v9);
  if ( v10 >= 0 )
  {
    do
      v12 = v9[7];
    while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange(v9 + 7, v12 + 1, v12) );
    g_PolicyManager = (CWindowsPolicyManager *)v9;
    v10 = 0;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::Release(v9);
  if ( v10 < 0 )
    goto LABEL_13;
  *a5 = g_PolicyManager;
  return 0LL;
}
