/*
 * XREFs of sub_1800DF53C @ 0x1800DF53C
 * Callers:
 *     sub_1800DF2D0 @ 0x1800DF2D0 (sub_1800DF2D0.c)
 *     sub_1800DF390 @ 0x1800DF390 (sub_1800DF390.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 * Callees:
 *     _stricmp @ 0x18008DB50 (_stricmp.c)
 */

int __fastcall sub_1800DF53C(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // rax
  __int64 **v5; // rsi
  __int64 *i; // rdi

  if ( *a2 && (LODWORD(v4) = stricmp((const char *)(*a2)[1], *(const char **)(a1 + 8)), (int)v4 <= 0) )
  {
    v5 = *a2;
    for ( i = **a2; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        *(_QWORD *)a1 = 0LL;
        goto LABEL_9;
      }
      LODWORD(v4) = stricmp((const char *)i[1], *(const char **)(a1 + 8));
      if ( (int)v4 >= 0 )
        break;
      v5 = (__int64 **)i;
    }
    *(_QWORD *)a1 = i;
LABEL_9:
    *v5 = (__int64 *)a1;
  }
  else
  {
    v4 = *a2;
    *(_QWORD *)a1 = *a2;
    *a2 = (__int64 **)a1;
  }
  return (int)v4;
}
