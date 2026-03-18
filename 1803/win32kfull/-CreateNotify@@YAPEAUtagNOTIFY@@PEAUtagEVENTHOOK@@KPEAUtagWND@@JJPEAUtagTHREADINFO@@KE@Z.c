/*
 * XREFs of ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0106524
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00063FC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0106460 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
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
  int v15; // edx
  struct tagNOTIFY *result; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_1C0326B30 )
  {
    result = (struct tagNOTIFY *)Win32AllocPool(64LL, 2037281621LL);
    v12 = (__int64 *)result;
    if ( !result )
      return result;
  }
  else
  {
    dword_1C0326B30 = 1;
    v12 = &qword_1C032AC40;
  }
  v12[1] = 0LL;
  if ( !a8 )
  {
    v17[0] = v12 + 1;
    v17[1] = a1;
    HMAssignmentLock(v17);
  }
  if ( a3 )
    v13 = *(_QWORD *)a3;
  else
    v13 = 0LL;
  v12[3] = v13;
  *((_DWORD *)v12 + 5) = a2;
  *((_DWORD *)v12 + 8) = a4;
  *((_DWORD *)v12 + 9) = a5;
  ThreadId = (unsigned int)PsGetThreadId(*a6);
  *((_DWORD *)v12 + 12) = 0;
  *((_DWORD *)v12 + 10) = ThreadId;
  *((_DWORD *)v12 + 11) = a7;
  *((_DWORD *)v12 + 4) = a8;
  if ( a8 )
    v15 = 0;
  else
    v15 = ~(*((_DWORD *)a1 + 10) >> 1) & 4;
  *v12 = 0LL;
  v12[7] = 0LL;
  *((_DWORD *)v12 + 12) = v15;
  if ( !a8 && (*((_DWORD *)a1 + 10) & 8) != 0 && (unsigned int)(a2 + 2147483646) <= 3 )
  {
    if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      v15 = 4;
    *((_DWORD *)v12 + 12) = v15;
  }
  if ( gpPendingNotifies )
    *(_QWORD *)gpLastPendingNotify = v12;
  else
    gpPendingNotifies = (struct tagNOTIFY **)v12;
  gpLastPendingNotify = (__int64)v12;
  return (struct tagNOTIFY *)v12;
}
