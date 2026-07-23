/*
 * XREFs of SepGetCachedHandlesEntry @ 0x14061DF30
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14061DD74 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x1400857C0 (RtlInsertEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14061E00C (SepFindMatchingCachedHandlesEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14061F30C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     RtlHashUnicodeString @ 0x140653620 (RtlHashUnicodeString.c)
 */

__int64 __fastcall SepGetCachedHandlesEntry(__int64 a1, int *a2, _BYTE *a3, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4)
{
  _RTL_DYNAMIC_HASH_TABLE *v4; // rbp
  unsigned int v5; // ebx
  int v6; // ecx
  ULONG_PTR v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v15; // rdi
  ULONG HashValue; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 8);
  v5 = 0;
  v6 = *a2;
  HashValue = 0;
  v10 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      RtlHashUnicodeString((PCUNICODE_STRING)(a2 + 2), 1u, 0, &HashValue);
      v10 = HashValue;
    }
  }
  else
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = (unsigned int)*(unsigned __int8 *)(v11 + 1) - 1;
    v13 = *(unsigned int *)(v11 + 4 * v12 + 8);
    v10 = v13 + 1;
    if ( (_DWORD)v13 )
      v10 = *(unsigned int *)(v11 + 4 * v12 + 8);
  }
  *a3 = 0;
  SepFindMatchingCachedHandlesEntry(v4);
  if ( v17 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24)) <= 1 )
      __fastfail(0xEu);
    *a4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v17;
    result = 0LL;
    *a3 = 1;
  }
  else
  {
    result = SepAllocateAndInitializeCachedHandleEntry(a2, &Entry);
    if ( (int)result >= 0 )
    {
      v15 = Entry;
      if ( RtlInsertEntryHashTable(v4, Entry, v10, 0LL) )
      {
        *a4 = v15;
      }
      else
      {
        ExFreePoolWithTag(v15, 0);
        return (unsigned int)-1073741670;
      }
      return v5;
    }
  }
  return result;
}
