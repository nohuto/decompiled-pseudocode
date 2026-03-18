/*
 * XREFs of AMLIInitialize @ 0x1C00BC5B4
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00BC504 (ACPIInitializeAMLI.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     InitializeNativeNamespace @ 0x1C00067B8 (InitializeNativeNamespace.c)
 *     InsertOwnerObjList @ 0x1C0006C70 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C0006CA4 (NewNameSpaceObject.c)
 *     NewObjOwner @ 0x1C0006ED8 (NewObjOwner.c)
 *     InitMutex @ 0x1C0007168 (InitMutex.c)
 *     SetLogSize @ 0x1C0007220 (SetLogSize.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     NewGlobalHeap @ 0x1C001E95C (NewGlobalHeap.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064384 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C0064CAC (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C0064E78 (FreeOwnedObjects.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     CatError @ 0x1C00657F8 (CatError.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 *     OSCloseHandle @ 0x1C009C96C (OSCloseHandle.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B21EC (OSOpenAMLINamespaceOverrideHandle.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BD00C (InitIllegalIOAddressListFromHAL.c)
 *     AMLIGetEmOverride @ 0x1C00BD114 (AMLIGetEmOverride.c)
 */

__int64 __fastcall AMLIInitialize(int a1, int a2, __int64 a3, unsigned int a4, struct _EX_RUNDOWN_REF *a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  int v9; // eax
  unsigned int NameSpaceObject; // ebx
  unsigned int v11; // edi
  unsigned __int8 **v12; // rsi
  struct _EX_RUNDOWN_REF *v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // rbx
  void *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rbx
  void *v17; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF *v19; // r8
  __int64 v20; // rax
  int v22; // ecx
  _QWORD *v23; // rax
  int NamespaceOverride; // ebx
  void *v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  int v27; // [rsp+A0h] [rbp+50h]
  unsigned int v28; // [rsp+A8h] [rbp+58h] BYREF

  v28 = a4;
  v26 = a1;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  v27 = 0;
  dword_1C0082858 = 0;
  pszDest[0] = 0;
  gAmliMethodCounter = 0LL;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
    AcpiDiagTraceAmlError(0LL, -1072431085);
    v22 = 66;
LABEL_44:
    PrintDebugMessage(v22, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    MemoryInfo = v5;
    LODWORD(gdwCtxtBlkSize) = 2048;
    LODWORD(gdwGlobalHeapBlkSize) = a2;
    gdwfAMLIInit = v8;
    if ( (v8 & 8) != 0 )
      gdwfAMLI |= 4u;
    if ( v6 > 0x400 )
      v6 = 1024;
    v9 = 16;
    if ( v6 > 0x10 )
      v9 = v6;
    gdwcCTObjsMax = v9;
    _InterlockedOr(&gDebugger, 0x8000u);
    SetLogSize();
    KeInitializeSpinLock(&gdwGHeapSpinLock);
    KeInitializeSpinLock(&gdwGContextSpinLock);
    if ( (gdwfAMLIInit & 8) != 0
      || (gdwfAMLIInit & 0x10) == 0
      && (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_MULTITHREADED_EXECUTION, &v26) >= 0
      && v26 == 2 )
    {
      gdwfAMLI |= 4u;
    }
    ExInitializeNPagedLookasideList(
      (PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList,
      0LL,
      0LL,
      0x200u,
      (unsigned int)gdwCtxtBlkSize,
      0x436C6D41u,
      gdwcCTObjsMax);
    NameSpaceObject = NewGlobalHeap(&gpheapGlobal);
    if ( !NameSpaceObject )
    {
      *(_QWORD *)(gpheapGlobal + 16) = gpheapGlobal;
      NameSpaceObject = CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v11 = 0;
        v12 = (unsigned __int8 **)&apszDefinedRootObjs;
        while ( 1 )
        {
          NameSpaceObject = CreateNameSpaceObject(
                              (struct _SLIST_ENTRY *)gpheapGlobal,
                              *v12,
                              0LL,
                              0LL,
                              (struct _EX_RUNDOWN_REF **)&AmliGlobalPreDefinedRootObjects + v11,
                              0);
          if ( NameSpaceObject )
            break;
          ++v11;
          ++v12;
          if ( v11 >= 5 )
          {
            NameSpaceObject = CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "_REV", 0LL, 0LL, &a5, 0);
            if ( !NameSpaceObject )
            {
              v13 = a5;
              WORD1(a5[8].Ptr) = 1;
              v13[10].Count = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
              NameSpaceObject = CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "_OS", 0LL, 0LL, &a5, 0);
              if ( !NameSpaceObject )
              {
                v14 = a5;
                WORD1(a5[8].Ptr) = 2;
                LODWORD(v14[11].Count) = 21;
                v15 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0x15u);
                v14[12].Count = (unsigned __int64)v15;
                if ( !v15 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v22 = 68;
                  goto LABEL_44;
                }
                memmove(v15, "Microsoft Windows NT", LODWORD(v14[11].Count));
                NameSpaceObject = CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "_OSI", 0LL, 0LL, &a5, 0);
                if ( NameSpaceObject )
                  break;
                v16 = a5;
                WORD1(a5[8].Ptr) = 8;
                LODWORD(v16[11].Count) = 202;
                v17 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0xCAu);
                v16[12].Count = (unsigned __int64)v17;
                if ( !v17 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v22 = 69;
                  goto LABEL_44;
                }
                memset(v17, 0, LODWORD(v16[11].Count));
                *(_BYTE *)(v16[12].Count + 193) |= 1u;
                Count = v16[12].Count;
                *(_WORD *)(Count + 194) = OSIAML;
                *(_BYTE *)(Count + 196) = 104;
                NameSpaceObject = CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "_GL", 0LL, 0LL, &a5, 0);
                if ( !NameSpaceObject )
                {
                  v19 = a5;
                  LOWORD(a5[8].Count) = 2;
                  NameSpaceObject = InitMutex(0LL, (struct _SLIST_ENTRY *)gpheapGlobal, (__int64)v19, 0, 1);
                  if ( !NameSpaceObject )
                  {
                    NameSpaceObject = InitializeNativeNamespace();
                    if ( !NameSpaceObject )
                    {
                      if ( (gOverrideFlags & 0x20) != 0
                        && (int)OSOpenAMLINamespaceOverrideHandle((__int64)&v25) >= 0
                        && !gpnsNameSpaceOverrideRoot
                        && (int)NewObjOwner(
                                  (struct _SLIST_ENTRY *)gpheapGlobal,
                                  (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner) >= 0 )
                      {
                        v23 = NewNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal);
                        gpnsNameSpaceOverrideRoot = (__int64)v23;
                        if ( v23 )
                        {
                          *((_DWORD *)v23 + 10) = 1600085852;
                          InsertOwnerObjList(
                            (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner,
                            (struct _EX_RUNDOWN_REF *)v23);
                          NamespaceOverride = AMLIAddNextNamespaceOverride(v25, gpnsNameSpaceOverrideRoot);
                          OSCloseHandle(v25);
                          DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
                          if ( NamespaceOverride < 0 )
                          {
                            *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
                            FreeOwnedObjects((_QWORD *)gpNameSpaceOverrideOwner);
                            FreeObjOwner(0LL, (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner);
                            gpNameSpaceOverrideOwner = 0LL;
                            gpnsNameSpaceOverrideRoot = 0LL;
                          }
                        }
                        else
                        {
                          LogError(-1073741670);
                          CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
                        }
                      }
                      KeInitializeSpinLock(&SpinLock);
                      byte_1C0082700 = 0;
                      qword_1C0082718 = (__int64)DispatchCtxtQueue;
                      qword_1C0082708 = 0LL;
                      qword_1C0082720 = (__int64)&gReadyQueue;
                      qword_1C0082738 = (__int64)&qword_1C0082730;
                      qword_1C0082730 = (__int64)&qword_1C0082730;
                      qword_1C00826F0 = (__int64)&qword_1C00826E8;
                      qword_1C00826E8 = (__int64)&qword_1C00826E8;
                      KeInitializeSpinLock(&gmutCtxtList);
                      byte_1C0082B10 = 0;
                      KeInitializeSpinLock(&gmutOwnerList);
                      NewIrql = 0;
                      KeInitializeSpinLock(&gmutHeap);
                      byte_1C0082B28 = 0;
                      KeInitializeSpinLock(&gmutSleep);
                      byte_1C0083128 = 0;
                      v27 = 9;
                      ExAllocateTimerInternal2((PEX_RUNDOWN_REF)SleepQueueDpc);
                      SleepTimer = v20;
                      qword_1C0083118 = (__int64)&SleepQueue;
                      SleepQueue = (__int64)&SleepQueue;
                      qword_1C0081808 = (__int64)&RunningContextListHead;
                      RunningContextListHead = (__int64)&RunningContextListHead;
                      InitIllegalIOAddressListFromHAL();
                      v28 = 4;
                      AmliWatchdogEnabled = 1;
                      if ( (unsigned int)OSReadRegValue("AmliWatchdogTimeout", 0LL, &AmliWatchdogTimeout, &v28)
                        || v28 != 4 )
                      {
                        AmliWatchdogTimeout = 30;
                      }
                      if ( AmliWatchdogTimeout )
                      {
                        if ( (unsigned int)AmliWatchdogTimeout < 0xF )
                          AmliWatchdogTimeout = 15;
                      }
                      else
                      {
                        AmliWatchdogEnabled = 0;
                      }
                      if ( (unsigned int)OSReadRegValue("AmliWatchdogAction", 0LL, &AmliWatchdogAction, &v28)
                        || v28 != 4 )
                      {
                        AmliWatchdogAction = 0;
                      }
                      _InterlockedExchange(&dword_1C0081940, 0);
                      AcpiRecordBlackboxWorkItem.WorkerRoutine = (void (__fastcall *)(void *))AcpiRecordBlackboxInformationWorker;
                      NameSpaceObject = 0;
                      AcpiRecordBlackboxWorkItem.Parameter = 0LL;
                      AcpiRecordBlackboxWorkItem.List.Flink = 0LL;
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
    if ( NameSpaceObject == 32772 )
      NameSpaceObject = 259;
  }
  if ( (gdwfAMLIInit & 1) != 0 )
  {
    PrintDebugMessage(67, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return NameSpaceObject;
}
