/*
 * XREFs of ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C017B5D8
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 * Callees:
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004E350 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C017B7D4 (-AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ApiSetEditionEdgyProcessInertia @ 0x1C0199898 (ApiSetEditionEdgyProcessInertia.c)
 */

char __fastcall CInertiaManager::AddInertiaInfo(
        CInertiaManager *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        struct CInputDest *a4,
        struct tagInputRoutingInfo *a5,
        char a6,
        int a7,
        const struct INERTIA_INFO *a8,
        double a9,
        const struct tagRECT *a10,
        const struct _D3DMATRIX *a11)
{
  __int64 v11; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v17; // rdx
  int v18; // r8d
  CInputDest *v20; // rcx
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v22; // r9d
  int v23; // r11d
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx

  v11 = *((_QWORD *)a2 + 52);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17 = qword_1C0216910;
  if ( !qword_1C0216910 )
  {
    v17 = 100 * gliQpcFreq.QuadPart / 1000;
    qword_1C0216910 = v17;
  }
  v18 = *((_DWORD *)this + 48);
  if ( (v18 & 1) != 0
    && *((_QWORD *)this + 1) == v11
    && PerformanceCounter.QuadPart - *((_QWORD *)this + 23) <= v17
    && a9 <= *((double *)this + 5) )
  {
    return 0;
  }
  *((_QWORD *)this + 1) = v11;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = *(_QWORD *)a8;
  *((_DWORD *)this + 8) = *((_DWORD *)a8 + 2);
  *((double *)this + 5) = a9;
  *((LARGE_INTEGER *)this + 23) = PerformanceCounter;
  *((_DWORD *)this + 48) = v18 & 0xFFFFFFE7 | (8 * (a6 & 1 | (2 * (a7 & 1))));
  if ( a7 || !a4 )
  {
    *((_QWORD *)this + 16) = 0LL;
    v25 = v18 & 0xFFFFFFE5 | (8 * (a6 & 1 | (2 * (a7 & 1))));
  }
  else
  {
    *((_QWORD *)this + 16) = CInputDest::GetWindowHandle(a4);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(v20);
    v24 = 2;
    if ( a2 != DelegateThreadInfo )
      v24 = v23;
    v25 = v22 & 0xFFFFFFFD | v24;
  }
  *((_DWORD *)this + 48) = v25;
  if ( a10 )
  {
    v26 = v25 | 4;
    *((struct tagRECT *)this + 3) = *a10;
    *((struct _D3DMATRIX *)this + 1) = *a11;
  }
  else
  {
    v26 = v25 & 0xFFFFFFFB;
  }
  *((_DWORD *)this + 48) = v26;
  if ( a5 )
  {
    v26 |= 0x20u;
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)a5;
    *(_OWORD *)((char *)this + 152) = *((_OWORD *)a5 + 1);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)a5 + 2);
  }
  *((_DWORD *)this + 48) = v26 | 1;
  InputTraceLogging::Win32k::AddInertiaInfo((CInertiaManager *)((char *)this + 8));
  ApiSetEditionEdgyProcessInertia((char *)this + 8);
  return 1;
}
