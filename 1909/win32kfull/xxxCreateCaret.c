/*
 * XREFs of xxxCreateCaret @ 0x1C00F5EF4
 * Callers:
 *     NtUserCreateCaret @ 0x1C00F5E10 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     zzzInternalDestroyCaret @ 0x1C00F6070 (zzzInternalDestroyCaret.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, HBRUSH a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int ThreadId; // eax
  int v11; // ecx
  int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v15[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != v8 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 304) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v14[1] = a1;
  v14[0] = v8 + 304;
  HMAssignmentLock(v14);
  v9 = *(_DWORD *)(v8 + 312) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 316) = 1;
  *(_DWORD *)(v8 + 312) = v9 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 344) = a2;
  *(_DWORD *)(v8 + 360) = ThreadId;
  v11 = 1;
  v12 = 1;
  if ( a4 )
    v12 = a4;
  if ( a3 )
    v11 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (char *)v15);
    v12 = v15[2];
    v11 = v15[1];
  }
  *(_QWORD *)(v8 + 352) = 0LL;
  *(_DWORD *)(v8 + 332) = v12;
  *(_DWORD *)(v8 + 336) = v11;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, (struct tagWND *)a1, 4294967288LL, 0, 0);
  return 1LL;
}
