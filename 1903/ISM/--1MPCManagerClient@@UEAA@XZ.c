/*
 * XREFs of ??1MPCManagerClient@@UEAA@XZ @ 0x18010FDD4
 * Callers:
 *     ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180110360 (--_EMPCManagerClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801138E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPC_ea_1801138E0.c)
 */

void __fastcall MPCManagerClient::~MPCManagerClient(MPCManagerClient *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *((_QWORD *)this + 222);
  if ( v2 )
  {
    *((_QWORD *)this + 222) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v2);
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 219);
  if ( v3 )
  {
    *((_QWORD *)this + 219) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 216);
  if ( v4 )
  {
    *((_QWORD *)this + 216) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 213);
  if ( v5 )
  {
    *((_QWORD *)this + 213) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 210);
  if ( v6 )
  {
    *((_QWORD *)this + 210) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 207);
  if ( v7 )
  {
    *((_QWORD *)this + 207) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  }
  v8 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 206);
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  v9 = *((_QWORD *)this + 205);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *((_QWORD *)this + 204);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>((__int64)this);
}
