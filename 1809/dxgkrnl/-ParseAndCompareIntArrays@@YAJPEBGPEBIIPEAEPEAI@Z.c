/*
 * XREFs of ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C025E9A0
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C0150C74 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C025EB98 (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareIntArrays(
        const unsigned __int16 *a1,
        unsigned __int64 a2,
        signed __int64 a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned int v6; // edi
  const unsigned int *v7; // r15
  unsigned __int8 v9; // r14
  unsigned int v10; // r10d
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int16 v13; // r9
  bool v14; // cl
  const unsigned int *v15; // rax
  unsigned int v16; // r10d
  unsigned int v17; // r10d
  unsigned int *v18; // rcx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v23[4]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v24[4]; // [rsp+38h] [rbp-18h] BYREF

  v6 = a3;
  v7 = (const unsigned int *)a2;
  v9 = 0;
  v22 = *a5;
  v10 = v22;
  if ( a1[v22] != 35 )
  {
    LODWORD(v11) = v22;
    while ( a1[(unsigned int)v11] )
    {
      result = ParseIntArray(a1, v23, v6, &v22);
      if ( (int)result < 0 )
        return result;
      v10 = v22;
      v13 = a1[v22];
      if ( v13 == 45 )
      {
        ++v22;
        result = ParseIntArray(a1, v24, v6, &v22);
        if ( (int)result < 0 )
          return result;
        v14 = 0;
        LOBYTE(a2) = 0;
        a3 = 0LL;
        if ( v6 )
        {
          v15 = v7;
          do
          {
            if ( !v14 )
            {
              v16 = *(const unsigned int *)((char *)v15 + (char *)v23 - (char *)v7);
              if ( *v15 < v16 )
                goto LABEL_17;
              v14 = *v15 > v16;
            }
            if ( !(_BYTE)a2 )
            {
              v17 = *(const unsigned int *)((char *)v15 + (char *)v24 - (char *)v7);
              if ( *v15 > v17 )
                goto LABEL_17;
              a2 = *v15 < v17;
            }
            a3 = (unsigned int)(a3 + 1);
            ++v15;
          }
          while ( (unsigned int)a3 < v6 );
        }
        v9 = 1;
LABEL_17:
        v10 = v22;
        if ( a1[v22] != 44 )
          break;
      }
      else
      {
        a2 = 0LL;
        if ( v6 )
        {
          a3 = (char *)v7 - (char *)v23;
          v18 = v23;
          while ( *(unsigned int *)((char *)v18 + a3) == *v18 )
          {
            a2 = (unsigned int)(a2 + 1);
            ++v18;
            if ( (unsigned int)a2 >= v6 )
              goto LABEL_23;
          }
        }
        else
        {
LABEL_23:
          v9 = 1;
        }
        if ( v13 != 44 )
          break;
      }
      v11 = v10 + 1;
      v19 = a1[v11] == 35;
      ++v10;
      v22 = v11;
      if ( v19 )
        break;
    }
  }
  v20 = a1[v10];
  result = 0LL;
  if ( (_WORD)v20 == 35 )
  {
    *a4 = v9;
    *a5 = v10 + 1;
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v20, a2, a3);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
  return result;
}
