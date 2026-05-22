/*
 * XREFs of ?RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ @ 0x180105718
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMagnifierProcessor@@@Z @ 0x1800C1B18 (--$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMagnifierProce.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B064 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall MagnifierProcessor::RuntimeClassInitialize(MagnifierProcessor *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  v4 = *((_QWORD *)this + 3);
  if ( v4 != v3 )
  {
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
      v4 = *((_QWORD *)this + 3);
    }
    v6 = v4;
    *((_QWORD *)this + 3) = v3;
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v6);
    v4 = *((_QWORD *)this + 3);
  }
  *(_QWORD *)(v4 + 56) = ((unsigned __int64)this + 16) & -(__int64)(this != 0LL);
  return 0LL;
}
