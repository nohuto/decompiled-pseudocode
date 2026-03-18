/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1406AD800
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x1400FB430 (KCBNeedsVirtualImage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmRealKCBToVirtualPath @ 0x1406F507C (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x1406F5820 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082C810 (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x14082D01C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x14082D0C4 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14082DEC8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E2B4 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v17; // r9
  ACCESS_MASK v18; // ebx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  UNICODE_STRING *v22; // rbx
  wchar_t *Buffer; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  __int64 v25; // [rsp+60h] [rbp+30h] BYREF
  __int64 v26; // [rsp+68h] [rbp+38h] BYREF

  v26 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_4;
  v12 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_4;
  v13 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_4;
  if ( (*(_DWORD *)(v12 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v12 + 168);
    *(_DWORD *)(v12 + 160) |= 1u;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v14, v13, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
    || (LOBYTE(v17) = a5, v18 = a6 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v17)) )
  {
LABEL_4:
    v15 = -1073741199;
    goto LABEL_5;
  }
  LOBYTE(v19) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v19) )
    goto LABEL_26;
  v15 = CmpCheckAdminAccess(v18, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL));
  if ( v15 < 0 )
    goto LABEL_5;
  if ( !(_BYTE)v26 )
  {
LABEL_26:
    v15 = -1073741790;
    goto LABEL_5;
  }
  v20 = *(_DWORD *)v12 >> 10;
  LOBYTE(v20) = (*(_DWORD *)v12 & 0x400) != 0;
  v15 = CmpReplicateKeyToVirtual(a1, v13, v20, &v25);
  if ( v15 >= 0 )
  {
    v15 = CmpExamineSaclForAuditEvent(*(_QWORD *)(a1 + 88) + 32LL, v13, &v26);
    if ( v15 >= 0 )
    {
      if ( !(_BYTE)v26 || (v15 = CmpReportAuditVirtualizationEvent(a1, v13), v15 >= 0) )
      {
        v21 = v25;
        *(_DWORD *)(v12 + 96) |= 2u;
        *(_QWORD *)(v12 + 112) = v21;
LABEL_22:
        v15 = CmRealKCBToVirtualPath(a1, a3, v13, &DestinationString);
        if ( v15 >= 0 )
        {
          v22 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v22 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v12 |= 8u;
          v15 = 260;
        }
      }
    }
  }
LABEL_5:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v15;
}
