/*
 * XREFs of ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C0150C74
 * Callers:
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0150A40 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x1C0150D38 (-ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C025E9A0 (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C025EB98 (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareBlockListCondition(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned __int8 *a6)
{
  const unsigned __int16 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 v22[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v24[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v25[4]; // [rsp+40h] [rbp-20h] BYREF

  v22[0] = 0;
  *a6 = 0;
  v9 = a1;
  if ( wcsncmp(a1, L"Vendor=", 7uLL) )
    goto LABEL_14;
  v13 = v9[7] == 42;
  v23 = 7;
  v14 = 9;
  if ( v13 )
  {
    if ( v9[8] != 35 )
      goto LABEL_14;
    v16 = 9LL;
LABEL_11:
    v9 += v16;
    if ( !wcsncmp(v9, L"Device=", 7uLL) )
    {
      v13 = v9[7] == 42;
      v23 = 7;
      if ( v13 )
      {
        if ( v9[8] != 35 )
          goto LABEL_14;
      }
      else
      {
        result = ParseAndCompareHexValue(v9, a3, v22, &v23);
        if ( (int)result < 0 || !v22[0] )
          return result;
        v14 = v23;
      }
      v9 += v14;
      if ( !wcsncmp(v9, L"Version=", 8uLL) )
      {
        v13 = v9[8] == 42;
        v23 = 8;
        if ( v13 )
        {
          if ( v9[9] != 35 )
            goto LABEL_14;
          v18 = 10LL;
        }
        else
        {
          v24[0] = 0;
          if ( (int)ParseIntArray(a4, v25, 4u, v24) < 0 )
          {
            v17 = WdLogNewEntry5_WdWarning(v20, v19, v21);
            *(_QWORD *)(v17 + 24) = a4;
LABEL_8:
            WdLogEvent5_WdWarning(v17);
            return 3221225485LL;
          }
          result = ParseAndCompareIntArrays(v9, v25, 4u, v22, &v23);
          if ( (int)result < 0 || !v22[0] )
            return result;
          v18 = v23;
        }
        v9 += v18;
        if ( !wcsncmp(v9, L"Model=", 6uLL) )
        {
          v13 = v9[6] == 42;
          v23 = 6;
          if ( v13 )
          {
            if ( v9[7] != 35 )
              goto LABEL_14;
          }
          else
          {
            v24[0] = a5 / 0x3E8u;
            v24[1] = a5 % 0x3E8u / 0x64;
            result = ParseAndCompareIntArrays(v9, v24, 2u, v22, &v23);
            if ( (int)result < 0 || !v22[0] )
              return result;
          }
          *a6 = 1;
          return 0LL;
        }
      }
    }
LABEL_14:
    v17 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v17 + 24) = v9;
    goto LABEL_8;
  }
  result = ParseAndCompareHexValue(v9, a2, v22, &v23);
  if ( (int)result >= 0 && v22[0] )
  {
    v16 = v23;
    goto LABEL_11;
  }
  return result;
}
