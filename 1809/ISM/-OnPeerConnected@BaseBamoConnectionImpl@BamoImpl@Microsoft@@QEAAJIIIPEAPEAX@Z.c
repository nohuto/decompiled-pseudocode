/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800115E0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180011B00 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180012414 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  void **v8; // r12
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rbx
  const char *v10; // r9
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r14
  void (__fastcall ***v14)(_QWORD); // rbx
  __int64 v15; // rax
  volatile signed __int32 *v16; // rcx
  signed __int32 v17; // edx
  bool v18; // sf
  __int64 v19; // rdx
  __int64 v20; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v21; // rdi
  const char *v22; // r9
  int v23; // r15d
  unsigned int v24; // edi
  __int64 v25; // rbx
  __int64 v26; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v27; // rax
  unsigned int v28; // eax
  __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v33; // [rsp+48h] [rbp-18h]
  __int64 v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v34 = -2LL;
  v8 = a5;
  *a5 = 0LL;
  v30 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  if ( !*((_DWORD *)this + 35) )
  {
    v9 = this;
    v31 = this;
    if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v10);
      __debugbreak();
    }
    *((_DWORD *)v9 + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 96));
  }
  v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 24LL))(
          this,
          &v32);
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 96));
    *((_DWORD *)v9 + 34) = GetCurrentThreadId();
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x458,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  v14 = (void (__fastcall ***)(_QWORD))v13;
  v15 = *((_QWORD *)this + 8);
  v16 = *(volatile signed __int32 **)(v13 + 24);
  *(_QWORD *)(v13 + 24) = v15;
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v14 = (void (__fastcall ***)(_QWORD))v13;
  }
  if ( v16 )
  {
    v17 = _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF);
    v18 = v17 - 1 < 0;
    v19 = (unsigned int)(v17 - 1);
    if ( v18 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        (const char *)retaddr);
      __debugbreak();
    }
    if ( !(_DWORD)v19 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v16 + 16LL))(
        v16,
        v19,
        v12,
        retaddr);
    v14 = (void (__fastcall ***)(_QWORD))v13;
  }
  *(_DWORD *)(v13 + 32) = a2;
  *(_DWORD *)(v13 + 36) = a3;
  *(_DWORD *)(v13 + 40) = a4;
  v20 = v30;
  v30 = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = 0LL;
  v33 = 0LL;
  if ( !*((_DWORD *)this + 35) )
  {
    v21 = this;
    v33 = this;
    if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v22);
      JUMPOUT(0x1800118F5LL);
    }
    *((_DWORD *)this + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  v23 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64, void ***, __int64 *))(*(_QWORD *)this + 32LL))(
          this,
          v13,
          &a5,
          &v30);
  if ( v21 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v21 + 96));
    *((_DWORD *)v21 + 34) = GetCurrentThreadId();
  }
  if ( v23 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x462,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  if ( (_BYTE)a5 )
  {
    v25 = *(_QWORD *)v13;
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    (*(void (__fastcall **)(__int64, __int64))(v25 + 80))(v13, v26);
    if ( v30 )
    {
      v27 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v28 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v27,
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v13);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, v28);
    }
    *(_QWORD *)(v13 + 56) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v13;
    v14 = 0LL;
    *v8 = (void *)v13;
    v24 = 0;
  }
  else
  {
    v24 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)0x87B2080CLL);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  if ( v14 )
    (**v14)(v14);
  return v24;
}
