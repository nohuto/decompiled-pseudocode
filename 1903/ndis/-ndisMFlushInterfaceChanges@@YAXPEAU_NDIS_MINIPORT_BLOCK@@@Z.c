/*
 * XREFs of ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0096FA0
 * Callers:
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C0117780 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C01172C4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __fastcall ndisMFlushInterfaceChanges(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  KIRQL v3; // dl
  __int128 v4; // xmm0
  __int16 v5; // cx
  __int128 v6; // xmm1
  struct _NDIS_STATUS_INDICATION v7; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v8[36]; // [rsp+90h] [rbp+17h] BYREF

  while ( 1 )
  {
    v2 = 0;
    memset(v8, 0, sizeof(v8));
    memset(&v7, 0, sizeof(v7));
    v7.StatusCode = 0;
    v7.StatusBuffer = 0LL;
    v7.StatusBufferSize = 0;
    v7.SourceHandle = DriverEntry;
    v7.Header = (_NDIS_OBJECT_HEADER)7340440;
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    if ( a1->MacAddressUpdateQueued )
    {
      v4 = *(_OWORD *)&a1->PendingMacAddress.Length;
      v5 = *(_WORD *)&a1->PendingMacAddress.Address[30];
      v6 = *(_OWORD *)&a1->PendingMacAddress.Address[14];
      a1->MacAddressUpdateQueued = 0;
      v2 = 32;
      *(_OWORD *)v8 = v4;
      v7.StatusCode = 1073873072;
      *(_OWORD *)&v8[16] = v6;
      *(_WORD *)&v8[32] = v5;
      v7.StatusBuffer = v8;
      v7.StatusBufferSize = 34;
    }
    else if ( a1->MtuUpdateQueued )
    {
      a1->MtuUpdateQueued = 0;
      v2 = 64;
      *(_DWORD *)v8 = a1->PendingMtuSize;
      v7.StatusCode = 1073873073;
      v7.StatusBuffer = &a1->PendingMtuSize;
      v7.StatusBufferSize = 4;
    }
    else
    {
      a1->InterfaceUpdateInProgress = 0;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( !v7.StatusCode )
      break;
    ndisMApplyInterfaceChange(a1, v2, &v7);
  }
}
