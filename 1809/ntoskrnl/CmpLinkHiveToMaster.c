/*
 * XREFs of CmpLinkHiveToMaster @ 0x1405B9C48
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x1409C4B30 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x1405BA308 (CmpInitializeKcbCache.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpRecordUnloadEventForHive @ 0x1406940AC (CmpRecordUnloadEventForHive.c)
 *     CmpEtwDumpKcb @ 0x1407ECB80 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x1407ECE20 (CmpLogHiveLinkEvent.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v13; // r12
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  UNICODE_STRING *v22; // rsi
  PVOID PoolWithTag; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rsi
  __int64 v29; // rcx
  char v30; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _QWORD v44[38]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v45[48]; // [rsp+1E0h] [rbp+E0h] BYREF

  v36 = a8;
  v13 = a1;
  v35 = a9;
  v37 = a10;
  Handle = 0LL;
  v30 = 0;
  memset(v45, 0, sizeof(v45));
  memset(v44, 0, 0x128uLL);
  v44[19] = &v44[18];
  v44[18] = &v44[18];
  memset(&v44[27], 0, 0x50uLL);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v30 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4208) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  if ( v16 >= 0 )
  {
    v17 = 67;
    v44[6] = a3;
    if ( a6 )
      v17 = 2115;
    LODWORD(v44[0]) = v17;
    if ( a4 )
      LODWORD(v44[5]) = -1;
    else
      LODWORD(v44[5]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v44[10] = v35;
    v40 = a1;
    v42 = v36;
    v43 = 0LL;
    v38 = 48;
    v39 = a2;
    v41 = 576;
    v16 = ObOpenObjectByName((unsigned int)&v38, (_DWORD)CmKeyObjectType, 0, 0, 131103, (__int64)v44, (__int64)&Handle);
    if ( v16 >= 0 )
    {
      v16 = 0;
      ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v18 = (__int64 *)Object;
      ZwClose(Handle);
      CmpAttachToRegistryProcess(v45);
      if ( !a11 )
        CmpLockRegistry(v19);
      v20 = v18[1];
      SourceString = 0LL;
      CmpConstructNameWithStatus(v20, &SourceString);
      if ( !a11 )
        CmpUnlockRegistry(v21);
      v22 = (UNICODE_STRING *)SourceString;
      if ( SourceString
        && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, SourceString->Length, 0x70684D43u),
            (*(_QWORD *)(a3 + 1856) = PoolWithTag) != 0LL) )
      {
        *(_WORD *)(a3 + 1848) = 0;
        *(_WORD *)(a3 + 1850) = v22->Length;
        RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1848), v22);
        *(_BYTE *)(a3 + 141) = 0;
        *(_DWORD *)(a3 + 1668) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a11 )
          CmpLockRegistry(v25);
        if ( a6 )
        {
          CmpReferenceKeyControlBlockUnsafe(v18[1]);
          *(_QWORD *)(a3 + 2928) = v18[1];
          if ( Event )
          {
            KeResetEvent(Event);
            CmpRecordUnloadEventForHive(a3, Event);
          }
        }
        if ( CmpTraceRoutine )
        {
          LOBYTE(v24) = 33;
          CmpEtwDumpKcb(v18[1], v24);
        }
        KiUnstackDetachProcess((__int64)v45, 0LL);
        if ( !a11 )
          CmpUnlockRegistry(v26);
        v27 = (_QWORD *)v37;
        if ( v37 )
        {
          CmpReferenceKeyControlBlockUnsafe(v18[1]);
          *v27 = v18[1];
        }
        ObfDereferenceObject(Object);
        if ( a6 )
          *(_BYTE *)(a3 + 2936) = 1;
        v18 = 0LL;
        v22 = (UNICODE_STRING *)SourceString;
      }
      else
      {
        if ( !a11 )
          CmpLockRegistry(v21);
        CmpRemoveHiveFromNamespace(a3, v18[1]);
        if ( !a11 )
          CmpUnlockRegistry(v29);
        KiUnstackDetachProcess((__int64)v45, 0LL);
        v16 = -1073741670;
      }
      if ( v22 )
        CmpFreeTransientPoolWithTag(v22, 0x624E4D43u);
      if ( v18 )
        ObfDereferenceObject(v18);
    }
    v13 = a1;
  }
  if ( v30 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4208) = 0LL;
  }
  if ( v16 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  CmpCleanupParseContext((__int64)v44, a11);
  return (unsigned int)v16;
}
