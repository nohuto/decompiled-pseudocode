/*
 * XREFs of VfThunkApplyDriverAddedThunks @ 0x140937998
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x14092927C (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140937EBC (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x1409382DC (ViThunkReplaceImportEntry.c)
 */

__int64 __fastcall VfThunkApplyDriverAddedThunks(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 *AllSpecialTables; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // ecx
  ULONG v8; // [rsp+30h] [rbp+8h] BYREF

  result = (__int64)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v8);
  v2 = result;
  if ( result )
  {
    v3 = v8 >> 3;
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(result, v3);
    if ( (_DWORD)v3 )
    {
      do
      {
        if ( !AllSpecialTables )
          goto LABEL_8;
        v5 = *AllSpecialTables;
        LODWORD(v6) = 0;
        if ( !*AllSpecialTables )
          goto LABEL_8;
        do
        {
          v7 = ViThunkReplaceImportEntry(v5 + 24, v2);
          if ( v7 == 1 )
            break;
          v6 = (unsigned int)(v6 + 1);
          v5 = AllSpecialTables[v6];
        }
        while ( v5 );
        if ( !v7 )
LABEL_8:
          ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v2);
        v2 += 8LL;
        --v3;
      }
      while ( v3 );
    }
    if ( AllSpecialTables )
      ExFreePoolWithTag(AllSpecialTables, 0);
    return 1LL;
  }
  return result;
}
