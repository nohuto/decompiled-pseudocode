/*
 * XREFs of AMLIInitialize @ 0x1C00B8B2C
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00B8A7C (ACPIInitializeAMLI.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     InitMutex @ 0x1C000FFF8 (InitMutex.c)
 *     SetLogSize @ 0x1C00100B0 (SetLogSize.c)
 *     NewObjOwner @ 0x1C0023018 (NewObjOwner.c)
 *     InitializeNativeNamespace @ 0x1C00234D0 (InitializeNativeNamespace.c)
 *     NewGlobalHeap @ 0x1C0023C48 (NewGlobalHeap.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     NewNameSpaceObject @ 0x1C002B378 (NewNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     InsertOwnerObjList @ 0x1C002C398 (InsertOwnerObjList.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C0062D20 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C0062EC8 (FreeOwnedObjects.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     CatError @ 0x1C00637B0 (CatError.c)
 *     OSCloseHandle @ 0x1C0093C68 (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00AE994 (OSOpenAMLINamespaceOverrideHandle.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00B99F0 (InitIllegalIOAddressListFromHAL.c)
 *     AMLIGetEmOverride @ 0x1C00B9AF8 (AMLIGetEmOverride.c)
 */

__int64 __fastcall AMLIInitialize(int a1, int a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  int v9; // eax
  unsigned int NameSpaceObject; // ebx
  unsigned int v11; // edi
  unsigned __int8 **v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rbx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v22; // ecx
  _QWORD *v23; // rax
  int NamespaceOverride; // ebx
  void *v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  int v27; // [rsp+A0h] [rbp+50h]
  unsigned int v28; // [rsp+A8h] [rbp+58h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a1;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  dword_1C0080868 = 0;
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
      NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v11 = 0;
        v12 = (unsigned __int8 **)&apszDefinedRootObjs;
        while ( 1 )
        {
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              *v12,
                              0LL,
                              0LL,
                              &AmliGlobalPreDefinedRootObjects[v11],
                              0);
          if ( NameSpaceObject )
            break;
          ++v11;
          ++v12;
          if ( v11 >= 5 )
          {
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_REV", 0LL, 0LL, &a5, 0);
            if ( !NameSpaceObject )
            {
              v13 = a5;
              *(_WORD *)(a5 + 66) = 1;
              *(_QWORD *)(v13 + 80) = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
              NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OS", 0LL, 0LL, &a5, 0);
              if ( !NameSpaceObject )
              {
                v14 = a5;
                *(_WORD *)(a5 + 66) = 2;
                *(_DWORD *)(v14 + 88) = 21;
                v15 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0x15u);
                *(_QWORD *)(v14 + 96) = v15;
                if ( !v15 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v22 = 68;
                  goto LABEL_44;
                }
                memmove(v15, "Microsoft Windows NT", *(unsigned int *)(v14 + 88));
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OSI", 0LL, 0LL, &a5, 0);
                if ( NameSpaceObject )
                  break;
                v16 = a5;
                *(_WORD *)(a5 + 66) = 8;
                *(_DWORD *)(v16 + 88) = 202;
                v17 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0xCAu);
                *(_QWORD *)(v16 + 96) = v17;
                if ( !v17 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v22 = 69;
                  goto LABEL_44;
                }
                memset(v17, 0, *(unsigned int *)(v16 + 88));
                *(_BYTE *)(*(_QWORD *)(v16 + 96) + 193LL) |= 1u;
                v18 = *(_QWORD *)(v16 + 96);
                *(_WORD *)(v18 + 194) = OSIAML;
                *(_BYTE *)(v18 + 196) = 104;
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_GL", 0LL, 0LL, &a5, 0);
                if ( !NameSpaceObject )
                {
                  v19 = a5;
                  *(_WORD *)(a5 + 64) = 2;
                  NameSpaceObject = InitMutex(0LL, (struct _SLIST_ENTRY *)gpheapGlobal, v19, 0, 1);
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
                      byte_1C0080710 = 0;
                      qword_1C0080728 = (__int64)DispatchCtxtQueue;
                      qword_1C0080718 = 0LL;
                      qword_1C0080730 = (__int64)&gReadyQueue;
                      qword_1C0080748 = (__int64)&qword_1C0080740;
                      qword_1C0080740 = (__int64)&qword_1C0080740;
                      qword_1C0080700 = (__int64)&qword_1C00806F8;
                      qword_1C00806F8 = (__int64)&qword_1C00806F8;
                      KeInitializeSpinLock(&gmutCtxtList);
                      byte_1C0080B10 = 0;
                      KeInitializeSpinLock(&gmutOwnerList);
                      byte_1C0080B38 = 0;
                      KeInitializeSpinLock(&gmutHeap);
                      NewIrql = 0;
                      KeInitializeSpinLock(&gmutSleep);
                      byte_1C0081128 = 0;
                      v27 = 9;
                      ExAllocateTimerInternal2((PEX_RUNDOWN_REF)SleepQueueDpc);
                      SleepTimer = v20;
                      qword_1C0081118 = (__int64)&SleepQueue;
                      SleepQueue = (__int64)&SleepQueue;
                      qword_1C007F808 = (__int64)&RunningContextListHead;
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
                      _InterlockedExchange(&dword_1C007F940, 0);
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
