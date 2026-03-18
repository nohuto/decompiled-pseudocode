/*
 * XREFs of ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800E2FCC
 * Callers:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800E294C (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800E2F10 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3000 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

Microsoft::BamoImpl::BamoImplObject **__fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
        Microsoft::BamoImpl::BamoImplObject **a1,
        volatile signed __int32 *a2)
{
  Microsoft::BamoImpl::BamoImplObject *v3; // rcx

  v3 = *a1;
  *a1 = (Microsoft::BamoImpl::BamoImplObject *)a2;
  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  if ( v3 )
    Microsoft::BamoImpl::BamoImplObject::Release(v3);
  return a1;
}
