/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x1407F2BFC
 * Callers:
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x1401295DC (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmObReferenceObjectByName @ 0x140582128 (CmObReferenceObjectByName.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140583A30 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x1407F48FC (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  __int128 v23; // [rsp+80h] [rbp-80h]
  _QWORD v24[38]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[48]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v26[5]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v27[28]; // [rsp+290h] [rbp+190h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v25, 0, sizeof(v25));
  memset(v24, 0, 0x128uLL);
  v24[19] = &v24[18];
  v24[18] = &v24[18];
  memset(&v24[27], 0, 0x50uLL);
  v8 = *a1;
  v17 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 58)
    || (*(_DWORD *)(v8 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v11 = *(_DWORD *)(v9 + 176), (v11 & 0x800000) == 0)
    || (v11 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess((__int64)v25);
  CmpLockRegistry();
  ExAcquirePushLockSharedEx(v9 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 48));
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( (unsigned __int8)CmpReparseToVirtualPath(v9, v12, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry();
      LODWORD(v24[2]) = *a5;
      LODWORD(v24[0]) = 8;
      v24[9] = *(_QWORD *)(v8 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        v26,
                                        v27,
                                        a3,
                                        (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v20 = 0LL;
        v15 = 1600;
        v19 = 48;
        if ( a2 != 1 )
          v15 = 576;
        v22 = v15;
        p_DestinationString = &DestinationString;
        v23 = 0LL;
        if ( (int)CmObReferenceObjectByName((__int64)&v19, (__int64)v26, a3, v14, 0, (__int64)v24, &v17) >= 0 )
        {
          *a1 = v17;
          ObfDereferenceObject((PVOID)v8);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState(v26);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = -1073741790;
  }
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
LABEL_11:
  KiUnstackDetachProcess((__int64)v25, 0LL);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v24, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
