/*
 * XREFs of xxxCreateCaret @ 0x1C0063BA8
 * Callers:
 *     NtUserCreateCaret @ 0x1C0063B00 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     zzzInternalDestroyCaret @ 0x1C0063D14 (zzzInternalDestroyCaret.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, HBRUSH a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v10; // eax
  unsigned int ThreadId; // eax
  int v12; // ecx
  int v13; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v15[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != v8 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 296) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v14[1] = a1;
  v14[0] = v8 + 296;
  HMAssignmentLock(v14);
  v10 = *(_DWORD *)(v8 + 304) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 308) = 1;
  *(_DWORD *)(v8 + 304) = v10 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 336) = a2;
  *(_DWORD *)(v8 + 352) = ThreadId;
  v12 = 1;
  v13 = 1;
  if ( a4 )
    v13 = a4;
  if ( a3 )
    v12 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (char *)v15);
    v13 = v15[2];
    v12 = v15[1];
  }
  *(_QWORD *)(v8 + 344) = 0LL;
  *(_DWORD *)(v8 + 324) = v13;
  *(_DWORD *)(v8 + 328) = v12;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
