/*
 * XREFs of ?RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z @ 0x18000D630
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAY0CL@$$CBG$$QEAPEAVViewHierarchy@@@Z @ 0x18000F320 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000FC00 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::RuntimeClassInitialize(__int64 a1, int a2)
{
  void *v3; // rdx
  HANDLE Event; // rdi
  unsigned int v5; // r8d
  const char *v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 160) = a2;
  if ( a2 != 1 )
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( !Event )
    {
      wil::details::in1diag3::Throw_GetLastError(retaddr, v3, v5, v6);
      JUMPOUT(0x18000D750LL);
    }
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (void **)(a1 + 192),
      Event);
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 48) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = CoreUICreate(a1 + 48);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = *(_QWORD *)(a1 + 56);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 56) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = CoreUIFactoryCreate(a1 + 56);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v16 = a1;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const (&)[43],ViewHierarchy *>(
            a1 + 88,
            v11,
            v12,
            &v16);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  return 0LL;
}
