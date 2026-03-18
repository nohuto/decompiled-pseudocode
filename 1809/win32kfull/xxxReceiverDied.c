/*
 * XREFs of xxxReceiverDied @ 0x1C00BC764
 * Callers:
 *     SendMsgCleanup @ 0x1C00BC690 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C01167E0 (SuspendThreadQueue.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UnlinkSendListSms @ 0x1C00D4EBC (UnlinkSendListSms.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _QWORD v17[3]; // [rsp+50h] [rbp-58h] BYREF
  int v18; // [rsp+68h] [rbp-40h] BYREF
  __int64 v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v3 = *(_DWORD *)(a1 + 84) | 2;
  *(_DWORD *)(a1 + 84) = v3;
  if ( (*(_DWORD *)(v1 + 488) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 84) = v3 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v3 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v1 + 536);
      v7 = (_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v8 + 8) != a1 + 16 || (v9 = *(_QWORD **)(a1 + 24), (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
    }
    if ( *(_QWORD *)(v1 + 520) == v1 + 520 )
    {
      *(_WORD *)(*(_QWORD *)(v1 + 448) + 6LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)(v1 + 448) + 4LL) &= ~0x40u;
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v5 & 1) != 0 )
    {
      v16 = v5 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v16 = v5 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v16;
    SetWakeBit(result, 0x200u);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v6 = v5;
    if ( (v5 & 4) == 0 )
    {
      result = v5 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v10 = *(_QWORD *)(a1 + 112);
        v11 = v5 | 1;
        *(_DWORD *)(a1 + 84) = v11;
        v12 = 33;
        if ( (v11 & 0x400) != 0 )
          v12 = 289;
        v21 = 0LL;
        v18 = v12;
        v19 = *(_QWORD *)(a1 + 48);
        v20 = *(_QWORD *)(a1 + 56);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
        v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v17;
        v17[1] = v10;
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        xxxInterSendMsgEx(
          *(_QWORD **)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(_QWORD *)(a1 + 64),
          &v18,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v15, v14);
        LODWORD(v6) = *(_DWORD *)(a1 + 84);
      }
    }
    if ( (v6 & 0x4000) == 0 )
      return UnlinkSendListSms(a1);
  }
  return result;
}
