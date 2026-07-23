/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x1402F54B0
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1402F4EF4 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1402F4FA0 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__PageLookup @ 0x14089A6C0 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x14089A6D8 (Normalization__TableLookup.c)
 */

char __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 CurrentOutputChar; // rdx
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int16 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int16 *v18; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  v4 = a1[10];
  a1[13] = v2;
  if ( v2 != v4 )
  {
    v18 = (unsigned __int16 *)(v2 - 2);
    v5 = -4LL;
    CurrentOutputChar = (unsigned int)NormBuffer__GetCurrentOutputChar((__int64)a1, &v18);
    LOBYTE(v2) = -2;
    if ( *(int *)(v7 + 88) <= 0xFFFF )
      v5 = -2LL;
    v9 = (unsigned __int16 *)(v8 + v5);
    if ( v18 != v9 )
    {
      v10 = *(_QWORD *)(v7 + 112);
      do
      {
        LOBYTE(v11) = Normalization__PageLookup(v10, CurrentOutputChar);
        LOBYTE(v2) = Normalization__TableLookup(v13, v12, v11) & 0x3F;
        if ( (unsigned __int8)v2 < a2 )
          break;
        *(_QWORD *)(v15 + 104) = v16;
        v18 = (unsigned __int16 *)(v16 - 2);
        LODWORD(v2) = NormBuffer__GetCurrentOutputChar(v14, &v18);
        CurrentOutputChar = (unsigned int)v2;
      }
      while ( v18 != v9 );
    }
  }
  return v2;
}
