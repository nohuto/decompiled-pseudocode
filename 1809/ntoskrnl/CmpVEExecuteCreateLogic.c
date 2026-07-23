/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1406B3054
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x1401295DC (KCBNeedsVirtualImage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x1407F3984 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F3AB8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x1407F48FC (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407F6328 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r9
  ACCESS_MASK v18; // ebx
  __int64 v19; // r9
  UNICODE_STRING *v20; // rbx
  wchar_t *Buffer; // rcx
  __int64 v23; // [rsp+20h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  char v25; // [rsp+70h] [rbp+30h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(BugCheckParameter2 + 58) )
    goto LABEL_2;
  v14 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_2;
  v15 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_2;
  if ( (*(_DWORD *)(v14 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v14 + 168);
    *(_DWORD *)(v14 + 160) |= 1u;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(BugCheckParameter2, v16, v15, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x20) != 0
    || (LOBYTE(v17) = a5, v18 = a6 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter2, a7, a6 | 4u, v17)) )
  {
LABEL_2:
    v13 = -1073741199;
    goto LABEL_24;
  }
  LOBYTE(v19) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(BugCheckParameter2, a7, 131097LL, v19) )
    goto LABEL_12;
  v13 = CmpCheckAdminAccess(v18, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(BugCheckParameter2 + 80) + 32LL));
  if ( v13 < 0 )
    goto LABEL_24;
  if ( !v25 )
  {
LABEL_12:
    v13 = -1073741790;
    goto LABEL_24;
  }
  CmpUnlockKcb(a2);
  v13 = CmpReplicateKeyToVirtual(BugCheckParameter2);
  CmpLockKcbExclusive(a2);
  if ( v13 >= 0 )
  {
    v13 = CmpExamineSaclForAuditEvent(*(_QWORD *)(BugCheckParameter2 + 80) + 32LL, v15, &v25);
    if ( v13 >= 0 )
    {
      if ( !v25 || (v13 = CmpReportAuditVirtualizationEvent(BugCheckParameter2, v15), v13 >= 0) )
      {
        *(_DWORD *)(v14 + 96) |= 2u;
        *(_QWORD *)(v14 + 112) = v23;
LABEL_20:
        v13 = CmRealKCBToVirtualPath(BugCheckParameter2, a3, v15, &DestinationString);
        if ( v13 >= 0 )
        {
          v20 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v20 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v14 |= 8u;
          v13 = 260;
        }
      }
    }
  }
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v13;
}
