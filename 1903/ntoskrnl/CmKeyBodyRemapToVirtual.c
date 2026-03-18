/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14082BCB4
 * Callers:
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x1400FB430 (KCBNeedsVirtualImage.c)
 *     CmpHasKcbBeenMirrored @ 0x140143300 (CmpHasKcbBeenMirrored.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KCBVirtualFlagSet @ 0x14027FF58 (KCBVirtualFlagSet.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1405B1E60 (SeCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FAAF0 (CmpLockKcbShared.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReparseToVirtualPath @ 0x14082D01C (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  int AccessStateFromSubjectContext; // ebx
  ULONG_PTR v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v14; // edx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v18[38]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[48]; // [rsp+190h] [rbp+90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v20[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v21[28]; // [rsp+260h] [rbp+160h] BYREF

  memset(v18, 0, 0x128uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, 0x128uLL);
  v18[19] = &v18[18];
  v18[18] = &v18[18];
  memset(&v18[27], 0, 0x50uLL);
  v8 = *a1;
  AccessStateFromSubjectContext = 0;
  v17 = 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( !*(_WORD *)(v10 + 66)
    && (*(_DWORD *)(v8 + 48) & 0x10) == 0
    && KCBNeedsVirtualImage()
    && CmpHasKcbBeenMirrored(v10)
    && KCBVirtualFlagSet(v11) )
  {
    CmpAttachToRegistryProcess((__int64)v19);
    CmpLockRegistry();
    CmpLockKcbShared(v10);
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      if ( (unsigned __int8)CmpReparseToVirtualPath(v10, v12, a4, &DestinationString) )
      {
        CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
        CmpUnlockRegistry();
        LODWORD(v18[2]) = *a5;
        LODWORD(v18[0]) = 8;
        v18[9] = *(_QWORD *)(v8 + 56);
        AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                          a4,
                                          v20,
                                          v21,
                                          a3,
                                          (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
        if ( AccessStateFromSubjectContext >= 0 )
        {
          v14 = 1600;
          if ( a2 != 1 )
            v14 = 576;
          if ( (int)ObReferenceObjectByName(
                      (__int64)&DestinationString,
                      v14,
                      (__int64 *)v20,
                      a3,
                      (__int64)CmKeyObjectType,
                      0,
                      (__int64)v18,
                      &v17) >= 0 )
          {
            *a1 = v17;
            ObfDereferenceObject((PVOID)v8);
          }
          SeDeleteAccessState(v20);
          AccessStateFromSubjectContext = 0;
        }
        goto LABEL_10;
      }
      AccessStateFromSubjectContext = 0;
    }
    CmpUnlockKcb(v10);
    CmpUnlockRegistry();
LABEL_10:
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v19);
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v18, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
