/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D563C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004610 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     sub_1405CAA28 @ 0x1405CAA28 (sub_1405CAA28.c)
 *     sub_1406D57EC @ 0x1406D57EC (sub_1406D57EC.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rbx
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rdi
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 48);
        v16 = 0LL;
        if ( (int)sub_1406D57EC((int)a1 + 8, v15, 8, -1, (__int64)&v16) >= 0 )
          sub_1405CAA28(a1, v16);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KeLeaveGuardedRegion();
      if ( !v14 )
        break;
      sub_1405CAA28(a1, v14);
    }
    while ( v2 > 0 );
  }
}
