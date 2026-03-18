/*
 * XREFs of IopUnloadDriver @ 0x140764248
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x1407306D8 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x14085CD90 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A0F594 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     DbgPrint @ 0x1401264E0 (DbgPrint.c)
 *     PnpDiagnosticTraceObject @ 0x14013DB6C (PnpDiagnosticTraceObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140153A98 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140153B74 (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopCleanupNotifications @ 0x14018D824 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x14018D8C8 (IopCheckUnloadDriver.c)
 *     ZwUnloadDriver @ 0x1401C38D0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ObMakeTemporaryObject @ 0x1406EA0A0 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x140708754 (IopOpenRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     PnpIsLegacyDriver @ 0x140734014 (PnpIsLegacyDriver.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x1407644D4 (EtwTiLogDriverObjectUnLoad.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  _QWORD *v7; // rbx
  void (__fastcall *v8)(PVOID); // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithQuota_2; // rdi
  unsigned int v15; // ebx
  void *v16; // rcx
  ULONG Object; // [rsp+20h] [rbp-108h]
  UNICODE_STRING DriverServiceName; // [rsp+40h] [rbp-E8h] BYREF
  PVOID v19; // [rsp+50h] [rbp-D8h]
  HANDLE Handle; // [rsp+58h] [rbp-D0h] BYREF
  HANDLE v21; // [rsp+60h] [rbp-C8h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-C0h] BYREF
  _OWORD v23[3]; // [rsp+78h] [rbp-B0h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem[3]; // [rsp+B0h] [rbp-78h] BYREF
  char v25; // [rsp+140h] [rbp+18h] BYREF
  PVOID v26; // [rsp+148h] [rbp+20h] BYREF

  *(_QWORD *)&DriverServiceName.Length = 0LL;
  DriverServiceName.Buffer = 0LL;
  v19 = 0LL;
  memset(v23, 0, sizeof(v23));
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, &a1->Length);
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    LOBYTE(Object) = 0;
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 0x20019u, Object);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        LODWORD(v23[0]) = 48;
        *((_QWORD *)&v23[0] + 1) = 0LL;
        DWORD2(v23[1]) = 576;
        *(_QWORD *)&v23[1] = &Destination;
        v23[2] = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName((__int64)v23, (__int64)IoDriverObjectType, 0, 0LL, 1u, 0LL, &v21);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v21, 0, IoDriverObjectType, 0, &v26, 0LL);
          ObCloseHandle(v21, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = v26;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)v26 + 3))->OptionalHeader.MinorImageVersion;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || PnpIsLegacyDriver((__int64)v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v25);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v25 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      v8 = (void (__fastcall *)(PVOID))v7[13];
                      v7 = v26;
                      v8(v26);
                      EtwTiLogDriverObjectUnLoad(v7 + 7);
                    }
                    else
                    {
                      memset(WorkItem, 0, 0x50uLL);
                      KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                      v7 = v26;
                      WorkItem[1].Parameter = v26;
                      WorkItem[0].WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem[0].Parameter = WorkItem;
                      WorkItem[0].List.Flink = 0LL;
                      ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                    }
                    IopCleanupNotifications(v7, v7);
                    ObMakeTemporaryObject(v7);
                    ObfDereferenceObject(v7);
                  }
                  ObfDereferenceObject(v7);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v16 = v7;
            }
            ObfDereferenceObject(v16);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_17:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      &a1->Length,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      MinorImageVersion);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)DriverNameFromKeyNode;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  v10 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v10 = (__int64)a1;
  v11 = *(_DWORD *)v10;
  *(_DWORD *)&DriverServiceName.Length = v11;
  v12 = *(_QWORD *)(v10 + 8);
  DriverServiceName.Buffer = (wchar_t *)v12;
  if ( !(_WORD)v11 )
    return 3221225485LL;
  if ( (v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = v12 + (unsigned __int16)v11;
  if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_2 = IopVerifierExAllocatePoolWithQuota_2(v12, DriverServiceName.Length);
  v19 = PoolWithQuota_2;
  memmove(PoolWithQuota_2, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)PoolWithQuota_2;
  v15 = ZwUnloadDriver(&DriverServiceName);
  ExFreePoolWithTag(PoolWithQuota_2, 0);
  return v15;
}
