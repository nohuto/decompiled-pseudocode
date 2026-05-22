/*
 * XREFs of ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x180127490
 * Callers:
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180128D5C (-RemoveAt@-$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Ba.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180128F44 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18005A7F0 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18005BF00 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::BamoImpl::BamoImplObject **__fastcall Microsoft::Bamo::Lock::Lock(
        Microsoft::BamoImpl::BamoImplObject **this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  const char *v5; // r9
  bool HasLock; // al

  *this = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 24LL))(a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    this,
    *(_QWORD *)(v3 + 64),
    v4,
    v5);
  HasLock = Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
  *((_BYTE *)this + 8) = HasLock;
  if ( !HasLock )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
    *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
  }
  ++*(_DWORD *)(v3 + 140);
  return this;
}
