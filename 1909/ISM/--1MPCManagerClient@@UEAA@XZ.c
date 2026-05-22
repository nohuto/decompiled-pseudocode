/*
 * XREFs of ??1MPCManagerClient@@UEAA@XZ @ 0x18010FBA0
 * Callers:
 *     ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180110140 (--_EMPCManagerClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180021D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPC_ea_180113770.c)
 */

void __fastcall MPCManagerClient::~MPCManagerClient(MPCManagerClient *this, volatile int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v3 = *((_QWORD *)this + 222);
  if ( v3 )
  {
    *((_QWORD *)this + 222) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v3);
  }
  v4 = *((_QWORD *)this + 219);
  if ( v4 )
  {
    *((_QWORD *)this + 219) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, a2);
  }
  v5 = *((_QWORD *)this + 216);
  if ( v5 )
  {
    *((_QWORD *)this + 216) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5, a2);
  }
  v6 = *((_QWORD *)this + 213);
  if ( v6 )
  {
    *((_QWORD *)this + 213) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, a2);
  }
  v7 = *((_QWORD *)this + 210);
  if ( v7 )
  {
    *((_QWORD *)this + 210) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7, a2);
  }
  v8 = *((_QWORD *)this + 207);
  if ( v8 )
  {
    *((_QWORD *)this + 207) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8, a2);
  }
  v9 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 206);
  if ( v9 )
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  v10 = *((_QWORD *)this + 205);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *((_QWORD *)this + 204);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>(
    (__int64)this,
    a2);
}
