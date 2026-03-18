/*
 * XREFs of ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0014DF8
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000E934 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000F708 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C00A03A0 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
        DirectComposition::CConnection **this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 56LL))(a2) )
    return (unsigned int)DirectComposition::CConnection::AcquireShellResourceAccess(this[5]);
  return v3;
}
