/*
 * XREFs of ??1MPCConstantManagerClient@@UEAA@XZ @ 0x180119C08
 * Callers:
 *     ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x18011B0A0 (--_GMPCConstantManagerClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManagerClient::~MPCConstantManagerClient(MPCConstantManagerClient *this)
{
  volatile signed __int32 *v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rcx
  Microsoft::Bamo::BaseBamoConnection *v10; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  }
  v3 = (__int64 *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 13);
    if ( v3 != v4 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v3++);
      while ( v3 != v4 );
      v3 = (__int64 *)*((_QWORD *)this + 12);
    }
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 14) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 10);
    if ( v5 != v6 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v5++);
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 9);
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v7 = (__int64 *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 7);
    if ( v7 != v8 )
    {
      do
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7++);
      while ( v7 != v8 );
      v7 = (__int64 *)*((_QWORD *)this + 6);
    }
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  if ( v10 )
    Microsoft::Bamo::BaseBamoConnection::Release(v10);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>((__int64)this);
}
