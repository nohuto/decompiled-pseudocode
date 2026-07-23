/*
 * XREFs of LogFwStat @ 0x140950754
 * Callers:
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140950140 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140950440 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409523F0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409550A8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14016EF14 (BgpFwQueryPerformanceCounter.c)
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
  qword_1404C75E0 = result.QuadPart;
  if ( a1 )
  {
    stru_140440EF0[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_140440EF0[v4].QuadPart);
  qword_1404C7648 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_140404BD8;
    if ( v6.QuadPart < qword_140404BD8 )
      v7 = v6;
    qword_140404BD8 = v7.QuadPart;
    v8.QuadPart = qword_1404C75B8;
    if ( v6.QuadPart > qword_1404C75B8 )
      v8 = v6;
LABEL_8:
    qword_1404C75F8 += v6.QuadPart;
    ++dword_1404C7618;
    qword_1404C75B8 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v18.QuadPart = qword_140404BD8;
    if ( v6.QuadPart < qword_140404BD8 )
      v18 = v6;
    qword_140404BD8 = v18.QuadPart;
    v8.QuadPart = qword_1404C75B8;
    if ( v6.QuadPart > qword_1404C75B8 )
      v8 = v6;
    qword_1404C75E8 += v6.QuadPart;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      qword_1404C7640 += v6.QuadPart;
      return (LARGE_INTEGER)qword_1404C75E0;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_1404C7638 += v6.QuadPart;
      return (LARGE_INTEGER)qword_1404C75E0;
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
            qword_1404DD948 += v6.QuadPart;
        }
        else
        {
          qword_1404C75C0 = v6.QuadPart;
        }
      }
      else
      {
        v15.QuadPart = qword_140404BE8;
        if ( v6.QuadPart < qword_140404BE8 )
          v15 = v6;
        qword_140404BE8 = v15.QuadPart;
        v16.QuadPart = qword_1404C75D0;
        if ( v6.QuadPart > qword_1404C75D0 )
          v16 = v6;
        qword_1404C7600 += v6.QuadPart;
        qword_1404C75D8 += v6.QuadPart;
        ++dword_1404C75C8;
        qword_1404C75D0 = v16.QuadPart;
      }
      return (LARGE_INTEGER)qword_1404C75E0;
    }
    qword_1404C7600 += v6.QuadPart;
    qword_1404C7610 = v6.QuadPart;
  }
  else
  {
    qword_1404C75F8 += v6.QuadPart;
    qword_1404C7630 = v6.QuadPart;
  }
LABEL_9:
  qword_1404C75D8 += v6.QuadPart;
  return (LARGE_INTEGER)qword_1404C75E0;
}
