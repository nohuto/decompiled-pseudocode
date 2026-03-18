/*
 * XREFs of SepDeleteAccessState @ 0x14003B0B0
 * Callers:
 *     WmipCreateGuidObject @ 0x1405C0C08 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406722F4 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     PspCombineSecurityDomains @ 0x140673D38 (PspCombineSecurityDomains.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5920 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     PspDeleteObjectAccessState @ 0x1408C8CCC (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x1406D1F90 (SeDeassignSecurity.c)
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
