/*
 * XREFs of ndisRequestDevicePowerD0 @ 0x1C0011040
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010FA0 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisGenericWaitWakeCallback @ 0x1C00113B0 (ndisGenericWaitWakeCallback.c)
 *     ndisMediaDisconnectComplete @ 0x1C0069950 (ndisMediaDisconnectComplete.c)
 *     ndisRequestPowerResume @ 0x1C0075358 (ndisRequestPowerResume.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00777D0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0078D14 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWakeUpDevice @ 0x1C00E8E08 (ndisWakeUpDevice.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     McTemplateK0jqx @ 0x1C00694D8 (McTemplateK0jqx.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0069C5C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00772E4 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(__int64 a1, unsigned __int16 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  KIRQL v6; // bp
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // esi
  struct _NDIS_MINIPORT_AOAC *v11; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = v5;
  v7 = *(_DWORD *)(a1 + 4456);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 1709008;
  if ( (v7 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock(v2, v5);
    return 259LL;
  }
  else
  {
    *(_WORD *)(a1 + 4284) = a2;
    *(_DWORD *)(a1 + 4456) = v7 | 2;
    KeClearEvent((PRKEVENT)(a1 + 4256));
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock(v2, v6);
    ndisLogMiniportEvent(a1, a2);
    if ( (byte_1C00A2083 & 4) != 0 )
      McTemplateK0jqx(
        v8,
        (unsigned int)&DevicePowerOnRequested,
        a1 + 4040,
        a1 + 4040,
        *(_DWORD *)(a1 + 4088),
        *(_QWORD *)(a1 + 4056));
    _InterlockedOr((volatile signed __int32 *)(a1 + 4464), 2u);
    if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v9 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 3864), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      v10 = v9;
      if ( v9 != 259 )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 2u )
          WPP_SF_dq(147LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v9, a1);
        ndisScheduleD0CompleteSignalWorkItem(a1, v10);
      }
    }
    v11 = *(struct _NDIS_MINIPORT_AOAC **)(a1 + 4496);
    if ( v11 )
      ndisAoAcResumeRefTimeAccumulation(v11);
    return v10;
  }
}
