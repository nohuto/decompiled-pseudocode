/*
 * XREFs of CmpSaveBootControlSet @ 0x140823590
 * Callers:
 *     CmpAcceptBoot @ 0x140746430 (CmpAcceptBoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     RtlUnicodeStringPrintf @ 0x140144A8C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1401C2B70 (ZwQuerySecurityObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmpRebuildKcbCache @ 0x1406315E0 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupRollbackPacket @ 0x1406627FC (CmpCleanupRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x14069BC54 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14069BCB0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407451A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074779C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140747CBC (CmpInvalidateSubtree.c)
 *     CmpRetryBackOff @ 0x140831F98 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140833260 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140833600 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140835FBC (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  char v2; // di
  char v3; // r13
  _QWORD *v4; // rsi
  ULONG_PTR *v5; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // r15
  int v7; // ebx
  struct _LOOKASIDE_LIST_EX *v8; // r9
  char v9; // r12
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // bl
  char v21; // [rsp+48h] [rbp-C0h]
  ULONG v22; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  ULONG Disposition[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v31[2]; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v34[48]; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+8h] BYREF
  ULONG *v36; // [rsp+130h] [rbp+28h]
  __int64 v37; // [rsp+138h] [rbp+30h]
  char v38; // [rsp+148h] [rbp+40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v3 = 0;
  v27 = 0LL;
  v4 = 0LL;
  Length[1] = 0;
  memset(v34, 0, sizeof(v34));
  Handle = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  TransientPoolWithTag = 0LL;
  Length[0] = 0;
  v22 = 0;
  CmpInitializeDelayDerefContext(v31);
  v21 = CmpAcquireShutdownRundown();
  if ( !v21 )
  {
    v7 = -1073741431;
    goto LABEL_33;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                        PagedPool,
                                                        Length[0],
                                                        0x20204D43u,
                                                        v8);
      if ( TransientPoolWithTag )
      {
        if ( ZwQuerySecurityObject(KeyHandle, 4u, TransientPoolWithTag, Length[0], Length) < 0 )
        {
          CmSiFreeMemory(TransientPoolWithTag);
          TransientPoolWithTag = 0LL;
        }
      }
    }
    DestinationString.MaximumLength = 256;
    DestinationString.Buffer = (wchar_t *)&v38;
    RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
    v9 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
    if ( TransientPoolWithTag )
      CmSiFreeMemory(TransientPoolWithTag);
    if ( v7 >= 0 )
    {
      v7 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, &v27, 0LL);
      if ( v7 >= 0 )
      {
        v7 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, &v29, 0LL);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v4 = (_QWORD *)v27;
          v12 = CmpPerformKeyBodyDeletionCheck(v27, 0LL);
          v5 = (ULONG_PTR *)v29;
          v7 = v12;
          if ( v12 >= 0 )
          {
            v2 = 0;
            do
            {
              v7 = CmpPerformKeyBodyDeletionCheck((__int64)v5, 0LL);
              if ( v7 < 0 )
                break;
              v15 = v5[1];
              LOBYTE(v13) = 1;
              v16 = CmpTryAcquireKcbIXLocks(v15, v13, v14, (__int64)&v25);
              v7 = v16;
              if ( v16 == -1073741267 )
              {
                v9 = 1;
              }
              else if ( v16 < 0 )
              {
                break;
              }
              v17 = CmpPrepareToInvalidateAllHigherLayerKcbs(v15, 0LL, &v25);
              v7 = v17;
              if ( v17 == -1073741267 )
              {
                v9 = 1;
              }
              else if ( v17 < 0 )
              {
                break;
              }
              v18 = CmpPrepareForSubtreeInvalidation(v15, (__int64)&v25);
              v7 = v18;
              if ( v18 != -1073741267 )
              {
                if ( v18 < 0 )
                  break;
                if ( !v9 )
                {
                  CmpInvalidateAllHigherLayerKcbs(v15, 0LL, 8LL, v31);
                  CmpInvalidateSubtree(v15, 8, (__int64)v31, &Length[1]);
                  CmpAttachToRegistryProcess((__int64)v34);
                  v3 = 1;
                  v19 = CmpCopySyncTree(*(_QWORD *)(v4[1] + 32LL), 2, Disposition[0] != 1);
                  CmpRebuildKcbCache(v5[1], (__int64)v31);
                  v2 = 1;
                  if ( v19 )
                    v7 = 0;
                  else
                    v7 = -1073741492;
                  goto LABEL_33;
                }
              }
              CmpLogTransactionAbortedForRollbackPacket(v15, 0xCu);
              CmpUnlockRegistry();
              v9 = 0;
              v7 = CmpAbortRollbackPacket((__int64)&v25);
              if ( v7 < 0 )
                goto LABEL_33;
              CmpRetryBackOff(&v22);
              CmpCleanupRollbackPacket((__int64)&v25);
              v25 = 0LL;
              v26 = 0LL;
              CmpLockRegistryExclusive();
              v7 = CmpPerformKeyBodyDeletionCheck((__int64)v4, 0LL);
            }
            while ( v7 >= 0 );
          }
          v2 = 1;
          goto LABEL_33;
        }
        v5 = (ULONG_PTR *)v29;
      }
      v4 = (_QWORD *)v27;
    }
  }
LABEL_33:
  CmpDrainDelayDerefContext(v31);
  if ( v2 )
    CmpUnlockRegistry();
  if ( v3 )
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v34);
  CmpCleanupRollbackPacket((__int64)&v25);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    CmpReleaseShutdownRundown();
  if ( v7 < 0 )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      v22 = v7;
      v36 = &v22;
      v37 = 4LL;
      TlgWrite(&stru_140425BC0, &unk_14038B529, 0LL, 0LL, 3u, &pData);
    }
  }
  else if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
  {
    v22 = Length[1];
    v36 = &v22;
    v37 = 4LL;
    TlgWrite(&stru_140425BC0, &unk_14038B55E, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v7;
}
