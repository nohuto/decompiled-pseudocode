/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1402F4EF4
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1402F5380 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1402F53F4 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x1402F4F58 (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x1402F507C (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1402F54B0 (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x1408992D4 (Normalization__GetCharacterInfo.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  Normalization__GetCharacterInfo(a1[14], a2, &v8, &v9);
  LOBYTE(v4) = v8;
  NormBuffer__SortBeforeSameClass(a1, v4);
  v6 = a1[13];
  if ( v6 != a1[5] )
    return NormBuffer__Insert(a1, v3);
  LOBYTE(v5) = v9;
  LOBYTE(v6) = v8;
  return NormBuffer__AppendEx(a1, v3, v6, v5);
}
