/*
 * XREFs of ObInitSystem @ 0x140A0533C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x1400040A0 (RtlGetAce.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     ObpLockDirectoryExclusive @ 0x140105100 (ObpLockDirectoryExclusive.c)
 *     ExInitializeNPagedLookasideList @ 0x140175A90 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExInitializeSystemLookasideList @ 0x1405A0528 (ExInitializeSystemLookasideList.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtCreateDirectoryObject @ 0x140681350 (NtCreateDirectoryObject.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14069E970 (RtlSetSaclSecurityDescriptor.c)
 *     ExCreateHandleTable @ 0x1406B7240 (ExCreateHandleTable.c)
 *     ObpInsertDirectoryEntry @ 0x1406CA250 (ObpInsertDirectoryEntry.c)
 *     ObpInitializeRootNamespace @ 0x14074FBF0 (ObpInitializeRootNamespace.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 *     ObpInitObjectTypeSD @ 0x14075E94C (ObpInitObjectTypeSD.c)
 *     ObpLookupDirectoryEntry @ 0x14075EB54 (ObpLookupDirectoryEntry.c)
 *     ObInitializeProcessor @ 0x14075EC30 (ObInitializeProcessor.c)
 *     ObInitServerSilo @ 0x140782F9C (ObInitServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x1408D048C (RtlAddAuditAccessAce.c)
 *     ObpInitInfoBlockOffsets @ 0x140A18148 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140A1F760 (ObpInitStackTrace.c)
 */

