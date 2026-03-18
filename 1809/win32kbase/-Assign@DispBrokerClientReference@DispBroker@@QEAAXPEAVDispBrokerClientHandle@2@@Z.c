/*
 * XREFs of ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C005FD10 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x1C00940F8 (--0DispBrokerClient@DispBroker@@QEAA@XZ.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00E0428 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___ @ 0x1C00E04D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___.c)
 *     ??$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$06@1@PEAU?$AlpcReply@$06@1@G@Z @ 0x1C00E0818 (--$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$06@1@PEAU-$AlpcReply@$06.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@G@Z @ 0x1C00E09C8 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00E0C5C (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     ??_GDispBrokerClientHandle@DispBroker@@QEAAPEAXI@Z @ 0x1C00E0B94 (--_GDispBrokerClientHandle@DispBroker@@QEAAPEAXI@Z.c)
 */

void __fastcall DispBroker::DispBrokerClientReference::Assign(
        void **this,
        struct DispBroker::DispBrokerClientHandle *a2)
{
  struct DispBroker::DispBrokerClientHandle *v4; // rcx

  v4 = (struct DispBroker::DispBrokerClientHandle *)*this;
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
        DispBroker::DispBrokerClientHandle::`scalar deleting destructor'(v4, (unsigned int)a2);
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
