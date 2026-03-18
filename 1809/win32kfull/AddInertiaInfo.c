/*
 * XREFs of AddInertiaInfo @ 0x1C0226660
 * Callers:
 *     NtUserReportInertia @ 0x1C0008010 (NtUserReportInertia.c)
 * Callees:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E0B10 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
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
  __int64 v9; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v15; // rdx
  LARGE_INTEGER v16; // r8
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // ecx

  v9 = *(_QWORD *)(a1 + 424);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = qword_1C031DD58;
  v16 = PerformanceCounter;
  if ( !qword_1C031DD58 )
  {
    v15 = 100LL * gliQpcFreq / 1000;
    qword_1C031DD58 = v15;
  }
  if ( (dword_1C0318928 & 1) != 0
    && gInertiaInfo == v9
    && PerformanceCounter.QuadPart - qword_1C0318920 <= v15
    && a7 <= *(double *)&qword_1C03188C0 )
  {
    return 0LL;
  }
  gInertiaInfo = v9;
  qword_1C03188A8 = a2;
  qword_1C03188B0 = *(_QWORD *)a6;
  v18 = *(_DWORD *)(a6 + 8);
  qword_1C03188C0 = *(_QWORD *)&a7;
  dword_1C03188B8 = v18;
  if ( a3 )
    qword_1C0318918 = *a3;
  else
    qword_1C0318918 = 0LL;
  qword_1C0318920 = v16.QuadPart;
  v19 = dword_1C0318928 ^ ((unsigned __int8)dword_1C0318928 ^ (unsigned __int8)(8 * a4)) & 8;
  dword_1C0318928 = v19;
  if ( a5 || a1 == a3[2] )
    v20 = 0LL;
  else
    v20 = 2LL;
  v21 = v20 | v19 & 0xFFFFFFED | (16 * (a5 & 1));
  dword_1C0318928 = v21;
  if ( a8 )
  {
    v22 = v21 | 4;
    xmmword_1C03188C8 = *a8;
    xmmword_1C03188D8 = *a9;
    xmmword_1C03188E8 = a9[1];
    xmmword_1C03188F8 = a9[2];
    xmmword_1C0318908 = a9[3];
  }
  else
  {
    v22 = v21 & 0xFFFFFFFB;
  }
  dword_1C0318928 = v22 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v20);
  return 1LL;
}
