/*
 * XREFs of ?InitializeProcessSubmixManager@@YAJXZ @ 0x180058CE0
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x180058DA8 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BE178 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 InitializeProcessSubmixManager(void)
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  g_ProcessSubmixManager = 0LL;
  v0 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v0;
  v1 = v0;
  if ( v0 )
  {
    v2 = Microsoft::WRL::Details::ModuleBase::module_;
    v0[3] = 1;
    *(_QWORD *)v0 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IProcessSubmixManager>::`vftable';
    if ( v2 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)v1 = &CProcessSubmixManager::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v1 + 4), 0, 0);
    *((_QWORD *)v1 + 7) = 0LL;
    *((_QWORD *)v1 + 8) = 0LL;
    *((_QWORD *)v1 + 9) = 0LL;
    v3 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IProcessSubmixManager **))v1)(
           v1,
           &GUID_eb20673d_5f1b_4787_a403_1e0c470fbfb7,
           &g_ProcessSubmixManager);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v3 >= 0 )
      return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v6);
    v3 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6E,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
