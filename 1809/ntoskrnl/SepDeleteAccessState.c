/*
 * XREFs of SepDeleteAccessState @ 0x14004D950
 * Callers:
 *     SeDeleteAccessState @ 0x1405BD870 (SeDeleteAccessState.c)
 *     ObReferenceObjectByName @ 0x1405C8DA0 (ObReferenceObjectByName.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     PspCombineSecurityDomains @ 0x14061104C (PspCombineSecurityDomains.c)
 *     ObReferenceObjectByNameEx @ 0x14061145C (ObReferenceObjectByNameEx.c)
 *     WmipCreateGuidObject @ 0x140611BC8 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140611DF0 (PsOpenThread.c)
 *     PspInsertThread @ 0x140621450 (PspInsertThread.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x1406467C0 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1406470C0 (ObOpenObjectByPointer.c)
 *     SeSubProcessToken @ 0x14064EA4C (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B6944 (PspOneDirectionSecurityDomainCombine.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C9FB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtGetNextProcess @ 0x140718D70 (NtGetNextProcess.c)
 *     PsCreateMinimalProcess @ 0x14075752C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14075DE10 (PspCreateProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F28B8 (CmpDoAccessCheckOnKCB.c)
 *     NtGetNextThread @ 0x14088E990 (NtGetNextThread.c)
 *     CMFCheckAccess @ 0x1408D83E4 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x1406ADB90 (SeDeassignSecurity.c)
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
