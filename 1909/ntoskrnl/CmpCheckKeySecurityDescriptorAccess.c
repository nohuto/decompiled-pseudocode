/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x1406D5000
 * Callers:
 *     CmpCheckSecurityCellAccess @ 0x1406D4F7C (CmpCheckSecurityCellAccess.c)
 *     CmpCheckKcbStackAccess @ 0x14082D624 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x14082D6FC (CmpCheckKeyNodeStackAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     PsGetCurrentThreadProcess @ 0x14012B4B0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x140678640 (SeCreateAccessStateEx.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1406D4B04 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *v9; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v15[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[28]; // [rsp+100h] [rbp+0h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  v9 = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, v15, v16, a3, v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      AccessState = CmpSetAccessStateForBackupRestore((__int64)v15, a2, (__int64)SecurityDescriptor, 0);
      if ( AccessState < 0 )
        goto LABEL_5;
      if ( !LODWORD(v15[0].PrimaryToken) )
      {
        AccessState = 0;
        goto LABEL_5;
      }
      GrantedAccess = HIDWORD(v15[0].PrimaryToken);
    }
    else
    {
      GrantedAccess = 0;
    }
    AccessState = SeAccessCheck(
                    SecurityDescriptor,
                    &v15[1],
                    0,
                    a3,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a2,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
LABEL_5:
    SepDeleteAccessState((__int64)v15);
    SeReleaseSubjectContext(&v15[1]);
  }
  return (unsigned int)AccessState;
}
