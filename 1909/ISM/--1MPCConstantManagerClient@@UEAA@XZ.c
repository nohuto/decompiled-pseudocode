/*
 * XREFs of ??1MPCConstantManagerClient@@UEAA@XZ @ 0x180119B28
 * Callers:
 *     ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x18011AFC0 (--_GMPCConstantManagerClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180021D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManagerClient::~MPCConstantManagerClient(MPCConstantManagerClient *this, volatile int *a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rcx
  Microsoft::Bamo::BaseBamoConnection *v11; // rcx

  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, a2);
  }
  v4 = (__int64 *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 13);
    if ( v4 != v5 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v4++);
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 12);
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 14) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v6 = (__int64 *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = (__int64 *)*((_QWORD *)this + 10);
    if ( v6 != v7 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6++);
      while ( v6 != v7 );
      v6 = (__int64 *)*((_QWORD *)this + 9);
    }
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v8 = (__int64 *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    v9 = (__int64 *)*((_QWORD *)this + 7);
    if ( v8 != v9 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8++);
      while ( v8 != v9 );
      v8 = (__int64 *)*((_QWORD *)this + 6);
    }
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  if ( v11 )
    Microsoft::Bamo::BaseBamoConnection::Release(v11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>(
    (__int64)this,
    a2);
}
