/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800E294C
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800E27E0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800E2BFC (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E2E30 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800E2FCC (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  void **v5; // r13
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  struct Microsoft::BamoImpl::BaseBamoPeerImpl *v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // r14d
  void (__fastcall *v17)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64); // rdi
  __int64 v18; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v19; // rax
  unsigned int v20; // eax
  struct Microsoft::BamoImpl::BaseBamoPeerImpl *v21; // rax
  unsigned int v22; // edi
  int v24; // [rsp+20h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v28; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  v28 = 0LL;
  *a5 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v25,
    this);
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 24LL))(
          this,
          &v26);
  v11 = v25;
  v12 = v10;
  if ( v25 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x458,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      v24);
    __debugbreak();
  }
  v13 = (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    (char *)v13 + 24,
    *((_QWORD *)this + 8));
  *((_DWORD *)v13 + 8) = a2;
  *((_DWORD *)v13 + 9) = a3;
  *((_DWORD *)v13 + 10) = a4;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v25,
    this);
  v14 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *))(*(_QWORD *)this + 32LL))(
          this,
          v13,
          &a5,
          &v28);
  v15 = v25;
  v16 = v14;
  if ( v25 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 96));
    *(_DWORD *)(v15 + 136) = GetCurrentThreadId();
  }
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x462,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v16,
      v24);
    __debugbreak();
  }
  if ( (_BYTE)a5 )
  {
    v17 = *(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v13 + 80LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    v17(v13, v18);
    if ( v28 )
    {
      v19 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
      v20 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v19, v13);
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, v20);
    }
    *((_QWORD *)v13 + 7) = *((_QWORD *)this + 9);
    v21 = v13;
    *((_QWORD *)this + 9) = v13;
    v13 = 0LL;
    v22 = 0;
    *v5 = v21;
  }
  else
  {
    v22 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL,
      v24);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v28);
  if ( v13 )
    (**(void (__fastcall ***)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *))v13)(v13);
  return v22;
}
