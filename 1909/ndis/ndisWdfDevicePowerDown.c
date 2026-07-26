/*
 * XREFs of ndisWdfDevicePowerDown @ 0x1C00A5954
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A7114 (ndisWdfNotifyDevicePower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C00A6138 (ndisWdfMiniportUpdatePowerState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 */

_UNKNOWN **__fastcall ndisWdfDevicePowerDown(__int64 a1, int a2)
{
  unsigned int v2; // edi
  char v4; // si
  __int64 v5; // rcx
  KIRQL v6; // al
  KIRQL v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _UNKNOWN **result; // rax
  char v14; // [rsp+30h] [rbp-59h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v17; // [rsp+B4h] [rbp+2Bh]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      89,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1,
      v14);
  }
  ndisWdfMiniportUpdatePowerState(a1, v2);
  if ( (byte_1C00E8081 & 8) != 0 )
    McTemplateK0jqxqd(
      v5,
      &DevicePowerStateChange,
      (const GUID *)(a1 + 4008),
      a1 + 4008,
      *(_DWORD *)(a1 + 4056),
      *(_QWORD *)(a1 + 4024),
      1,
      v2);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v7 = v6;
  v8 = *(_DWORD *)(a1 + 4068) & 0xFEFFFFFF;
  *(_DWORD *)(a1 + 4064) = 5;
  *(_DWORD *)(a1 + 4068) = v8 | 8;
  if ( ndisMReferenceIfBlock(a1, 0xEu) )
  {
    v9 = *(_QWORD *)(a1 + 4040);
    if ( *(_DWORD *)(v9 + 1112) != 5 )
    {
      *(_DWORD *)(v9 + 1112) = 5;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 4040) + 1116LL) = *(_DWORD *)(a1 + 4068);
    }
    ndisMDereferenceIfBlock(a1, MPIFREF_POWERDOWN);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v4 )
  {
    ndisNsiSyncMiniportOperStatusNotification(a1);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    v17 = 0LL;
    v12 = *(_QWORD *)(a1 + 4040);
    v16 = 786816;
    v17 = *(_QWORD *)(v12 + 1112);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = &v16;
    StatusIndication.SourceHandle = (void *)a1;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx((NDIS_HANDLE)a1, &StatusIndication);
  }
  *(_DWORD *)(a1 + 4464) = 65534;
  if ( (byte_1C00E8083 & 4) != 0 )
    McTemplateK0jqxq(
      v11,
      &DevicePowerDownComplete,
      (const GUID *)(a1 + 4008),
      a1 + 4008,
      *(_DWORD *)(a1 + 4056),
      *(_QWORD *)(a1 + 4024),
      0);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v10,
                          14,
                          90,
                          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
                          a1);
  }
  return result;
}
