/*
 * XREFs of ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00BE568
 * Callers:
 *     ndisInitModeTimeoutWorkItem @ 0x1C00BE150 (ndisInitModeTimeoutWorkItem.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     ndisNotifyBindFailure @ 0x1C00BE2E0 (ndisNotifyBindFailure.c)
 */

__int64 __fastcall ndisNotifyBindFailureOnUnboundProtocols(__int64 a1)
{
  int v2; // esi
  __int64 v3; // r15
  unsigned __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  _NDIS_PROTOCOL_BLOCK *v8; // r14
  __int64 v9; // rdx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 5168, 0LL);
  v2 = *(_DWORD *)(a1 + 5136);
LABEL_2:
  v3 = *(unsigned int *)(a1 + 5044);
  v4 = 0LL;
  v5 = v2;
  while ( v4 != v3 )
  {
    if ( v4 >= *(unsigned int *)(a1 + 5044) )
      __fastfail(5u);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 5048) + 8 * v4);
    v7 = *(_QWORD *)(v6 + 80);
    v8 = *(_NDIS_PROTOCOL_BLOCK **)(v7 + 40);
    if ( v8 && !*(_DWORD *)(v6 + 52) )
    {
      if ( ndisReferenceProtocol(*(_QWORD *)(v7 + 40), 0xDu) )
      {
        KeLeaveCriticalRegion();
        ExReleasePushLockEx(a1 + 5168, 0LL);
        ndisNotifyBindFailure(a1, (__int64)v8);
        ndisDereferenceProtocol(v8, v9, 0xDu);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(a1 + 5168, 0LL);
      }
    }
    v5 = *(_DWORD *)(a1 + 5136);
    if ( v2 != v5 )
    {
LABEL_13:
      v2 = v5;
      goto LABEL_2;
    }
    ++v4;
  }
  if ( v2 != v5 )
    goto LABEL_13;
  KeLeaveCriticalRegion();
  return ExReleasePushLockEx(a1 + 5168, 0LL);
}
