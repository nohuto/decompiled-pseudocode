/*
 * XREFs of xxxCreateCaret @ 0x1C00DDB70
 * Callers:
 *     NtUserCreateCaret @ 0x1C00DDAB0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     zzzInternalDestroyCaret @ 0x1C00DDCEC (zzzInternalDestroyCaret.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, HSURF a2, int a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int ThreadId; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v19[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v19, 0, sizeof(v19));
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) != v8 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 296) )
  {
    zzzInternalDestroyCaret(v10, v9, v11, v12);
    v8 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v18[1] = a1;
  v18[0] = v8 + 296;
  HMAssignmentLock(v18);
  v13 = *(_DWORD *)(v8 + 304) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 308) = 1;
  *(_DWORD *)(v8 + 304) = v13 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 336) = a2;
  *(_DWORD *)(v8 + 352) = ThreadId;
  v15 = 1;
  v16 = 1;
  if ( a4 )
    v16 = a4;
  if ( a3 )
    v15 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (char *)v19);
    v16 = v19[2];
    v15 = v19[1];
  }
  *(_QWORD *)(v8 + 344) = 0LL;
  *(_DWORD *)(v8 + 324) = v16;
  *(_DWORD *)(v8 + 328) = v15;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
