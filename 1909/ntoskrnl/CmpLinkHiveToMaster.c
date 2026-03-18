/*
 * XREFs of CmpLinkHiveToMaster @ 0x14068C808
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A0DC40 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A0DDBC (CmpInitializePreloadedHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCopy @ 0x1400CFDD0 (RtlUnicodeStringCopy.c)
 *     CmpRemoveHiveFromNamespace @ 0x140112918 (CmpRemoveHiveFromNamespace.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpInitializeKcbCache @ 0x14068CBC4 (CmpInitializeKcbCache.c)
 *     CmpRecordUnloadEventForHive @ 0x1406BAC5C (CmpRecordUnloadEventForHive.c)
 *     CmpEtwDumpKcb @ 0x140825BE8 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x140825E98 (CmpLogHiveLinkEvent.c)
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
  __int64 v11; // r12
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  volatile signed __int64 **v18; // rdi
  __int64 v19; // rcx
  UNICODE_STRING *v20; // rsi
  PVOID PoolWithTag; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  char v25; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v30[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  _DWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  _QWORD v41[38]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v42[48]; // [rsp+1F0h] [rbp+F0h] BYREF

  v11 = a1;
  v32 = a8;
  v31 = a9;
  v33 = a10;
  v34[1] = 0;
  v38 = 0;
  Handle = 0LL;
  v25 = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  memset(v42, 0, sizeof(v42));
  memset(v41, 0, 0x128uLL);
  v41[19] = &v41[18];
  v41[18] = &v41[18];
  memset(&v41[27], 0, 0x50uLL);
  CmpInitializeDelayDerefContext(v30);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v25 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4208) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  if ( v16 >= 0 )
  {
    v17 = 67;
    v41[6] = a3;
    if ( a6 )
      v17 = 2115;
    LODWORD(v41[0]) = v17;
    if ( a4 )
      LODWORD(v41[5]) = -1;
    else
      LODWORD(v41[5]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v41[10] = v31;
    v36 = a1;
    v39 = v32;
    v40 = 0LL;
    v34[0] = 48;
    v35 = a2;
    v37 = 576;
    v16 = ObOpenObjectByName((__int64)v34, (__int64)CmKeyObjectType, 0, 0LL, 0x2001Fu, (__int64)v41, &Handle);
    if ( v16 >= 0 )
    {
      v16 = 0;
      ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v18 = (volatile signed __int64 **)Object;
      ZwClose(Handle);
      CmpAttachToRegistryProcess((__int64)v42);
      if ( !a11 )
        CmpLockRegistry();
      v19 = (__int64)v18[1];
      SourceString = 0LL;
      CmpConstructNameWithStatus(v19, &SourceString);
      if ( !a11 )
        CmpUnlockRegistry();
      v20 = (UNICODE_STRING *)SourceString;
      if ( SourceString
        && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, SourceString->Length, 0x70684D43u),
            (*(_QWORD *)(a3 + 1856) = PoolWithTag) != 0LL) )
      {
        *(_WORD *)(a3 + 1848) = 0;
        *(_WORD *)(a3 + 1850) = v20->Length;
        RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1848), v20);
        *(_BYTE *)(a3 + 141) = 0;
        *(_DWORD *)(a3 + 1668) = _InterlockedIncrement(&CmHiveIdentity);
        if ( !a11 )
          CmpLockRegistry();
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
        if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
        {
          LOBYTE(v22) = 33;
          CmpEtwDumpKcb(v18[1], v22);
        }
        KiUnstackDetachProcess((struct _KTHREAD *)v42, 0);
        if ( !a11 )
          CmpUnlockRegistry();
        v23 = (_QWORD *)v33;
        if ( v33 )
        {
          CmpReferenceKeyControlBlockUnsafe(v18[1]);
          *v23 = v18[1];
        }
        ObfDereferenceObject(Object);
        if ( a6 )
          *(_BYTE *)(a3 + 2936) = 1;
        v18 = 0LL;
        v20 = (UNICODE_STRING *)SourceString;
      }
      else
      {
        if ( !a11 )
          CmpLockRegistry();
        CmpRemoveHiveFromNamespace(a3, (__int64)v18[1], (__int64)v30);
        CmpDrainDelayDerefContext(v30);
        if ( !a11 )
          CmpUnlockRegistry();
        KiUnstackDetachProcess((struct _KTHREAD *)v42, 0);
        v16 = -1073741670;
      }
      if ( v20 )
        CmpFreeTransientPoolWithTag(v20, 0x624E4D43u);
      if ( v18 )
        ObfDereferenceObject(v18);
    }
    v11 = a1;
  }
  if ( v25 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4208) = 0LL;
  }
  if ( v16 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v11);
  CmpCleanupParseContext((__int64)v41, a11);
  return (unsigned int)v16;
}
