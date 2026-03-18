/*
 * XREFs of AslpPathWildcardFreeFindContext @ 0x1409281CC
 * Callers:
 *     AslPathWildcardFindClose @ 0x140926CFC (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ULongLongMult @ 0x14028101C (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1409282A4 (AslpPathWildcardFreeMatchNode.c)
 */

void __fastcall AslpPathWildcardFreeFindContext(_QWORD **a1)
{
  _QWORD *v1; // rbx
  ULONGLONG v3; // rcx
  ULONGLONG i; // rsi
  ULONGLONG v5; // rax
  ULONGLONG v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v3 = v1[4];
      for ( i = 0LL; i < v3; ++i )
      {
        v5 = 0LL;
        if ( i < v3 )
        {
          if ( ULongLongMult(v1[3], i, &pullResult) < 0 || (v6 = v1[7], v5 = v6 + pullResult, v6 + pullResult < v6) )
            v5 = 0LL;
        }
        AslpPathWildcardFreeMatchNode(v5);
        v3 = v1[4];
      }
      v7 = (void *)v1[7];
      if ( v7 )
        ExFreePoolWithTag(v7, 0x72615452u);
      memset(v1 + 2, 0, 0x30uLL);
      v8 = (void *)v1[1];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0x74705041u);
        v1[1] = 0LL;
      }
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
