/*
 * XREFs of LogFwStat @ 0x14098F79C
 * Callers:
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x14098F178 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x140991450 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409941C8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1401785D4 (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rax
  int v17; // edi
  LARGE_INTEGER v18; // rax

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_1404F2B30 = result.QuadPart;
  if ( a1 )
  {
    stru_14046BC70[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_14046BC70[v4].QuadPart);
  qword_1404F2B80 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_14042A028;
    if ( v6.QuadPart < qword_14042A028 )
      v7 = v6;
    qword_14042A028 = v7.QuadPart;
    v8.QuadPart = qword_1404F2AF0;
    if ( v6.QuadPart > qword_1404F2AF0 )
      v8 = v6;
LABEL_8:
    qword_1404F2B38 += v6.QuadPart;
    ++dword_1404F2B40;
    qword_1404F2AF0 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v18.QuadPart = qword_14042A028;
    if ( v6.QuadPart < qword_14042A028 )
      v18 = v6;
    qword_14042A028 = v18.QuadPart;
    v8.QuadPart = qword_1404F2AF0;
    if ( v6.QuadPart > qword_1404F2AF0 )
      v8 = v6;
    qword_1404F2B28 += v6.QuadPart;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      qword_1404F2B88 += v6.QuadPart;
      return (LARGE_INTEGER)qword_1404F2B30;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_1404F2B70 += v6.QuadPart;
      return (LARGE_INTEGER)qword_1404F2B30;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            qword_140509FF8 += v6.QuadPart;
        }
        else
        {
          qword_1404F2B08 = v6.QuadPart;
        }
      }
      else
      {
        v15.QuadPart = qword_14042A038;
        if ( v6.QuadPart < qword_14042A038 )
          v15 = v6;
        qword_14042A038 = v15.QuadPart;
        v16.QuadPart = qword_1404F2B00;
        if ( v6.QuadPart > qword_1404F2B00 )
          v16 = v6;
        qword_1404F2B20 += v6.QuadPart;
        qword_1404F2B18 += v6.QuadPart;
        ++dword_1404F2B14;
        qword_1404F2B00 = v16.QuadPart;
      }
      return (LARGE_INTEGER)qword_1404F2B30;
    }
    qword_1404F2B20 += v6.QuadPart;
    qword_1404F2B58 = v6.QuadPart;
  }
  else
  {
    qword_1404F2B38 += v6.QuadPart;
    qword_1404F2B50 = v6.QuadPart;
  }
LABEL_9:
  qword_1404F2B18 += v6.QuadPart;
  return (LARGE_INTEGER)qword_1404F2B30;
}
