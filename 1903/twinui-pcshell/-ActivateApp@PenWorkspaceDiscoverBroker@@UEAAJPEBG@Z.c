/*
 * XREFs of ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1801DB8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629_____lambda_5599339c690d67fb68c6b7e13742e629___ @ 0x1801DA27C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___--CTaskW.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180407458 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::ActivateApp(
        PenWorkspaceDiscoverBroker *this,
        const unsigned __int16 *a2)
{
  int IsShellExperience; // eax
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rax
  DWORD CurrentThreadId; // eax
  __int64 v14; // [rsp+30h] [rbp-9h] BYREF
  __int64 v15; // [rsp+38h] [rbp-1h]
  __int64 v16; // [rsp+40h] [rbp+7h]
  __int64 v17[3]; // [rsp+48h] [rbp+Fh] BYREF
  char v18; // [rsp+60h] [rbp+27h]
  _QWORD v19[3]; // [rsp+68h] [rbp+2Fh] BYREF
  char v20; // [rsp+80h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v4 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (LPVOID *)&v14,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v16;
      v9 = 0LL;
      v10 = v14;
      v11 = v15;
      v14 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
      memset(v19, 0, sizeof(v19));
      v17[2] = v8;
      v17[0] = v10;
      v17[1] = v11;
      v18 = 0;
      v20 = 1;
      v12 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v12 )
        v9 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629_____lambda_5599339c690d67fb68c6b7e13742e629___(
               (__int64)v12,
               v17);
      CurrentThreadId = GetCurrentThreadId();
      v7 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v9, 0LL);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
      if ( v7 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v7);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v6);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
    return (unsigned int)v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return v4;
  }
}
