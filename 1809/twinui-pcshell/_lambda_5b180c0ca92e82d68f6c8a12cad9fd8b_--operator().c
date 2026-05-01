/*
 * XREFs of _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator() @ 0x18005DD10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b___::Run @ 0x18005DD00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b___--Run.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180019450 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator()(__int64 a1)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  void *v5; // rcx
  int v7; // eax
  __int64 v8; // rdx
  HANDLE ProcessHeap; // rax
  _BYTE v10[16]; // [rsp+48h] [rbp-9h] BYREF
  LPVOID lpMem; // [rsp+58h] [rbp+7h]
  char v12; // [rsp+60h] [rbp+Fh]
  _BYTE v13[24]; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  void *v16; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+6Fh] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 40),
    (wil::ActivityThreadWatcher *)v10);
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_10;
  }
  v16 = 0LL;
  if ( !*(_QWORD *)(a1 + 32)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16),
        v7 = CMarshaledInterface::_Unmarshal(
               (CMarshaledInterface *)(a1 + 32),
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               &v16,
               1),
        v2 = v7,
        v7 >= 0) )
  {
    v17 = 0LL;
    v3 = CoreQueryWindowService(
           *(_QWORD *)a1,
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v17);
    v2 = v3;
    if ( v3 < 0 )
    {
      v8 = 199LL;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v17 + 48LL))(
             v17,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 24),
             v16);
      v2 = v3;
      if ( v3 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 40);
        v2 = 0;
        goto LABEL_6;
      }
      v8 = 200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
LABEL_6:
    v4 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v7);
LABEL_8:
  v5 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_10:
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  if ( v12 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return (unsigned int)v2;
}
