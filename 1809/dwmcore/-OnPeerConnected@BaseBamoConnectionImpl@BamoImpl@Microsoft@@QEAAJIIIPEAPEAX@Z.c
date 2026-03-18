/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180074AF0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180074A60 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180074E8C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800750C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18007525C (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  void **v5; // r15
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v20; // rax
  unsigned int v21; // eax
  void *v22; // rax
  unsigned int v23; // edi
  int v25; // [rsp+20h] [rbp-20h]
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v29; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  v29 = 0LL;
  *a5 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v26,
    this);
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 24LL))(
          this,
          &v27);
  v11 = v26;
  v12 = v10;
  if ( v26 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x458,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      v25);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    v13 + 24,
    *((_QWORD *)this + 8));
  *(_DWORD *)(v13 + 32) = a2;
  *(_DWORD *)(v13 + 36) = a3;
  *(_DWORD *)(v13 + 40) = a4;
  v14 = v29;
  v29 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v26,
    this);
  v15 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64, void ***, __int64 *))(*(_QWORD *)this + 32LL))(
          this,
          v13,
          &a5,
          &v29);
  v16 = v26;
  v17 = v15;
  if ( v26 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 96));
    *(_DWORD *)(v16 + 136) = GetCurrentThreadId();
  }
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x462,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v17,
      v25);
    __debugbreak();
  }
  if ( (_BYTE)a5 )
  {
    v18 = *(_QWORD *)v13;
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    (*(void (__fastcall **)(__int64, __int64))(v18 + 80))(v13, v19);
    if ( v29 )
    {
      v20 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
      v21 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v20,
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v13);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, v21);
    }
    *(_QWORD *)(v13 + 56) = *((_QWORD *)this + 9);
    v22 = (void *)v13;
    *((_QWORD *)this + 9) = v13;
    v13 = 0LL;
    v23 = 0;
    *v5 = v22;
  }
  else
  {
    v23 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL,
      v25);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v29);
  if ( v13 )
    (**(void (__fastcall ***)(__int64))v13)(v13);
  return v23;
}
