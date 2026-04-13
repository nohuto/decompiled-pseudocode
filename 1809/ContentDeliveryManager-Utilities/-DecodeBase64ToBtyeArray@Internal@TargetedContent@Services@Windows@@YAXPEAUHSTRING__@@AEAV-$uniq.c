/*
 * XREFs of ?DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006D384
 * Callers:
 *     ?Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006D550 (-Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uni.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x18006D670 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006C3E0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006F088 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  void *v9; // rsi
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdi
  DWORD LastError; // ebx
  int v15; // eax
  LPVOID v16; // rsi
  void *v17; // rcx
  void *v18; // rdi
  DWORD v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  SIZE_T cb; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+48h] BYREF

  v22[1] = -2LL;
  *a3 = 0;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(v22);
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v22[0] + 104LL))(v22[0], a1, &v21);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x11E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, SIZE_T *))(*(_QWORD *)v21 + 56LL))(v21, &cb);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v9 = CoTaskMemAlloc((unsigned int)cb);
  pv = v9;
  v12 = retaddr;
  if ( !v9 )
  {
LABEL_17:
    wil::details::in1diag3::_Throw_NullAlloc(v12, (void *)0x122, v10, v11);
    JUMPOUT(0x18006D53CLL);
  }
  v13 = v22[0];
  LastError = GetLastError();
  CoTaskMemFree(v9);
  SetLastError(LastError);
  pv = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, SIZE_T *, LPVOID *))(*(_QWORD *)v13 + 80LL))(v13, v21, &cb, &pv);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x123,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_15;
  }
  *a3 = cb;
  v16 = pv;
  v17 = 0LL;
  pv = 0LL;
  v18 = *a2;
  if ( *a2 )
  {
    v19 = GetLastError();
    CoTaskMemFree(v18);
    SetLastError(v19);
    v17 = pv;
  }
  *a2 = v16;
  if ( v17 )
    CoTaskMemFree(v17);
  v20 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
}
