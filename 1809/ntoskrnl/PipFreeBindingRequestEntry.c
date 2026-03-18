/*
 * XREFs of PipFreeBindingRequestEntry @ 0x140823F08
 * Callers:
 *     PipFreeDependencyEdge @ 0x1402879B8 (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x140823B9C (PipAddRequestToEdge.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingRequestEntry(PVOID P)
{
  UNICODE_STRING *v2; // rcx

  if ( *((_DWORD *)P + 4) == 1 )
  {
    v2 = (UNICODE_STRING *)*((_QWORD *)P + 3);
    if ( v2 )
    {
      RtlFreeAnsiString(v2);
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x53706E50u);
      *((_QWORD *)P + 3) = 0LL;
    }
  }
  ExFreePoolWithTag(P, 0x53706E50u);
}
