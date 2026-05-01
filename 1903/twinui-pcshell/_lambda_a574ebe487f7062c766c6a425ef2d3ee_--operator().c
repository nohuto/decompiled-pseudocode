/*
 * XREFs of _lambda_a574ebe487f7062c766c6a425ef2d3ee_::operator() @ 0x18003086C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a574ebe487f7062c766c6a425ef2d3ee___::Run @ 0x1800309C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a574ebe487f7062c766c6a425ef2d3ee___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800447F0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060C18 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180150AB0 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_a574ebe487f7062c766c6a425ef2d3ee_::operator()(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rcx
  int v9; // eax
  __int64 v10; // rdx
  HANDLE ProcessHeap; // rax
  int v12; // [rsp+28h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-9h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1h]
  LPVOID lpMem; // [rsp+58h] [rbp+7h]
  char v16; // [rsp+60h] [rbp+Fh]
  __int128 v17; // [rsp+68h] [rbp+17h] BYREF
  __int64 v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int *v20; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  void *v22; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+6Fh] BYREF

  v2 = a1 + 40;
  v3 = *(_QWORD *)(a1 + 88);
  if ( *(_DWORD *)v3 == 1 )
  {
    v16 = 0;
    v13 = *(_DWORD *)(v3 + 40);
    v14 = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v13,
        *(const unsigned __int16 **)(v3 + 56));
    else
      lpMem = *(LPVOID *)(v3 + 56);
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = v2;
    v18 = 0LL;
    v19 = 0;
    v20 = &v13;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)&v17);
  }
  else
  {
    memset_0(&v13, 0, 0x20uLL);
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v4,
      v12);
    goto LABEL_14;
  }
  v22 = 0LL;
  if ( !*(_QWORD *)(a1 + 32)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22),
        v9 = CMarshaledInterface::_Unmarshal(
               (CMarshaledInterface *)(a1 + 32),
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               &v22,
               1),
        v4 = v9,
        v9 >= 0) )
  {
    v23 = 0LL;
    v5 = CoreQueryWindowService(
           *(_QWORD *)a1,
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v23);
    v4 = v5;
    if ( v5 < 0 )
    {
      v10 = 198LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v23 + 48LL))(
             v23,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 24),
             v22);
      v4 = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
        v4 = 0;
        goto LABEL_10;
      }
      v10 = 199LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v5,
      v12);
LABEL_10:
    v6 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v9,
    v12);
LABEL_12:
  v7 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_14:
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v17);
  if ( v16 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return (unsigned int)v4;
}
