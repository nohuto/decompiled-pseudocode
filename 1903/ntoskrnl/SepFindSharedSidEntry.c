/*
 * XREFs of SepFindSharedSidEntry @ 0x1408E2994
 * Callers:
 *     SepDeReferenceSharedSidEntries @ 0x1408E24DC (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408E2A30 (SepInsertOrReferenceSharedSidEntries.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x140087BF0 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140115EA0 (RtlGetNextEntryHashTable.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __fastcall SepFindSharedSidEntry(unsigned int *Sid1)
{
  ULONG_PTR v1; // rbp
  __int64 v2; // rbx
  __int64 v4; // r8
  ULONG_PTR v5; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = g_SepSidMapping;
  memset(&Context, 0, sizeof(Context));
  v2 = 0LL;
  v4 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  v5 = v4 + 1;
  if ( (_DWORD)v4 )
    v5 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  for ( i = RtlLookupEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v5, &Context);
        ;
        i = RtlGetNextEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v1 + 8), &Context) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
      return v7;
  }
  return (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v2;
}
