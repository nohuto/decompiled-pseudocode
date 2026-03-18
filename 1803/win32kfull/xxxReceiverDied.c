/*
 * XREFs of xxxReceiverDied @ 0x1C000BC90
 * Callers:
 *     SendMsgCleanup @ 0x1C000BBC0 (SendMsgCleanup.c)
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     SuspendThreadQueue @ 0x1C00F78C0 (SuspendThreadQueue.c)
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  int v6; // ecx
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v20[3]; // [rsp+50h] [rbp-58h] BYREF
  int v21; // [rsp+68h] [rbp-40h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]
  __int64 v23; // [rsp+78h] [rbp-30h]
  __int64 v24; // [rsp+80h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(_DWORD *)(a1 + 84) | 2;
  *(_DWORD *)(a1 + 84) = v6;
  if ( (*(_DWORD *)(v4 + 480) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 84) = v6 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v6 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v4 + 528);
      v11 = (_QWORD *)(a1 + 16);
      a3 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a3 + 8) != a1 + 16 || (v12 = *(_QWORD **)(a1 + 24), (_QWORD *)*v12 != v11) )
        __fastfail(3u);
      *v12 = a3;
      *(_QWORD *)(a3 + 8) = v12;
      *v11 = 0LL;
    }
    if ( *(_QWORD *)(v4 + 512) == v4 + 512 )
    {
      *(_WORD *)(*(_QWORD *)(v4 + 440) + 6LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)(v4 + 440) + 4LL) &= ~0x40u;
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v8 & 1) != 0 )
    {
      v10 = v8 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v10 = v8 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v10;
    SetWakeBit(result, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v9 = v8;
    if ( (v8 & 4) == 0 )
    {
      result = v8 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v13 = *(_QWORD *)(a1 + 112);
        v14 = v8 | 1;
        *(_DWORD *)(a1 + 84) = v14;
        v15 = 33;
        if ( (v14 & 0x400) != 0 )
          v15 = 289;
        v24 = 0LL;
        v21 = v15;
        v22 = *(_QWORD *)(a1 + 48);
        v23 = *(_QWORD *)(a1 + 56);
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v20;
        v20[1] = v13;
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        xxxInterSendMsgEx(
          *(_QWORD *)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0,
          0,
          0,
          *(_QWORD *)(a1 + 64),
          (__int64)&v21,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v18, v17, v19);
        v9 = *(unsigned int *)(a1 + 84);
      }
    }
    if ( (v9 & 0x4000) == 0 )
      return UnlinkSendListSms(a1, v9, a3, a4);
  }
  return result;
}
