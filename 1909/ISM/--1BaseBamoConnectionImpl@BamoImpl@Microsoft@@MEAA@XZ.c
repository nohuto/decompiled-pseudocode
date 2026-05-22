/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18005A734
 * Callers:
 *     ??_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z @ 0x18005A9B0 (--_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x18005A9F0 (--_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x18005AFB0 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 *     ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x18007D3E0 (--_EMPCManagerConnection@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x1800CE840 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 *     ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x180110180 (--_GMPCManagerClientConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18002DD78 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  void *v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  wil::details *v5; // rcx
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = (wil::details *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v5 )
    wil::details::FreeProcessHeap(v5, v2);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 8);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, (__int64)v2, v3, v4);
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 5);
}
