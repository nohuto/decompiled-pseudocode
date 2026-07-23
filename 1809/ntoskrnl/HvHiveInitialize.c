/*
 * XREFs of HvHiveInitialize @ 0x1405A824C
 * Callers:
 *     CmpHiveInitialize @ 0x1405A817C (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall HvHiveInitialize(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  void *result; // rax

  memset(a1, 0, 0x600uLL);
  v2 = a1 + 110;
  *(_DWORD *)a1 = -1092567328;
  v3 = 2LL;
  do
  {
    *((_DWORD *)v2 - 146) = -1;
    v2[1] = v2;
    *v2 = v2;
    v2 += 79;
    --v3;
  }
  while ( v3 );
  a1[9] = 0LL;
  a1[10] = 0LL;
  result = memset(a1 + 27, 0, 0x38uLL);
  a1[32] = 0LL;
  a1[33] = 0LL;
  return result;
}
