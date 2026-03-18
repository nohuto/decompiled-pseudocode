/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C0141C00
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01428E0 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0273008 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C0273198 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiCorrectPowerAction @ 0x1C001E0C0 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01426D0 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C014314C (DpiRequestIoPowerState.c)
 *     MonitorAdapterPowerChange @ 0x1C014323C (MonitorAdapterPowerChange.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0144B80 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoDetectPostDevice @ 0x1C014551C (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0145794 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C02668C8 (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        int a4,
        unsigned int a5)
{
  char *DeviceExtension; // rdi
  POWER_STATE v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r12d
  int v13; // eax
  const GUID *v14; // r8
  bool v15; // zf
  DXGADAPTER *v16; // rcx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  GUID *PoolWithTag; // rax
  __int64 v22; // rax
  _BYTE v23[4]; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-7Dh]
  int v25; // [rsp+38h] [rbp-79h]
  PDEVICE_OBJECT v26; // [rsp+40h] [rbp-71h]
  int v27; // [rsp+48h] [rbp-69h] BYREF
  __int64 v28; // [rsp+50h] [rbp-61h]
  char v29; // [rsp+58h] [rbp-59h]
  GUID ActivityId[5]; // [rsp+60h] [rbp-51h] BYREF
  _DWORD v31[8]; // [rsp+B0h] [rbp-1h] BYREF

  v25 = a3;
  memset(ActivityId, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v24 = 0;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_QWORD *)&ActivityId[4].Data1 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 10;
  LOBYTE(ActivityId[3].Data1) = -1;
  v9.SystemState = *(_DWORD *)(DeviceExtension + 284);
  if ( State.SystemState > v9.SystemState )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3688), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3688));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        DpiRequestIoPowerState(DeviceObject, 1LL);
        v11 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)State.SystemState,
                a5);
      }
      else
      {
        v11 = v24;
      }
      if ( v25 == 5 && (PDEVICE_OBJECT)qword_1C008E9D8 == DeviceObject && dword_1C008EA88 == 3 )
      {
        byte_1C008EAA8 = 1;
        LOBYTE(v10) = 1;
        InbvNotifyDisplayOwnershipChange(v10, DpiEnterSystemDisplay);
      }
      return v11;
    }
    v15 = *((_DWORD *)DeviceExtension + 59) == 2;
    *((POWER_STATE *)DeviceExtension + 71) = State;
    if ( v15 )
      return (unsigned int)((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                             *((_QWORD *)DeviceExtension + 5),
                             *((_QWORD *)DeviceExtension + 6),
                             -1,
                             (POWER_STATE)State.SystemState,
                             a5);
    return v24;
  }
  if ( State.SystemState >= v9.SystemState )
    return v24;
  v13 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
  v15 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v25 = v13;
  if ( v15 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v26 = 0LL;
    if ( (PDEVICE_OBJECT)qword_1C008E9D8 == DeviceObject )
    {
      if ( dword_1C008EA88 == 3 && byte_1C008EAA8 )
      {
        DpiAcquirePostDisplayInfoFromBgfx(&dword_1C008E9E8);
        byte_1C008EAA8 = 0;
        dword_1C008EAD4 = 1;
        v26 = DeviceObject;
      }
      if ( a4 == 5 )
      {
        if ( !byte_1C008EAA1
          && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v23) >= 0
          && v23[0] != DeviceExtension[1144] )
        {
          DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
        }
        v16 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 474);
        if ( (!v16 || (int)DXGADAPTER::GetDriverVersion(v16) <= 1105) && byte_1C008E755 )
        {
          v27 = -1;
          v28 = 0LL;
          if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
          {
            v29 = 1;
            v27 = 8007;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q((__int64)v16, &EventProfilerEnter, v14, 8007);
          }
          else
          {
            v29 = 0;
          }
          DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 8007);
          memset(v31, 0, sizeof(v31));
          v31[0] = 18;
          x86BiosCall(16LL, v31);
          memset(&dword_1C008E9E8, 0, 0x20uLL);
          dword_1C008EA00 = -1;
          memset(&xmmword_1C008EA08, 0, 0x80uLL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
          if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v17, &EventProfilerExit, v18, v27);
        }
      }
    }
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      if ( *((_QWORD *)DeviceExtension + 3) == qword_1C008E9D8 )
      {
        qword_1C008EA90 = (__int64)KeGetCurrentThread();
        qword_1C008EA98 = (__int64)v26;
      }
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
        *((_QWORD *)DeviceExtension + 5),
        *((_QWORD *)DeviceExtension + 6),
        -1,
        (POWER_STATE)State.SystemState,
        v25);
      if ( (struct _KTHREAD *)qword_1C008EA90 == KeGetCurrentThread() )
      {
        qword_1C008EA98 = 0LL;
        qword_1C008EA90 = 0LL;
      }
      if ( (PDEVICE_OBJECT)qword_1C008E9D8 == DeviceObject && dword_1C008EA88 == 3 )
      {
        memset(&dword_1C008E9E8, 0, 0x20uLL);
        dword_1C008EA00 = -1;
        memset(&xmmword_1C008EA08, 0, 0x80uLL);
      }
      v11 = DpiRequestIoPowerState(DeviceObject, 2LL);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3688), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3688));
      KeLeaveCriticalRegion();
      if ( !DeviceExtension[481] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[482] )
      {
        DpiFdoInvalidateChildRelations(DeviceObject, 6LL, ActivityId);
        if ( *((_DWORD *)DeviceExtension + 71) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 474), 2);
          MonitorAdapterPowerChange(*((DXGADAPTER **)DeviceExtension + 474));
          DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 474));
        }
      }
      else if ( byte_1C008E759 )
      {
        DeviceExtension[3441] = 1;
      }
      else
      {
        WorkItem = IoAllocateWorkItem(DeviceObject);
        if ( WorkItem )
        {
          PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E6F6374u);
          if ( PoolWithTag )
          {
            *PoolWithTag = ActivityId[0];
            PoolWithTag[1] = ActivityId[1];
            PoolWithTag[2] = ActivityId[2];
            PoolWithTag[3] = ActivityId[3];
            *(_QWORD *)&PoolWithTag[4].Data1 = *(_QWORD *)&ActivityId[4].Data1;
          }
          IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, PoolWithTag);
        }
        else
        {
          v22 = WdLogNewEntry5_WdLowResource(v19);
          *(_QWORD *)(v22 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v22);
        }
      }
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3688), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3688));
      KeLeaveCriticalRegion();
      v11 = v24;
    }
  }
  else
  {
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      v11 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              -1,
              (POWER_STATE)State.SystemState,
              v13);
    else
      v11 = v24;
    *((POWER_STATE *)DeviceExtension + 71) = State;
  }
  PoSetPowerState(DeviceObject, DevicePowerState, State);
  return v11;
}
