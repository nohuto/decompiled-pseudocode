/*
 * XREFs of xxxCreateCaret @ 0x1C0086A94
 * Callers:
 *     NtUserCreateCaret @ 0x1C00869B0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     zzzInternalDestroyCaret @ 0x1C0088BEC (zzzInternalDestroyCaret.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  xxxWindowEvent(0x8000u, 0);
  return 1LL;
}
