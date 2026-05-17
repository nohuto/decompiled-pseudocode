/*
 * XREFs of sub_1800D9888 @ 0x1800D9888
 * Callers:
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1800D9E2C @ 0x1800D9E2C (sub_1800D9E2C.c)
 */

__int64 *sub_1800D9888()
{
  __int64 *v0; // rbx
  __int64 *v1; // r13
  int v2; // r15d
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 *result; // rax
  __int64 v12; // [rsp+50h] [rbp+8h]

  v0 = (__int64 *)qword_180164610;
LABEL_14:
  result = &qword_180164610;
  while ( v0 != &qword_180164610 )
  {
    v1 = v0;
    v2 = 0;
    v0 = (__int64 *)*v0;
    v3 = (_QWORD *)v1[5];
    if ( *v3 )
    {
      v4 = (_QWORD *)v1[5];
      do
      {
        v5 = (_QWORD *)v4[3];
        LODWORD(v6) = 0;
        if ( *v5 )
        {
          v7 = (_QWORD *)v4[3];
          v8 = 0LL;
          do
          {
            if ( (dword_1801665D4 & 0x20) != 0 )
              DbgPrint("AVRF: Checking %ws for duplicate (%ws: %s) \n", v1[3], *v4, *v7);
            v9 = 3 * v8;
            v10 = sub_1800D9E2C(v1, *v4, v5[v9]);
            v12 = v10;
            if ( v10 )
            {
              if ( (dword_1801665D4 & 0x10) != 0 )
              {
                DbgPrint("AVRF: Chaining (%ws: %s) to %ws\n", *v4, v5[v9], v1[3]);
                v10 = v12;
              }
              v5[v9 + 1] = v10;
            }
            v6 = (unsigned int)(v6 + 1);
            v8 = (unsigned int)v6;
            v7 = &v5[3 * v6];
          }
          while ( *v7 );
        }
        v4 = &v3[4 * (unsigned int)++v2];
      }
      while ( *v4 );
      goto LABEL_14;
    }
  }
  return result;
}
