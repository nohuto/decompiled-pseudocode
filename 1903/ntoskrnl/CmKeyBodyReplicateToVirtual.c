/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x14082BF48
 * Callers:
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x1400FB430 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KCBVirtualFlagSet @ 0x14027FF58 (KCBVirtualFlagSet.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1405B1E60 (SeCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCheckAdminAccess @ 0x1406F5820 (CmpCheckAdminAccess.c)
 *     CmpSearchKeyControlBlockTree @ 0x14082B5A0 (CmpSearchKeyControlBlockTree.c)
 *     CmpReparseToVirtualPath @ 0x14082D01C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x14082D0C4 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14082DEC8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E2B4 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  _QWORD *v8; // r14
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  int v15; // edx
  BOOLEAN v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+41h] [rbp-BFh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v21[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp-88h]
  _QWORD v24[38]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v26[5]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v27[28]; // [rsp+280h] [rbp+180h] BYREF

  v18 = a2;
  v23 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v24, 0, 0x128uLL);
  memset(v25, 0, sizeof(v25));
  v21[0] = 0LL;
  v21[1] = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(v27, 0, sizeof(v27));
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v24, 0, 0x128uLL);
  v24[19] = &v24[18];
  v24[18] = &v24[18];
  memset(&v24[27], 0, 0x50uLL);
  v20 = 0LL;
  CmpInitializeDelayDerefContext(v21);
  CmpAttachToRegistryProcess((__int64)v25);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v9 = v8[1];
    CmpLockKcbExclusive(v9);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_27:
      AccessStateFromSubjectContext = -1073741790;
      goto LABEL_28;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck((__int64)v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( (unsigned __int8)CmpReparseToVirtualPath(v9, v10, a4, &DestinationString) )
    {
      CmpUnlockKcb(v9);
      goto LABEL_21;
    }
    if ( !KCBVirtualFlagSet(v9) )
      goto LABEL_27;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v9 + 88) + 32LL),
                                      a4,
                                      &v17);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( !v17 )
      goto LABEL_27;
    LOBYTE(v12) = v7;
    v13 = CmpReplicateKeyToVirtual(v9, a4, v12, &v22);
    AccessStateFromSubjectContext = v13;
    if ( v13 != -1073741739 )
      break;
    CmpUnlockKcb(v9);
    CmpUnlockRegistry();
    v7 = 1;
  }
  if ( v13 < 0 )
    goto LABEL_28;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v9 + 88) + 32LL, a4, &v17);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_28;
  if ( v17 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v9, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v9, v14, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
LABEL_28:
    CmpUnlockKcb(v9);
    CmpUnlockRegistry();
    goto LABEL_29;
  }
  CmpUnlockKcb(v9);
  CmpSearchKeyControlBlockTree((__int64)CmpSyncKcbCacheForHive);
LABEL_21:
  CmpDrainDelayDerefContext(v21);
  CmpUnlockRegistry();
  LODWORD(v24[0]) = 8;
  v24[9] = v8[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    v26,
                                    v27,
                                    a3,
                                    (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v15 = 1600;
    if ( v18 != 1 )
      v15 = 576;
    AccessStateFromSubjectContext = ObReferenceObjectByName(
                                      (__int64)&DestinationString,
                                      v15,
                                      (__int64 *)v26,
                                      a3,
                                      (__int64)CmKeyObjectType,
                                      0,
                                      (__int64)v24,
                                      &v20);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v23 = v20;
      ObfDereferenceObject(v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v26);
  }
LABEL_29:
  CmpCleanupParseContext((__int64)v24, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v25);
  return (unsigned int)AccessStateFromSubjectContext;
}
