/*
 * XREFs of xxxReceiverDied @ 0x1C000EAC4
 * Callers:
 *     SendMsgCleanup @ 0x1C000E9F0 (SendMsgCleanup.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     SuspendThreadQueue @ 0x1C01211E0 (SuspendThreadQueue.c)
 * Callees:
 *     UnlinkSendListSms @ 0x1C002441C (UnlinkSendListSms.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // [rsp+50h] [rbp+7h] BYREF
  __int64 v16; // [rsp+58h] [rbp+Fh]
  __int64 v17; // [rsp+60h] [rbp+17h]
  _DWORD v18[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+70h] [rbp+27h]
  __int64 v20; // [rsp+78h] [rbp+2Fh]
  __int64 v21; // [rsp+80h] [rbp+37h]
  __int128 v22; // [rsp+88h] [rbp+3Fh]

  v1 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v3 = *(_DWORD *)(a1 + 84) | 2;
  *(_DWORD *)(a1 + 84) = v3;
  if ( (*(_DWORD *)(v1 + 480) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 84) = v3 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v3 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v1 + 528);
      v8 = (_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 16 || (v10 = *(_QWORD **)(a1 + 24), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
    }
    if ( *(_QWORD *)(v1 + 512) == v1 + 512 )
    {
      *(_WORD *)(*(_QWORD *)(v1 + 440) + 6LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)(v1 + 440) + 4LL) &= ~0x40u;
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v5 & 1) != 0 )
    {
      v7 = v5 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v7 = v5 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v7;
    SetWakeBit(result, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    LOWORD(v6) = *(_DWORD *)(a1 + 84);
    if ( (v5 & 4) == 0 )
    {
      result = v5 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v11 = *(_QWORD *)(a1 + 112);
        v18[1] = 0;
        v12 = v5 | 1;
        v15 = 0LL;
        v16 = 0LL;
        v17 = 0LL;
        v13 = 33;
        *(_DWORD *)(a1 + 84) = v12;
        if ( (v12 & 0x400) != 0 )
          v13 = 289;
        v21 = 0LL;
        v18[0] = v13;
        v19 = *(_QWORD *)(a1 + 48);
        v20 = *(_QWORD *)(a1 + 56);
        v22 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v15 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
        v16 = v11;
        if ( v11 )
          HMLockObject(v11);
        xxxInterSendMsgEx(
          *(_QWORD *)(a1 + 112),
          *(unsigned int *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(_QWORD *)(a1 + 64),
          v18,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1();
        v6 = *(_DWORD *)(a1 + 84);
      }
    }
    if ( (v6 & 0x4000) == 0 )
      return UnlinkSendListSms(a1);
  }
  return result;
}
