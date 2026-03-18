/*
 * XREFs of DpiPdoDispatchIoctl @ 0x1C0127810
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0127980 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C02A6C0C (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v5; // rsi
  struct _IRP *MasterIrp; // r12
  unsigned int LowPart; // ebp
  struct _DEVICE_OBJECT *v8; // rcx
  unsigned int Length; // r13d
  PVOID DeviceExtension; // rdi
  int MonitorInstance; // ebx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  struct _FAST_MUTEX *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int Options; // [rsp+80h] [rbp+8h]
  unsigned __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  struct DXGMONITOR *v28; // [rsp+90h] [rbp+18h] BYREF

  v27 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = *(struct _DEVICE_OBJECT **)(v5 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DeviceExtension = v8->DeviceExtension;
  if ( LowPart <= 0x230C18 )
  {
    if ( LowPart != 2296856
      && LowPart != 2296832
      && LowPart != 2296836
      && LowPart != 2296840
      && LowPart != 2296844
      && LowPart != 2296848
      && LowPart != 2296852 )
    {
      goto LABEL_27;
    }
    MonitorInstance = DpiBrightnessHandleIoctls(
                        v8,
                        *(_DWORD *)(v5 + 504),
                        LowPart,
                        CurrentStackLocation->Parameters.Create.Options,
                        MasterIrp,
                        Length,
                        MasterIrp,
                        &v27);
  }
  else
  {
    if ( LowPart != 2297856 && LowPart != 2297860 && LowPart != 2297864 && LowPart != 2298880 && LowPart != 2298884 )
    {
LABEL_27:
      MonitorInstance = -1073741637;
      goto LABEL_15;
    }
    MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( MonitorInstance >= 0 )
    {
      v12 = *((_QWORD *)DeviceExtension + 487);
      if ( v12 )
      {
        v13 = *(unsigned int *)(v5 + 504);
        if ( (_DWORD)v13 != -1 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 487)) )
          {
            v22 = WdLogNewEntry5_WdAssertion(v15, v14);
            WdLogEvent5_WdAssertion(v22);
          }
          v17 = *(_QWORD *)(v12 + 2552);
          if ( !v17 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v15, v14);
            WdLogEvent5_WdAssertion(v23);
            v17 = *(_QWORD *)(v12 + 2552);
          }
          v18 = *(struct _FAST_MUTEX **)(v17 + 96);
          if ( v18 )
          {
            v28 = 0LL;
            MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v18, (unsigned int)v13, 1, &v28);
            if ( MonitorInstance < 0 )
            {
              v25 = WdLogNewEntry5_WdDmmEvent(v20, v19);
              *(_QWORD *)(v25 + 24) = v13;
              *(_QWORD *)(v25 + 32) = v18;
              WdLogEvent5_WdDmmEvent(v25);
            }
            else
            {
              MonitorInstance = DXGMONITOR::_DispatchIoctrls(v28, LowPart, Options, MasterIrp, Length, MasterIrp, &v27);
            }
            goto LABEL_14;
          }
          v24 = WdLogNewEntry5_WdError(v15, v14, v16);
          *(_QWORD *)(v24 + 24) = v12;
          WdLogEvent5_WdError(v24);
        }
      }
      MonitorInstance = -1073741811;
LABEL_14:
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
  }
LABEL_15:
  a2->IoStatus.Information = v27;
  a2->IoStatus.Status = MonitorInstance;
  IofCompleteRequest(a2, 1);
  return (unsigned int)MonitorInstance;
}
