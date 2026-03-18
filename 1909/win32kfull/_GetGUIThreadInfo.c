/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00DB740
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00DB600 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  struct _KTHREAD *v14; // r14
  __int64 v15; // rbp
  __int64 *v16; // rax
  int v17; // ecx
  _QWORD *v18; // rax
  int v19; // ecx
  int v20; // ecx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx

  v4 = a2;
  v5 = a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v6 = 87LL;
LABEL_3:
    UserSetLastError(v6, a2, a3, a4);
    return 0LL;
  }
  if ( a1 )
  {
    v8 = a1[53];
  }
  else
  {
    v8 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v9 = *(_QWORD *)(gpqForeground + 128LL);
    if ( v9 )
    {
      a1 = *(_QWORD **)(v9 + 16);
      if ( a1[53] == gpqForeground )
      {
        CurrentThread = KeGetCurrentThread();
        v5 = *(_QWORD **)(v9 + 16);
        v11 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v11 = *ThreadWin32Thread;
        }
        if ( *(_QWORD *)(v11 + 448) != v5[56] )
          goto LABEL_21;
      }
    }
  }
  if ( *(_QWORD *)(v8 + 304) )
  {
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    a1 = *(_QWORD **)(v8 + 304);
    a2 = a1[2];
    if ( *(_QWORD *)(a2 + 448) != *(_QWORD *)(v13 + 448) )
      goto LABEL_21;
  }
  if ( v5 )
  {
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      v16 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v16 )
        v15 = *v16;
    }
    if ( v5[56] != *(_QWORD *)(v15 + 448) )
    {
LABEL_21:
      v6 = 5LL;
      goto LABEL_3;
    }
  }
  *(_DWORD *)(v4 + 4) = 0;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( v5 )
  {
    a2 = v5[83];
    v17 = 0;
    a3 = 2LL;
    if ( a2 && (*(_DWORD *)(a2 + 196) & 8) == 0 && *(_QWORD *)(a2 + 16) )
    {
      *(_DWORD *)(v4 + 4) = 2;
      v17 = 2;
      *(_QWORD *)(v4 + 40) = **(_QWORD **)(v5[83] + 16LL);
    }
    v18 = (_QWORD *)v5[75];
    if ( v18 )
    {
      if ( *v18 )
      {
        v19 = v17 | 4;
        *(_DWORD *)(v4 + 4) = v19;
        a2 = *(unsigned int *)*v18;
        if ( (a2 & 2) != 0 )
        {
          if ( (a2 & 4) == 0 )
            goto LABEL_34;
          v20 = v19 | 8;
        }
        else
        {
          v20 = v19 | 0x10;
        }
        *(_DWORD *)(v4 + 4) = v20;
LABEL_34:
        v21 = *(_QWORD **)(*(_QWORD *)v5[75] + 8LL);
        if ( v21 )
          *(_QWORD *)(v4 + 32) = *v21;
      }
    }
  }
  v22 = *(_QWORD **)(v8 + 128);
  if ( v22 )
    v22 = (_QWORD *)*v22;
  *(_QWORD *)(v4 + 8) = v22;
  v23 = *(_QWORD **)(v8 + 120);
  if ( v23 )
    v23 = (_QWORD *)*v23;
  *(_QWORD *)(v4 + 16) = v23;
  v24 = *(_QWORD **)(v8 + 112);
  if ( v24 )
    v24 = (_QWORD *)*v24;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 24) = v24;
  v25 = *(_QWORD **)(v8 + 304);
  if ( v25 )
  {
    *(_QWORD *)(v4 + 48) = *v25;
    v26 = *(_QWORD *)(v8 + 304);
    if ( *(_QWORD *)(v26 + 16) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 136) + 8LL) + 8LL) & 0x20) == 0 )
    {
      v30 = *(_DWORD *)(v8 + 324);
      *(_DWORD *)(v4 + 56) = v30;
      *(_DWORD *)(v4 + 64) = *(_DWORD *)(v8 + 336) + v30;
      v28 = *(_DWORD *)(v8 + 328);
      *(_DWORD *)(v4 + 60) = v28;
      v29 = *(_DWORD *)(v8 + 332);
    }
    else
    {
      v27 = *(_DWORD *)(v8 + 364);
      *(_DWORD *)(v4 + 56) = v27;
      *(_DWORD *)(v4 + 64) = *(_DWORD *)(v8 + 372) + v27;
      v28 = *(_DWORD *)(v8 + 368);
      *(_DWORD *)(v4 + 60) = v28;
      v29 = *(_DWORD *)(v8 + 376);
    }
    *(_DWORD *)(v4 + 68) = v28 + v29;
    if ( !*(_DWORD *)(v8 + 316) )
      *(_DWORD *)(v4 + 4) |= 1u;
  }
  else if ( v5 && (*(_DWORD *)(v5[52] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(v5[56] + 144LL);
    *(_OWORD *)(v4 + 56) = *(_OWORD *)(v5[56] + 152LL);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
  }
  return 1LL;
}
