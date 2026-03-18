/*
 * XREFs of ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3930
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800E2228 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3010 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E380C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800E38FC (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180188AE8 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??_EBamoPeer@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x180188C90 (--_EBamoPeer@dataprovider_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180188CE0 (--_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180189540 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x180189780 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z @ 0x180194B20 (--_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180194B70 (--_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x180194C60 (--_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180198AE0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoImplObject::Release(
        Microsoft::BamoImpl::BamoImplObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
      a4);
    __debugbreak();
  }
  if ( !v4 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoImplObject *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v4;
}
