/*
 * XREFs of SepDeleteAccessState @ 0x14004D950
 * Callers:
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspCombineSecurityDomains @ 0x14061204C (PspCombineSecurityDomains.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     WmipCreateGuidObject @ 0x140612BC8 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140612DF0 (PsOpenThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x1406477E0 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7BE4 (PspOneDirectionSecurityDomainCombine.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtGetNextProcess @ 0x14071A010 (NtGetNextProcess.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14075F000 (PspCreateProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F3AB8 (CmpDoAccessCheckOnKCB.c)
 *     NtGetNextThread @ 0x14088FBF0 (NtGetNextThread.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x1406AEE30 (SeDeassignSecurity.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v2, 0);
  v3 = *(void **)(a1 + 136);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 48) )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v2 + 48));
    v5 = *(void (**)(void))(v2 + 72);
    if ( v5 && *(_QWORD *)(v2 + 80) )
    {
      if ( *(_QWORD *)(v2 + 56) )
        v5();
      if ( *(_QWORD *)(v2 + 64) )
        (*(void (__fastcall **)(_QWORD))(v2 + 72))(*(_QWORD *)(v2 + 80));
    }
  }
}
