/*
 * XREFs of LogFwStat @ 0x14094F754
 * Callers:
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x14094F140 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x14095129C (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409513F0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409540A8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14016EDF4 (BgpFwQueryPerformanceCounter.c)
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
  qword_1404C6538 = result.QuadPart;
  if ( a1 )
  {
    stru_14043FE30[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_14043FE30[v4].QuadPart);
  qword_1404C6588 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_140403BD8;
    if ( v6.QuadPart < qword_140403BD8 )
      v7 = v6;
    qword_140403BD8 = v7.QuadPart;
    v8.QuadPart = qword_1404C64F8;
    if ( v6.QuadPart > qword_1404C64F8 )
      v8 = v6;
LABEL_8:
    qword_1404C6540 += v6.QuadPart;
    ++dword_1404C6548;
    qword_1404C64F8 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v18.QuadPart = qword_140403BD8;
    if ( v6.QuadPart < qword_140403BD8 )
      v18 = v6;
    qword_140403BD8 = v18.QuadPart;
    v8.QuadPart = qword_1404C64F8;
    if ( v6.QuadPart > qword_1404C64F8 )
      v8 = v6;
    qword_1404C6530 += v6.QuadPart;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      qword_1404C6590 += v6.QuadPart;
      return (LARGE_INTEGER)qword_1404C6538;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_1404C6578 += v6.QuadPart;
      return (LARGE_INTEGER)qword_1404C6538;
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
            qword_1404DC888 += v6.QuadPart;
        }
        else
        {
          qword_1404C6520 = v6.QuadPart;
        }
      }
      else
      {
        v15.QuadPart = qword_140403BE8;
        if ( v6.QuadPart < qword_140403BE8 )
          v15 = v6;
        qword_140403BE8 = v15.QuadPart;
        v16.QuadPart = qword_1404C6508;
        if ( v6.QuadPart > qword_1404C6508 )
          v16 = v6;
        qword_1404C6528 += v6.QuadPart;
        qword_1404C6518 += v6.QuadPart;
        ++dword_1404C6500;
        qword_1404C6508 = v16.QuadPart;
      }
      return (LARGE_INTEGER)qword_1404C6538;
    }
    qword_1404C6528 += v6.QuadPart;
    qword_1404C6560 = v6.QuadPart;
  }
  else
  {
    qword_1404C6540 += v6.QuadPart;
    qword_1404C6558 = v6.QuadPart;
  }
LABEL_9:
  qword_1404C6518 += v6.QuadPart;
  return (LARGE_INTEGER)qword_1404C6538;
}