char ObInitSystem()
{
  __int16 v0; // bx
  __int16 v1; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // ebx
  unsigned int v6; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v7; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rbx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  _BYTE *v12; // rsi
  _BYTE *i; // rbx
  __int64 v14; // rdx
  ULONG v16; // edx
  ULONG v17; // edx
  void *v18; // r9
  _BYTE *v19; // rax
  BOOLEAN Size; // [rsp+28h] [rbp-E0h]
  BOOLEAN Tag; // [rsp+30h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v23[16]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Ace; // [rsp+D8h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING v27; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v28; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v29[40]; // [rsp+118h] [rbp+10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+140h] [rbp+38h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+170h] [rbp+68h] BYREF
  ACL Acl; // [rsp+198h] [rbp+90h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  memset(v29, 0, sizeof(v29));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v23, 0, 0x78uLL);
  *(_QWORD *)&v28.Length = 0LL;
  v28.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v0 = 32;
  DestinationString.Buffer = 0LL;
  if ( (_BYTE)dword_1405711AC )
  {
    v1 = 64;
  }
  else
  {
    v1 = 32;
    v0 = 16;
  }
  if ( !(_DWORD)InitializationPhase )
  {
    ObHeaderCookie = ExGenRandom(0);
    ExInitializeSystemLookasideList(
      (__int64)&ObpCreateInfoLookasideList,
      512,
      64,
      1766023759,
      v1,
      (__int64)&ExSystemLookasideListHead);
    ExInitializeSystemLookasideList(
      (__int64)&ObpNameBufferLookasideList,
      1,
      248,
      1833853519,
      v0,
      (__int64)&ExSystemLookasideListHead);
    CurrentPrcb = KeGetCurrentPrcb();
    ObpPendingObjectDirectoryList = 0LL;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    v3 = 256LL;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    v4 = &unk_14058D408;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    ObpPendingObjectDirectoryListLock = 0LL;
    do
    {
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 2;
      --v3;
    }
    while ( v3 );
    ObpDefaultObject = 0;
    qword_140445850 = (__int64)&qword_140445848;
    qword_140445848 = (__int64)&qword_140445848;
    byte_140445842 = 6;
    dword_140445844 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_140445878 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    LODWORD(ObpRemoveObjectDpc) = 275;
    qword_140445880 = 0LL;
    qword_140445898 = 0LL;
    qword_140445870 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_140572D88 = (__int64)MmBadPointer;
    LODWORD(v23[1]) = 256;
    LOWORD(v23[0]) = 120;
    HIDWORD(v23[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v23[0]) |= 0x24u;
    HIDWORD(v23[3]) = 983041;
    HIDWORD(v23[5]) = 216;
    *(_OWORD *)((char *)&v23[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v23, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v23[4]) = 1;
    RtlInitUnicodeString(&v27, L"Directory");
    HIDWORD(v23[5]) = 344;
    HIDWORD(v23[3]) = 983055;
    BYTE2(v23[0]) = BYTE2(v23[0]) & 0xD2 | 0xD;
    v23[8] = ObpCloseDirectoryObject;
    v23[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v23[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v27, (__int64)v23, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v23[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v28, L"SymbolicLink");
    BYTE3(v23[0]) |= 1u;
    v23[9] = ObpDeleteSymbolicLink;
    HIDWORD(v23[5]) = 40;
    v23[10] = ObpParseSymbolicLinkEx;
    HIDWORD(v23[4]) = 1;
    HIDWORD(v23[3]) = 0xFFFFF;
    BYTE2(v23[0]) = BYTE2(v23[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v23[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v28, (__int64)v23, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitStackTrace();
  }
  if ( (_DWORD)InitializationPhase != 1 )
    return 1;
  if ( ObInitServerSilo(0LL) >= 0 )
  {
    v5 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v5]) >= 0 )
      {
        if ( ++v5 >= (unsigned int)KeNumberProcessors_0 )
          goto LABEL_16;
      }
      return 0;
    }
LABEL_16:
    v6 = 0;
    v7 = &ObpWaitBlockLookaside;
    do
    {
      v8 = 14 * v6 + 24;
      if ( (unsigned int)v8 >= 0x40 )
        v8 = 64LL;
      ExInitializeNPagedLookasideList(v7, 0LL, 0LL, 0x200u, 48 * v8, 0x6D57624Fu, 0);
      ++v6;
      ++v7;
    }
    while ( v6 < 4 );
    v9 = (_BYTE *)SePublicDefaultUnrestrictedSd;
    if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
      goto LABEL_25;
    v16 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
    if ( v16 < 0xFA
      && RtlCreateAcl(&Acl, v16, 2u) >= 0
      && RtlAddAuditAccessAce(&Acl, v17, 0x60000000u, v18, Size, Tag) >= 0
      && RtlGetAce(&Acl, 0, &Ace) >= 0 )
    {
      v19 = Ace;
      if ( ObpAuditBaseDirectories )
        *((_BYTE *)Ace + 1) |= 0xAu;
      if ( ObpAuditBaseObjects )
        v19[1] |= 9u;
      v9 = SecurityDescriptor;
      if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
        && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
        && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
      {
LABEL_25:
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.SecurityDescriptor = v9;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
        {
          v10 = DirectoryHandle;
          v11 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpRootDirectoryObject = Object;
          if ( v11 >= 0 && (int)ObpInitializeRootNamespace(0LL, v10, 0LL) >= 0 && NtClose(v10) >= 0 )
          {
            *(_WORD *)&v29[30] = 0;
            *(_OWORD *)v29 = 0LL;
            *(_DWORD *)&v29[32] = -60876;
            ObpLockDirectoryExclusive((__int64)v29, ObpTypeDirectoryObject);
            v12 = ObpTypeObjectType;
            for ( i = *(_BYTE **)ObpTypeObjectType; i != v12; i = *(_BYTE **)i )
            {
              if ( (i[58] & 2) != 0 )
                v14 = (__int64)&i[-ObpInfoMaskToOffset[i[58] & 3] + 32];
              else
                v14 = 0LL;
              if ( v14
                && !*(_QWORD *)v14
                && !ObpLookupDirectoryEntry(ObpTypeDirectoryObject, (unsigned __int16 *)(v14 + 8), 64, (__int64)v29)
                && (!*((_QWORD *)i + 9) && (int)ObpInitObjectTypeSD((__int64)(i + 80), 0LL) < 0
                 || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, i + 80, (__int64)v29)) )
              {
                return 0;
              }
            }
            ObpReleaseLookupContext((__int64)v29);
            Object = &ObpLUIDDeviceMapsEnabled;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
