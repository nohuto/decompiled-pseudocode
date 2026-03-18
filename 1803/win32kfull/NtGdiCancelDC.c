/*
 * XREFs of NtGdiCancelDC @ 0x1C027E580
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FD94 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtGdiCancelDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  BOOL v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  v13 = 0;
  LOBYTE(v5) = 1;
  v14 = 0;
  v6 = HmgShareLockCheck(a1, v5);
  v12 = v6;
  v9 = v6 != 0;
  if ( v6 )
  {
    v10 = *(_QWORD *)(v6 + 504);
    if ( v10 )
      *(_DWORD *)(v10 + 112) |= 0x40000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v12);
  }
  GreReleaseHmgrSemaphore(v8, v7);
  return v9;
}
