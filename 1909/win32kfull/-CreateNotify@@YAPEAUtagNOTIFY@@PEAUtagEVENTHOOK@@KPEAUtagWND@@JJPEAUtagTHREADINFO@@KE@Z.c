/*
 * XREFs of ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0006F08
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0006CA8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006E44 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 * Callees:
 *     <none>
 */

struct tagNOTIFY *__fastcall CreateNotify(
        struct tagEVENTHOOK *a1,
        int a2,
        struct tagWND *a3,
        int a4,
        int a5,
        PETHREAD *a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 *v12; // rbx
  __int64 v13; // rax
  unsigned int ThreadId; // eax
  int v15; // eax
  __int64 **v16; // rdx
  struct tagNOTIFY *result; // rax
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_1C032A200 )
  {
    result = (struct tagNOTIFY *)Win32AllocPool(72LL, 2037281621LL);
    v12 = (__int64 *)result;
    if ( !result )
      return result;
  }
  else
  {
    dword_1C032A200 = 1;
    v12 = &qword_1C032BDE0;
  }
  v12[2] = 0LL;
  if ( !a8 )
  {
    v18[0] = v12 + 2;
    v18[1] = a1;
    HMAssignmentLock(v18);
  }
  if ( a3 )
    v13 = *(_QWORD *)a3;
  else
    v13 = 0LL;
  v12[4] = v13;
  *((_DWORD *)v12 + 7) = a2;
  *((_DWORD *)v12 + 10) = a4;
  *((_DWORD *)v12 + 11) = a5;
  ThreadId = (unsigned int)PsGetThreadId(*a6);
  *((_DWORD *)v12 + 14) = 0;
  *((_DWORD *)v12 + 12) = ThreadId;
  *((_DWORD *)v12 + 13) = a7;
  *((_DWORD *)v12 + 6) = a8;
  if ( a8 )
    v15 = 0;
  else
    v15 = ~(unsigned __int8)(*((_DWORD *)a1 + 10) >> 1) & 4;
  *((_DWORD *)v12 + 14) = v15;
  v12[1] = (__int64)v12;
  *v12 = (__int64)v12;
  v12[8] = 0LL;
  if ( !a8
    && (*((_DWORD *)a1 + 10) & 8) != 0
    && (unsigned int)(a2 + 2147483646) <= 3
    && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    *((_DWORD *)v12 + 14) |= 4u;
  }
  v16 = (__int64 **)gPendingNotifiesList[1];
  if ( *v16 != (__int64 *)gPendingNotifiesList[0] )
    __fastfail(3u);
  *v12 = gPendingNotifiesList[0];
  v12[1] = (__int64)v16;
  *v16 = v12;
  gPendingNotifiesList[1] = v12;
  return (struct tagNOTIFY *)v12;
}
