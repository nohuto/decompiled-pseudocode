/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1407F2E74
 * Callers:
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x1401295DC (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmObReferenceObjectByName @ 0x140582128 (CmObReferenceObjectByName.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140583A30 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCheckAdminAccess @ 0x1407F3984 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1407F48FC (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407F6328 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  _QWORD *v8; // r14
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  int AccessStateFromSubjectContext; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  char v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+41h] [rbp-BFh]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v21; // [rsp+60h] [rbp-A0h]
  _QWORD *v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  __int128 v27; // [rsp+90h] [rbp-70h]
  _QWORD v28[38]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[48]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v30[5]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v31[28]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v18 = a2;
  v22 = a1;
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v28, 0, 0x128uLL);
  v28[19] = &v28[18];
  v28[18] = &v28[18];
  memset(&v28[27], 0, 0x50uLL);
  v19 = 0LL;
  CmpAttachToRegistryProcess((__int64)v29);
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
    if ( (*(_DWORD *)(v9 + 176) & 0x20) != 0 )
      goto LABEL_27;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(a3, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v9 + 80) + 32LL));
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( !v17 )
      goto LABEL_27;
    v12 = CmpReplicateKeyToVirtual(v9);
    AccessStateFromSubjectContext = v12;
    if ( v12 != -1073741739 )
      break;
    CmpUnlockKcb(v9);
    CmpUnlockRegistry();
    v7 = 1;
  }
  if ( v12 < 0 )
    goto LABEL_28;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v9 + 80) + 32LL, a4, &v17);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_28;
  if ( v17 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v9, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v9, v13, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
LABEL_28:
    CmpUnlockKcb(v9);
    CmpUnlockRegistry();
    goto LABEL_29;
  }
  CmpUnlockKcb(v9);
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
    v21,
    0LL,
    1);
LABEL_21:
  CmpUnlockRegistry();
  LODWORD(v28[0]) = 8;
  v28[9] = v8[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    v30,
                                    v31,
                                    a3,
                                    (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v24 = 0LL;
    v15 = 1600;
    v23 = 48;
    if ( v18 != 1 )
      v15 = 576;
    v26 = v15;
    p_DestinationString = &DestinationString;
    v27 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (__int64)&v23,
                                      (__int64)v30,
                                      a3,
                                      v14,
                                      0,
                                      (__int64)v28,
                                      &v19);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v22 = v19;
      ObfDereferenceObject(v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v30);
  }
LABEL_29:
  CmpCleanupParseContext((__int64)v28, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  KiUnstackDetachProcess((__int64)v29, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
