/*
 * XREFs of SepFindMatchingLowBoxNumberEntry @ 0x14061FE58
 * Callers:
 *     SepGetLowBoxNumberEntry @ 0x14061FD34 (SepGetLowBoxNumberEntry.c)
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x140088010 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140117530 (RtlGetNextEntryHashTable.c)
 */

__int64 __fastcall SepFindMatchingLowBoxNumberEntry(PRTL_DYNAMIC_HASH_TABLE HashTable, unsigned int *Sid1, __int64 *a3)
{
  char v4; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  ULONG_PTR v8; // r8
  ULONG_PTR v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  memset(&Context, 0, sizeof(Context));
  v4 = 0;
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
      v4 = 1;
      break;
    }
  }
  *a3 = (unsigned __int64)v7 & -(__int64)(v4 != 0);
  return 0LL;
}
