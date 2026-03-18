/*
 * XREFs of MiSessionObjectDelete @ 0x14088B360
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x140114634 (KeRemoveSchedulingGroup.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC (MiReleaseProcessReferenceToSessionDataPage.c)
 */

void __fastcall MiSessionObjectDelete(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int16 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v2 + 4) & 0x40) != 0 )
    MiReleaseProcessReferenceToSessionDataPage(v2);
  v3 = *(unsigned __int16 **)(a1 + 32);
  if ( v3 )
  {
    KeRemoveSchedulingGroup(v3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
