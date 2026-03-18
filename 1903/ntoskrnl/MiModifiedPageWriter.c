/*
 * XREFs of MiModifiedPageWriter @ 0x1401924B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KeQueryPriorityThread @ 0x14009AD40 (KeQueryPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400F3268 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400F33F4 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     MiCheckFreeModifiedReservations @ 0x14015B09C (MiCheckFreeModifiedReservations.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14015B92C (MiStoreCheckCompleteWriteBatch.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KEVENT *v3; // rsi
  NTSTATUS v4; // eax
  __int64 *v5; // r14
  int v6; // eax
  unsigned int v7; // ebp
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rdx
  char v15; // al
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 **v18; // rcx
  __int64 **v19; // rax
  unsigned int v20; // eax
  _QWORD *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rbp
  signed __int32 v27[8]; // [rsp+0h] [rbp-218h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-1D8h]
  PVOID Object[3]; // [rsp+48h] [rbp-1D0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID v31[6]; // [rsp+C0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v32; // [rsp+F0h] [rbp-128h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 936) = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v28 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL);
  Object[0] = (PVOID)(a1 + 104);
  v31[2] = (PVOID)(a1 + 912);
  v3 = (struct _KEVENT *)(a1 + 872);
  Object[1] = (PVOID)(a1 + 728);
  v31[0] = (PVOID)(a1 + 104);
  v31[1] = (PVOID)(a1 + 872);
  v31[3] = (PVOID)(a1 + 688);
  v31[4] = (PVOID)(a1 + 1000);
LABEL_2:
  *(_QWORD *)(a1 + 832) = 0LL;
  *(_DWORD *)(a1 + 840) = 0;
  *(_BYTE *)(a1 + 666) = 0;
  MiStoreCheckCompleteWriteBatch(a1);
  v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 666) = 1;
  if ( v4 )
  {
    while ( !*(_DWORD *)(a1 + 108) )
    {
      if ( !*(_QWORD *)(a1 + 8560) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(a1);
      v5 = (__int64 *)(a1 + 896);
      if ( (__int64 *)*v5 == v5 )
      {
        *(_BYTE *)(a1 + 665) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !KeWaitForMultipleObjects(5u, v31, WaitAny, WrPageOut, 0, 0, 0LL, &v32) )
          break;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(a1 + 665) = 0;
      }
      if ( *(_DWORD *)(a1 + 692) )
      {
        KeResetEvent((PRKEVENT)(a1 + 688));
        if ( *(_DWORD *)(a1 + 684) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
      }
      if ( *(_DWORD *)(a1 + 876) )
      {
        KeResetEvent(v3);
        _InterlockedOr(v27, 0);
        v12 = *(_DWORD *)(a1 + 7896);
        v13 = 0;
        if ( v12 )
        {
          v14 = a1 + 7904;
          do
          {
            v15 = *(_BYTE *)(*(_QWORD *)v14 + 206LL);
            if ( (v15 & 1) != 0 )
            {
              v16 = 0;
              *(_BYTE *)(*(_QWORD *)v14 + 206LL) = v15 & 0xFE;
              v17 = 64LL;
              do
              {
                v18 = *(__int64 ***)(v17 + *(_QWORD *)v14);
                if ( v18 && *v18 == (__int64 *)2575857425LL )
                {
                  v19 = *(__int64 ***)(a1 + 904);
                  if ( *v19 != v5 )
                    goto LABEL_45;
                  *v18 = v5;
                  v18[1] = (__int64 *)v19;
                  *v19 = (__int64 *)v18;
                  *(_QWORD *)(a1 + 904) = v18;
                }
                ++v16;
                v17 += 8LL;
              }
              while ( v16 < 2 );
            }
            ++v13;
            v14 += 8LL;
          }
          while ( v13 < v12 );
        }
      }
      if ( *(_DWORD *)(a1 + 1004) )
      {
        KeResetEvent((PRKEVENT)(a1 + 1000));
        MiStoreUpdateMemoryConditions(a1);
      }
      MiCheckFreeModifiedReservations(a1);
      if ( (__int64 *)*v5 == v5 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 1136);
        if ( (v6 & 1) != 0
          && (v6 & 0xFFFFFFFE) == 0
          && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1136), 0, 1) == 1 )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeResetEvent((PRKEVENT)(a1 + 728));
          goto LABEL_2;
        }
        if ( MiUseLowIoPriorityForModifiedPages(a1) )
        {
          if ( *(_QWORD *)(a1 + 8560) < *(_QWORD *)(a1 + 720) )
          {
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            goto LABEL_2;
          }
          *(_DWORD *)(a1 + 712) = 4;
          v7 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL);
          v8 = 0;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 684) )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
          v7 = -1;
          v8 = 8;
        }
        v9 = *v5;
        if ( *(__int64 **)(*v5 + 8) != v5 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
LABEL_45:
          __fastfail(3u);
        *v5 = v10;
        *(_QWORD *)(v10 + 8) = v5;
        v11 = *(_DWORD *)(v9 + 40) & 0xFFFFFFE3;
        *(_QWORD *)v9 = 97LL;
        *(_DWORD *)(v9 + 40) = v8 | v11;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        *(_QWORD *)(v9 + 200) = v9 + 208;
        MiGatherPagefilePages(v9);
        v3 = (struct _KEVENT *)(a1 + 872);
        if ( v7 != -1 )
        {
          if ( KeQueryPriorityThread(CurrentThread) != 18 )
            KeSetActualBasePriorityThread((__int64)CurrentThread, v7);
          *(_DWORD *)(a1 + 712) = 18;
          v3 = (struct _KEVENT *)(a1 + 872);
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 684) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 944));
  v20 = *(_DWORD *)(a1 + 7896);
  if ( v20 )
  {
    v21 = (_QWORD *)(a1 + 7904);
    v22 = v20;
    do
    {
      if ( *v21 )
      {
        --CurrentThread->SpecialApcDisable;
        v23 = 64LL;
        v24 = 2LL;
        do
        {
          v25 = *(_QWORD **)(v23 + *v21);
          if ( v25 )
          {
            while ( *v25 == 97LL )
            {
              *(_BYTE *)(a1 + 665) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 912), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
          }
          v23 += 8LL;
          --v24;
        }
        while ( v24 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v28);
  return KeSetEvent((PRKEVENT)(a1 + 752), 0, 0);
}
