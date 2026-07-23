/*
 * XREFs of SepFindMatchingLowBoxNumberEntry @ 0x14065D524
 * Callers:
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x1400DD7B0 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140117B80 (RtlGetNextEntryHashTable.c)
 */

__int64 __fastcall SepFindMatchingLowBoxNumberEntry(PRTL_DYNAMIC_HASH_TABLE HashTable, unsigned int *Sid1, __int64 *a3)
{
  char v3; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  v9 = v8 + 1;
  if ( (_DWORD)v8 )
    v9 = v8;
  for ( i = RtlLookupEntryHashTable(HashTable, v9, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v7 = i;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
    {
      v3 = 1;
      break;
    }
  }
  *a3 = (unsigned __int64)v7 & -(__int64)(v3 != 0);
  return 0LL;
}
