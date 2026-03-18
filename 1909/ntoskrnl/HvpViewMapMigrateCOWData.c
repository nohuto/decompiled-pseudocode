/*
 * XREFs of HvpViewMapMigrateCOWData @ 0x14082FAD4
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140635C20 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpAllExceptionsFatalFilter @ 0x14082F96C (HvpAllExceptionsFatalFilter.c)
 */

__int64 __fastcall HvpViewMapMigrateCOWData(SIZE_T a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 i; // rcx
  __int64 result; // rax

  v6 = a2[5];
  v7 = a3[6];
  if ( v7 >= a2[6] )
    v7 = a2[6];
  if ( a3[5] >= v6 )
    v6 = a3[5];
  while ( v6 < v7 )
  {
    v8 = a3[3];
    if ( (*((_BYTE *)a3 + ((unsigned __int64)(v6 - v8) >> 12) + 72) & 2) != 0 )
    {
      v9 = v6 + 4096;
      for ( i = v6 + 4096 - v8; v9 < v7 && (*((_BYTE *)a3 + (i >> 12) + 72) & 2) != 0; i += 4096LL )
        v9 += 4096LL;
      result = HvpViewMapMakeViewRangeCOWByCaller(a1, a2, v6, v9);
      if ( (int)result < 0 )
        return result;
      memmove((void *)(v6 + a2[7] - a2[3]), (const void *)(v6 + a3[7] - a3[3]), v9 - v6);
      v6 = v9;
    }
    else
    {
      v6 += 4096LL;
    }
  }
  return 0LL;
}
