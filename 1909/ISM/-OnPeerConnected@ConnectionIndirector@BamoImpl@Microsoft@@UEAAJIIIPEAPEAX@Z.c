/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800065E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnPeerConnectedCallout@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAJPEAVBaseBamoPeerImpl@23@PEA_NPEAPEAVBamoPrincipal@Bamo@3@@Z @ 0x180006820 (-OnPeerConnectedCallout@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAJPEAVBaseBamoPeerImpl@23@.c)
 *     ?AllocatePeerCallout@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAJPEAPEAVBaseBamoPeer@Bamo@3@@Z @ 0x1800068F0 (-AllocatePeerCallout@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAJPEAPEAVBaseBamoPeer@Bamo@3@.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800069B0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  void **v13; // r14
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  Microsoft::BamoImpl::BamoImplObject *v17; // rcx
  struct Microsoft::Bamo::BamoPrincipal *v18; // rcx
  int v19; // eax
  void (__fastcall *v20)(__int64, __int64); // rsi
  __int64 v21; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rdi
  const char *v26; // r9
  const char *v27; // r9
  int v28; // eax
  struct Microsoft::Bamo::BamoPrincipal *v30; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v31; // [rsp+28h] [rbp-50h]
  struct Microsoft::Bamo::BaseBamoPeer *v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v36; // [rsp+80h] [rbp+8h] BYREF

  v34 = -2LL;
  v9 = (volatile signed __int32 *)((char *)this - 16);
  v10 = 0LL;
  v31 = 0LL;
  v11 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v11 + 136) != GetCurrentThreadId() )
  {
    v31 = v9;
    _InterlockedIncrement(v9 + 2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
    v10 = v31;
  }
  v12 = *((_QWORD *)this + 1);
  v13 = a5;
  *a5 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocatePeerCallout(
          (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v12,
          &v32);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x458,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v14,
      (int)v30);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v32 + 8LL))(v32);
  v33 = v15;
  v16 = *(_QWORD *)(v12 + 64);
  v17 = *(Microsoft::BamoImpl::BamoImplObject **)(v15 + 24);
  *(_QWORD *)(v15 + 24) = v16;
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v10 = v31;
  }
  if ( v17 )
    Microsoft::BamoImpl::BamoImplObject::Release(v17);
  *(_DWORD *)(v15 + 32) = a2;
  *(_DWORD *)(v15 + 36) = a3;
  *(_DWORD *)(v15 + 40) = a4;
  v18 = v30;
  v30 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoPrincipal *))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnectedCallout(
          (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v12,
          (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v15,
          &v36,
          &v30);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x462,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v19,
      (int)v30);
    __debugbreak();
  }
  if ( v36 )
  {
    v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 80LL);
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 16) + 16LL))(*(_QWORD *)(v12 + 16));
    v20(v15, v21);
    if ( v30 )
    {
      v22 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoPrincipal *))(*(_QWORD *)v30 + 32LL))(v30);
      v23 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v22,
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v15);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, v23);
    }
    *(_QWORD *)(v15 + 56) = *(_QWORD *)(v12 + 72);
    *(_QWORD *)(v12 + 72) = v15;
    *v13 = (void *)v15;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v30);
    v24 = 0;
  }
  else
  {
    v24 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)0x87B2080CLL,
      (int)v30);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v30);
    (**(void (__fastcall ***)(__int64))v15)(v15);
  }
  if ( v10 )
  {
    v25 = *((_QWORD *)v10 + 3);
    if ( *(_DWORD *)(v25 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v26);
      __debugbreak();
    }
    *(_DWORD *)(v25 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v25 + 96));
    v28 = _InterlockedDecrement(v10 + 2);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v27);
      __debugbreak();
    }
    if ( !v28 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return v24;
}
