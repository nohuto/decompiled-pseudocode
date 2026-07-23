/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B1F60
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 *     sub_1406B20DC @ 0x1406B20DC (sub_1406B20DC.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rdi
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rbx
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = (unsigned __int64 *)(a1 + 80);
    v5 = (_QWORD *)(a1 + 64);
    v6 = (unsigned __int64 *)(a1 + 48);
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
      if ( v9 )
        BYTE2(v9[1].Left) |= 1u;
      v10 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        ExfAcquirePushLockExclusiveEx(v3, v10, (ULONG_PTR)v3);
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      v12 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
      {
        v12 = 0LL;
      }
      else
      {
        if ( (_QWORD *)v12[1] != v5 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
          __fastfail(3u);
        *v5 = v13;
        *(_QWORD *)(v13 + 8) = v5;
      }
      v14 = 0LL;
      if ( v12 )
      {
        *((_DWORD *)v12 + 4) &= ~1u;
        v14 = (__int64)v12;
      }
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 48);
        v18 = 0LL;
        if ( (int)sub_1406B20DC((int)a1 + 8, v16, 8, -1, (__int64)&v18) >= 0 )
          sub_140625A74(a1, v18);
      }
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v14 )
        break;
      sub_140625A74(a1, v14);
    }
    while ( v2 > 0 );
  }
}
