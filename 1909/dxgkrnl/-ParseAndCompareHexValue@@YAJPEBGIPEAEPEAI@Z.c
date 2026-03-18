/*
 * XREFs of ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x1C029DB24
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C029D898 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseAndCompareHexValue(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  int v6; // r11d
  char v7; // di
  int v8; // esi
  __int64 i; // rcx
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  unsigned __int8 v13; // al
  __int64 v15; // rax

  v4 = *a4;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  for ( i = a1[v4]; (_WORD)i != 35 && (_WORD)i; i = a1[v4] )
  {
    if ( (_WORD)i == 44 )
    {
      v10 = v6 == (_DWORD)a2;
      v6 = 0;
      v8 = 0;
      if ( v10 )
        v7 = 1;
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      if ( (unsigned __int16)(i - 48) > 9u && (unsigned __int16)((i | 0x20) - 97) > 5u )
        goto LABEL_19;
      v11 = (unsigned __int16)i;
      LOWORD(i) = i - 48;
      v12 = (unsigned __int16)i > 9u ? ((_BYTE)v11 - 7) & 0xF : v11 - 48;
      v4 = (unsigned int)(v4 + 1);
      v6 = v12 + 16 * v6;
      if ( (unsigned int)++v8 > 4 )
        goto LABEL_19;
    }
  }
  i = a1[v4];
  if ( (_WORD)i != 35 )
  {
LABEL_19:
    v15 = WdLogNewEntry5_WdWarning(i, a2, a3);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  v13 = v7;
  *a4 = v4 + 1;
  if ( v6 == (_DWORD)a2 )
    v13 = 1;
  *a3 = v13;
  return 0LL;
}
