/*
 * XREFs of ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00E0428 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___ @ 0x1C00E04D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___.c)
 *     ??$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$06@1@PEAU?$AlpcReply@$06@1@G@Z @ 0x1C00E0818 (--$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$06@1@PEAU-$AlpcReply@$06.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@G@Z @ 0x1C00E09C8 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00E0C5C (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00E0F04 (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 */

void **__fastcall DispBroker::DispBrokerClient::ReferencePort(
        struct DispBroker::DispBrokerClientHandle **a1,
        void **a2)
{
  *a2 = 0LL;
  DispBroker::DispBrokerClientReference::Assign(a2, 0LL);
  ExAcquireResourceSharedLite(DispBroker::DispBrokerClient::s_pSessionLock, 1u);
  if ( DispBroker::DispBrokerClient::IsValid((DispBroker::DispBrokerClient *)a1)
    || (ExReleaseResourceLite(DispBroker::DispBrokerClient::s_pSessionLock),
        ExAcquireResourceExclusiveLite(DispBroker::DispBrokerClient::s_pSessionLock, 1u),
        DispBroker::DispBrokerClient::EnsureConnected((void **)a1) >= 0) )
  {
    DispBroker::DispBrokerClientReference::Assign(a2, a1[2]);
  }
  ExReleaseResourceLite(DispBroker::DispBrokerClient::s_pSessionLock);
  return a2;
}
