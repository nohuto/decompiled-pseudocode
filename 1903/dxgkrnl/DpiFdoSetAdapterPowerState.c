/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C0153CC4
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C02AE3FC (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C02AE5A4 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiCorrectPowerAction @ 0x1C001DEB0 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C015461C (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C0154BE0 (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1C0158DC4 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0159058 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C02A2198 (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  char *DeviceExtension; // rdi
  unsigned int v6; // esi
  POWER_STATE v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  const GUID *v12; // r8
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v29; // [rsp+30h] [rbp-31h]
  char v30[4]; // [rsp+34h] [rbp-2Dh] BYREF
  int v31; // [rsp+38h] [rbp-29h]
  unsigned int v32; // [rsp+3Ch] [rbp-25h]
  PDEVICE_OBJECT v33; // [rsp+40h] [rbp-21h]
  int v34; // [rsp+48h] [rbp-19h] BYREF
  __int64 v35; // [rsp+50h] [rbp-11h]
  char v36; // [rsp+58h] [rbp-9h]
  _DWORD v37[8]; // [rsp+60h] [rbp-1h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v6 = 0;
  v32 = a4;
  v31 = a3;
  v29 = 0;
  v9.SystemState = *(_DWORD *)(DeviceExtension + 284);
  if ( State.SystemState > v9.SystemState )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        v19 = DeviceExtension[4160];
        if ( a5 == 2 )
        {
          v6 = v19 != 0 ? 128 : 8;
        }
        else if ( a5 == 3 )
        {
          v6 = v19 != 0 ? 128 : 16;
        }
        else if ( a5 - 4 <= 2 )
        {
          v6 = 32;
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, v18, v6);
        v29 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)State.SystemState,
                a5);
      }
      if ( v31 == 5 && (PDEVICE_OBJECT)qword_1C00A29D8 == DeviceObject && dword_1C00A2A88 == 3 )
      {
        byte_1C00A2AA8 = 1;
        LOBYTE(v17) = 1;
        InbvNotifyDisplayOwnershipChange(v17, DpiEnterSystemDisplay);
      }
      return v29;
    }
    v13 = *((_DWORD *)DeviceExtension + 59) == 2;
    *((POWER_STATE *)DeviceExtension + 71) = State;
    if ( v13 )
      return ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
  }
  else if ( State.SystemState < v9.SystemState )
  {
    v10 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
    v13 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
    v31 = v10;
    if ( v13 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v33 = 0LL;
      if ( (PDEVICE_OBJECT)qword_1C00A29D8 == DeviceObject )
      {
        if ( dword_1C00A2A88 == 3 && byte_1C00A2AA8 )
        {
          DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00A29E8);
          byte_1C00A2AA8 = 0;
          dword_1C00A2AD4 = 1;
          v33 = DeviceObject;
        }
        if ( v32 == 5 )
        {
          if ( !byte_1C00A2AA1
            && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v30) >= 0
            && v30[0] != DeviceExtension[1152] )
          {
            DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
          }
          v14 = *((_QWORD *)DeviceExtension + 487);
          if ( (!v14 || *(int *)(v14 + 2452) <= 1105) && byte_1C00A2755 )
          {
            v34 = -1;
            v35 = 0LL;
            if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
            {
              v36 = 1;
              v34 = 8007;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v11, &EventProfilerEnter, v12, 8007);
            }
            else
            {
              v36 = 0;
            }
            DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 8007LL);
            memset(v37, 0, sizeof(v37));
            v37[0] = 18;
            x86BiosCall(16LL, v37);
            memset(&dword_1C00A29E8, 0, 0x20uLL);
            dword_1C00A2A00 = -1;
            memset(&xmmword_1C00A2A08, 0, 0x80uLL);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v20);
            if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v21, &EventProfilerExit, v22, v34);
          }
        }
      }
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( *((_QWORD *)DeviceExtension + 3) == qword_1C00A29D8 )
        {
          qword_1C00A2A90 = (__int64)KeGetCurrentThread();
          qword_1C00A2A98 = (__int64)v33;
        }
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
          *((_QWORD *)DeviceExtension + 5),
          *((_QWORD *)DeviceExtension + 6),
          -1,
          (POWER_STATE)State.SystemState,
          v31);
        if ( (struct _KTHREAD *)qword_1C00A2A90 == KeGetCurrentThread() )
        {
          qword_1C00A2A98 = 0LL;
          qword_1C00A2A90 = 0LL;
        }
        if ( (PDEVICE_OBJECT)qword_1C00A29D8 == DeviceObject && dword_1C00A2A88 == 3 )
        {
          memset(&dword_1C00A29E8, 0, 0x20uLL);
          dword_1C00A2A00 = -1;
          memset(&xmmword_1C00A2A08, 0, 0x80uLL);
        }
        v29 = DpiRequestIoPowerState(DeviceObject, 2LL, v15, 0LL);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = State;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
        KeLeaveCriticalRegion();
        if ( !DeviceExtension[482] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[483] )
        {
          DeviceExtension[3513] = 1;
          _InterlockedAnd((volatile signed __int32 *)DeviceExtension + 911, 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)DeviceExtension + 19), BusRelations);
        }
        else if ( byte_1C00A2759 )
        {
          DeviceExtension[3513] = 1;
        }
        else
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( WorkItem )
          {
            IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
          }
          else
          {
            v28 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
            *(_QWORD *)(v28 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v28);
          }
        }
      }
      else
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = State;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        v29 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)State.SystemState,
                v10);
      *((POWER_STATE *)DeviceExtension + 71) = State;
    }
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    return v29;
  }
  return 0LL;
}
