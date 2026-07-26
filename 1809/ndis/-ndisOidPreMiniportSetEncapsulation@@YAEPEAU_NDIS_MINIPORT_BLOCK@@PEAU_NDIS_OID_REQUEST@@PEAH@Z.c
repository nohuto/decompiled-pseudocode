/*
 * XREFs of ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0023740
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00CF7C0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisPreTaskOffloadSet @ 0x1C00E49A0 (ndisPreTaskOffloadSet.c)
 * Callees:
 *     ndisTranslateOffloadSetsToTasks @ 0x1C00E5140 (ndisTranslateOffloadSetsToTasks.c)
 */

unsigned __int8 __fastcall ndisOidPreMiniportSetEncapsulation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  unsigned __int64 *p_Lock; // rbp
  int v7; // ebx
  KIRQL v8; // al
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  UINT MiniportTaskSize; // r9d
  unsigned __int8 v11; // dl
  PVOID InformationBuffer; // r10
  _NDIS_MINIPORT_OFFLOAD *v13; // rcx
  _NDIS_MINIPORT_OFFLOAD *v14; // rcx
  _NDIS_OFFLOAD_ENCAPSULATION *p_MiniportMergedEncapsulation; // r8
  NDIS_OID Oid; // eax
  UINT InformationBufferLength; // eax
  unsigned __int8 result; // al
  PVOID v19; // rax

  p_Lock = &a1->Lock;
  v7 = -1073741823;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Offload = a1->Offload;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2308981;
  if ( !Offload || !Offload->SupportsOffload )
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v8);
    v11 = 1;
    *a3 = -1073741637;
    goto LABEL_16;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(p_Lock, v8);
  MiniportTaskSize = 28;
  v11 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v7 = -1073676268;
  }
  else
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( *(_BYTE *)InformationBuffer != 0xA8
      || !*((_BYTE *)InformationBuffer + 1)
      || *((_WORD *)InformationBuffer + 1) < 0x1Cu )
    {
      v7 = -1073676267;
      goto LABEL_16;
    }
    v13 = a1->Offload;
    *(_OWORD *)&v13->MiniportMergedEncapsulation.Header.Type = *(_OWORD *)InformationBuffer;
    *(_QWORD *)&v13->MiniportMergedEncapsulation.IPv6.Enabled = *((_QWORD *)InformationBuffer + 2);
    v13->MiniportMergedEncapsulation.IPv6.HeaderSize = *((_DWORD *)InformationBuffer + 6);
    v14 = a1->Offload;
    p_MiniportMergedEncapsulation = &v14->MiniportMergedEncapsulation;
    if ( (*(_DWORD *)&a2->NdisReserved[16] & 0x80000) == 0
      && v14->MiniportMergedEncapsulation.IPv4.Enabled == v14->MiniportSetEncapsulation.IPv4.Enabled
      && v14->MiniportMergedEncapsulation.IPv6.Enabled == v14->MiniportSetEncapsulation.IPv6.Enabled )
    {
      v7 = 0;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 28;
    }
    else
    {
      if ( !v14->MiniportMergedEncapsulation.IPv4.Enabled )
      {
        *(_QWORD *)&v14->MiniportMergedEncapsulation.IPv4.Enabled = *(_QWORD *)&v14->MiniportSetEncapsulation.IPv4.Enabled;
        v14->MiniportMergedEncapsulation.IPv4.HeaderSize = v14->MiniportSetEncapsulation.IPv4.HeaderSize;
      }
      if ( !v14->MiniportMergedEncapsulation.IPv6.Enabled )
      {
        *(_QWORD *)&v14->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&v14->MiniportSetEncapsulation.IPv6.Enabled;
        v14->MiniportMergedEncapsulation.IPv6.HeaderSize = v14->MiniportSetEncapsulation.IPv6.HeaderSize;
      }
      if ( a1->MajorNdisVersion < 6u )
      {
        if ( v14->MiniportMergedEncapsulation.IPv4.Enabled == 1
          && v14->MiniportMergedEncapsulation.IPv4.EncapsulationType != 2
          || v14->MiniportMergedEncapsulation.IPv6.Enabled == 1
          && v14->MiniportMergedEncapsulation.IPv6.EncapsulationType != 2 )
        {
          v7 = -1073741637;
          goto LABEL_16;
        }
        ndisTranslateOffloadSetsToTasks(a1, InformationBuffer, p_MiniportMergedEncapsulation);
        a1->Offload->MiniportRequestOid = a2->DATA.QUERY_INFORMATION.Oid;
        v19 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        a2->DATA.QUERY_INFORMATION.Oid = -67042815;
        a1->Offload->MiniportRequestBuffer = v19;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = a1->Offload->MiniportTask;
        a1->Offload->MiniportRequestBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        MiniportTaskSize = a1->Offload->MiniportTaskSize;
      }
      else
      {
        a1->Offload->MiniportRequestBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        Oid = a2->DATA.QUERY_INFORMATION.Oid;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = p_MiniportMergedEncapsulation;
        a1->Offload->MiniportRequestOid = Oid;
        InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        a2->DATA.QUERY_INFORMATION.Oid = 16843018;
        a1->Offload->MiniportRequestBufferLength = InformationBufferLength;
      }
      v11 = 0;
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = MiniportTaskSize;
      v7 = 0;
    }
  }
LABEL_16:
  result = v11;
  *a3 = v7;
  return result;
}
