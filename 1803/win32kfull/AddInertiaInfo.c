/*
 * XREFs of AddInertiaInfo @ 0x1C01FD954
 * Callers:
 *     NtUserReportInertia @ 0x1C00076E0 (NtUserReportInertia.c)
 * Callees:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01BDF64 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall AddInertiaInfo(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        int a5,
        __int64 a6,
        double a7,
        __int128 *a8,
        __int128 *a9)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v14; // rdx
  LARGE_INTEGER v15; // r8
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // ecx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = qword_1C032FC00;
  v15 = PerformanceCounter;
  if ( !qword_1C032FC00 )
  {
    v14 = 100LL * gliQpcFreq / 1000;
    qword_1C032FC00 = v14;
  }
  if ( (dword_1C032AA08 & 1) != 0
    && gInertiaInfo == a1
    && PerformanceCounter.QuadPart - qword_1C032AA00 <= v14
    && a7 <= *(double *)&qword_1C032A9A0 )
  {
    return 0LL;
  }
  gInertiaInfo = a1;
  qword_1C032A988 = a2;
  qword_1C032A990 = *(_QWORD *)a6;
  v17 = *(_DWORD *)(a6 + 8);
  qword_1C032A9A0 = *(_QWORD *)&a7;
  dword_1C032A998 = v17;
  if ( a3 )
    qword_1C032A9F8 = *a3;
  else
    qword_1C032A9F8 = 0LL;
  qword_1C032AA00 = v15.QuadPart;
  v18 = dword_1C032AA08 ^ ((unsigned __int8)dword_1C032AA08 ^ (unsigned __int8)(8 * a4)) & 8;
  dword_1C032AA08 = v18;
  if ( a5 || a1 == a3[2] )
    v19 = 0LL;
  else
    v19 = 2LL;
  v20 = v19 | v18 & 0xFFFFFFED | (16 * (a5 & 1));
  dword_1C032AA08 = v20;
  if ( a8 )
  {
    v21 = v20 | 4;
    xmmword_1C032A9A8 = *a8;
    xmmword_1C032A9B8 = *a9;
    xmmword_1C032A9C8 = a9[1];
    xmmword_1C032A9D8 = a9[2];
    xmmword_1C032A9E8 = a9[3];
  }
  else
  {
    v21 = v20 & 0xFFFFFFFB;
  }
  dword_1C032AA08 = v21 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v19);
  return 1LL;
}
