/*
 * XREFs of SdbpFreePackageAttributes @ 0x1408E8588
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x14067FB84 (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SdbpFreePackageAttributes(_QWORD *a1)
{
  ULONGLONG v1; // rax
  ULONGLONG i; // rdi
  ULONGLONG v4; // r8
  ULONGLONG v5; // rdx
  void *v6; // rcx
  void *v7; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1[2];
    for ( i = 0LL; i < v1; ++i )
    {
      v4 = 0LL;
      if ( i < v1 )
      {
        if ( ULongLongMult(a1[1], i, &pullResult) < 0 || (v5 = a1[5], v5 + pullResult < v5) )
          v4 = 0LL;
        else
          v4 = v5 + pullResult;
      }
      if ( (unsigned __int16)(*(_WORD *)v4 - 24617) <= 2u )
      {
        v6 = *(void **)(v4 + 8);
        if ( v6 )
          ExFreePoolWithTag(v6, 0x74705041u);
      }
      v1 = a1[2];
    }
    v7 = (void *)a1[5];
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72615452u);
    memset(a1, 0, 0x30uLL);
  }
}
