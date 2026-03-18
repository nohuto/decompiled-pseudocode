/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180188AE8
 * Callers:
 *     ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x180188B74 (--1DiagnosticCallbacksManager@@EEAA@XZ.c)
 *     ??_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x180188C10 (--_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180188C50 (--_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801A22A0 (--_EDataProviderRegistrarConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D8438 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3930 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rcx

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
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
