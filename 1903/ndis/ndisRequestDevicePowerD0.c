/*
 * XREFs of ndisRequestDevicePowerD0 @ 0x1C0013A5C
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C0012A50 (ndisGenericWaitWakeCallback.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012F30 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisWakeUpDevice @ 0x1C00774C0 (ndisWakeUpDevice.c)
 *     ndisMediaDisconnectComplete @ 0x1C00A6980 (ndisMediaDisconnectComplete.c)
 *     ndisRequestPowerResume @ 0x1C00B8C10 (ndisRequestPowerResume.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB4D0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCBEC (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqx @ 0x1C00A6190 (McTemplateK0jqx.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00A6D84 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAF40 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(__int64 a1, unsigned __int16 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // al
  KIRQL v6; // si
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // edi
  struct _NDIS_MINIPORT_AOAC *v11; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = v5;
  v7 = *(_DWORD *)(a1 + 4416);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( (v7 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock(v2, v5);
    return 259LL;
  }
  else
  {
    *(_WORD *)(a1 + 4244) = a2;
    *(_DWORD *)(a1 + 4416) = v7 | 2;
    KeClearEvent((PRKEVENT)(a1 + 4216));
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock(v2, v6);
    ndisLogMiniportEvent(a1, a2);
    if ( (byte_1C00E8043 & 4) != 0 )
      McTemplateK0jqx(
        v8,
        (unsigned int)&DevicePowerOnRequested,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024));
    _InterlockedOr((volatile signed __int32 *)(a1 + 4424), 2u);
    if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 3832), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      if ( v10 != 259 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            155,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            v10,
            a1);
        }
        ndisScheduleD0CompleteSignalWorkItem(a1);
      }
    }
    v11 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4456);
    if ( v11 )
      ndisAoAcResumeRefTimeAccumulation(v11);
    return v10;
  }
}
