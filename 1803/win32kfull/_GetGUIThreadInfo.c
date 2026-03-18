/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00DE3B4
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00DE290 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  struct _KTHREAD *v8; // r14
  __int64 v9; // rbp
  __int64 *v10; // rax
  int v11; // ecx
  _QWORD *v12; // rax
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v17; // rbp
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rsi
  int v25; // ecx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v4 = 87LL;
LABEL_3:
    UserSetLastError(v4, a2);
    return 0LL;
  }
  if ( a1 )
  {
    v6 = a1[53];
  }
  else
  {
    v6 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v15 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v15 )
    {
      a1 = *(_QWORD **)(v15 + 16);
      if ( a1[53] == gpqForeground )
      {
        CurrentThread = KeGetCurrentThread();
        v3 = *(_QWORD **)(v15 + 16);
        v17 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v17 = *ThreadWin32Thread;
        }
        if ( *(_QWORD *)(v17 + 448) != v3[56] )
          goto LABEL_31;
      }
    }
  }
  if ( *(_QWORD *)(v6 + 296) )
  {
    v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    a1 = *(_QWORD **)(v6 + 296);
    a2 = a1[2];
    if ( *(_QWORD *)(a2 + 448) != *(_QWORD *)(v7 + 448) )
      goto LABEL_31;
  }
  if ( v3 )
  {
    v8 = KeGetCurrentThread();
    v9 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      v10 = (__int64 *)PsGetThreadWin32Thread(v8);
      if ( v10 )
        v9 = *v10;
    }
    if ( v3[56] != *(_QWORD *)(v9 + 448) )
    {
LABEL_31:
      v4 = 5LL;
      goto LABEL_3;
    }
  }
  *(_DWORD *)(v2 + 4) = 0;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( !v3 )
    goto LABEL_36;
  a2 = v3[83];
  v11 = 0;
  if ( a2 && (*(_DWORD *)(a2 + 196) & 8) == 0 && *(_QWORD *)(a2 + 16) )
  {
    *(_DWORD *)(v2 + 4) = 2;
    v11 = 2;
    *(_QWORD *)(v2 + 40) = **(_QWORD **)(v3[83] + 16LL);
  }
  v12 = (_QWORD *)v3[75];
  if ( !v12 || !*v12 )
    goto LABEL_36;
  v13 = v11 | 4;
  *(_DWORD *)(v2 + 4) = v13;
  a2 = *(unsigned int *)*v12;
  if ( (a2 & 2) != 0 )
  {
    if ( (a2 & 4) == 0 )
      goto LABEL_34;
    v14 = v13 | 8;
  }
  else
  {
    v14 = v13 | 0x10;
  }
  *(_DWORD *)(v2 + 4) = v14;
LABEL_34:
  v19 = *(_QWORD **)(*(_QWORD *)v3[75] + 8LL);
  if ( v19 )
    *(_QWORD *)(v2 + 32) = *v19;
LABEL_36:
  v20 = *(_QWORD **)(v6 + 120);
  if ( v20 )
    v20 = (_QWORD *)*v20;
  *(_QWORD *)(v2 + 8) = v20;
  v21 = *(_QWORD **)(v6 + 112);
  if ( v21 )
    v21 = (_QWORD *)*v21;
  *(_QWORD *)(v2 + 16) = v21;
  v22 = *(_QWORD **)(v6 + 104);
  if ( v22 )
    v22 = (_QWORD *)*v22;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 24) = v22;
  v23 = *(_QWORD **)(v6 + 296);
  if ( v23 )
  {
    *(_QWORD *)(v2 + 48) = *v23;
    v24 = *(_QWORD *)(v6 + 296);
    if ( *(_QWORD *)(v24 + 16) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 112) + 8LL) + 8LL) & 0x20) == 0 )
    {
      v28 = *(_DWORD *)(v6 + 316);
      *(_DWORD *)(v2 + 56) = v28;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v6 + 328) + v28;
      v26 = *(_DWORD *)(v6 + 320);
      *(_DWORD *)(v2 + 60) = v26;
      v27 = *(_DWORD *)(v6 + 324);
    }
    else
    {
      v25 = *(_DWORD *)(v6 + 356);
      *(_DWORD *)(v2 + 56) = v25;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v6 + 364) + v25;
      v26 = *(_DWORD *)(v6 + 360);
      *(_DWORD *)(v2 + 60) = v26;
      v27 = *(_DWORD *)(v6 + 368);
    }
    *(_DWORD *)(v2 + 68) = v26 + v27;
    if ( !*(_DWORD *)(v6 + 308) )
      *(_DWORD *)(v2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[52] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3[56] + 144LL);
    *(_OWORD *)(v2 + 56) = *(_OWORD *)(v3[56] + 152LL);
  }
  else
  {
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
  }
  return 1LL;
}
