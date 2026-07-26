/*
 * XREFs of ndisNotifyMiniports @ 0x1C012B80C
 * Callers:
 *     ndisPowerStateCallback @ 0x1C00327F0 (ndisPowerStateCallback.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C001BBB4 (WPP_RECORDER_SF_qLq.c)
 *     ndisReferenceDriver @ 0x1C003F5F4 (ndisReferenceDriver.c)
 *     ?ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C013620C (-ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVE.c)
 *     ?ndisUnprocessAllMiniports@@_Y2PAGENPNP@@AXPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0136338 (-ndisUnprocessAllMiniports@@_Y2PAGENPNP@@AXPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

void __fastcall ndisNotifyMiniports(struct _NDIS_MINIPORT_BLOCK *a1, int a2, void *a3)
{
  int v5; // edx
  KIRQL v6; // al
  struct _NDIS_M_DRIVER_BLOCK *v7; // rbx
  KIRQL v8; // bp
  struct _NDIS_MINIPORT_BLOCK *UnprocessedMiniport; // rax
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xDu,
      0x38u,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1,
      5,
      a3);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( a1 )
  {
    ndisDevicePnPEventNotifyMiniport(a1, 5, a3, 4u);
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v7 = ndisMiniDriverList;
    v8 = v6;
    if ( ndisMiniDriverList )
    {
      do
      {
        if ( ndisReferenceDriver((__int64)v7, 5u) )
        {
          KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
          while ( 1 )
          {
            UnprocessedMiniport = ndisReferenceNextUnprocessedMiniport(v7);
            if ( !UnprocessedMiniport )
              break;
            ndisDevicePnPEventNotifyMiniport(UnprocessedMiniport, 5, a3, 4u);
          }
          ndisUnprocessAllMiniports(v7);
          v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v7->NextDriver;
          v8 = v10;
          ndisDereferenceDriver((__int64)v7, 1, 5u);
        }
        else
        {
          NextDriver = v7->NextDriver;
        }
        v7 = NextDriver;
      }
      while ( NextDriver );
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      13,
      57,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
  }
}
