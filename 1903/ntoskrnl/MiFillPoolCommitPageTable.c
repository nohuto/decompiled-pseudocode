/*
 * XREFs of MiFillPoolCommitPageTable @ 0x140023250
 * Callers:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 * Callees:
 *     MiLockPoolCommitPageTable @ 0x140022C50 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x140023084 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1400230D4 (MiLockPoolCommitWs.c)
 *     MiAssignNonPagedPoolPte @ 0x140023480 (MiAssignNonPagedPoolPte.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

int __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  char v4; // bp
  _KPROCESS *Process; // rdx
  __int64 DeepFreezeStartTime; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r10
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  if ( (*(_DWORD *)(a1 + 72) & 0x20000000) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = 0;
    if ( v3 )
    {
      do
      {
        Process = *(_KPROCESS **)(a1 + 96);
        DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
        if ( Process )
        {
          if ( (_KPROCESS *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) == Process )
            goto LABEL_5;
          MiUnlockPageTableInternal(*(_QWORD *)(a1 + 40));
          *(_QWORD *)(a1 + 96) = 0LL;
        }
        if ( !(unsigned int)MiLockPoolCommitPageTable(a1, v3) )
          KeBugCheckEx(0x1Au, 0x5310uLL, v3, 0LL, 0LL);
        DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
LABEL_5:
        v7 = *(_QWORD *)v3;
        if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v7 & 1) != 0 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              v13 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v3 >> 3) & 0x1FF));
              DeepFreezeStartTime = v7 | 0x20;
              Process = (_KPROCESS *)(unsigned __int8)v13;
              LOBYTE(Process) = v13 & 0x20;
              if ( (v13 & 0x20) == 0 )
                DeepFreezeStartTime = *(_QWORD *)v3;
              v7 = DeepFreezeStartTime;
              if ( (v13 & 0x42) != 0 )
                v7 = DeepFreezeStartTime | 0x42;
            }
          }
        }
        if ( !v7 )
          goto LABEL_12;
        if ( qword_140465B00 && (v7 & 0x10) == 0 )
          v7 &= ~qword_140465B00;
        v7 >>= 28;
        if ( v7 == 0xFFFFFFFFFLL )
          v8 = 0LL;
        else
LABEL_12:
          v8 = 8 * v7 - 0x94000000000LL;
        if ( *(_BYTE *)(a1 + 77) )
        {
          LODWORD(CurrentThread) = MiPteInShadowRange(v3, ZeroPte, DeepFreezeStartTime, 0x4000000000LL);
          if ( (_DWORD)CurrentThread )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140465BEC) && (v14 & 1) != 0 )
                v14 |= v15;
              *(_QWORD *)v3 = v14;
              LODWORD(CurrentThread) = MiWritePteShadow(v3, v14);
              goto LABEL_18;
            }
            CurrentThread = KeGetCurrentThread();
            if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v14 & 1) != 0 )
            {
              v14 |= v15;
            }
          }
          *(_QWORD *)v3 = v14;
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 16) & 1) != 0 )
          {
            v9 = MiSwizzleInvalidPte(32LL * (*(_DWORD *)(a1 + 20) & 0x1F), Process, DeepFreezeStartTime, 0x4000000000LL);
            LODWORD(CurrentThread) = MiPteInShadowRange(v3, v9, v10, v11);
            if ( !(_DWORD)CurrentThread )
              goto LABEL_16;
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140465BEC) && (v12 & 1) != 0 )
                v12 |= v16;
              *(_QWORD *)v3 = v12;
              LODWORD(CurrentThread) = MiWritePteShadow(v3, v12);
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v12 & 1) != 0 )
              {
                v12 |= v16;
              }
LABEL_16:
              *(_QWORD *)v3 = v12;
            }
LABEL_17:
            ++*(_QWORD *)(a1 + 88);
            goto LABEL_18;
          }
          LODWORD(CurrentThread) = MiAssignNonPagedPoolPte(
                                     a1,
                                     (__int64)(v3 << 25) >> 16,
                                     DeepFreezeStartTime,
                                     0x4000000000LL);
          if ( (_DWORD)CurrentThread )
            goto LABEL_17;
        }
LABEL_18:
        ++v4;
        if ( v8 )
        {
          if ( (v4 & 0xF) == 0 && *(_BYTE *)(a1 + 76) < 2u )
          {
            if ( MiWorkingSetIsContended(*(_QWORD *)(a1 + 40))
              || (LODWORD(CurrentThread) = KeShouldYieldProcessor(), (_DWORD)CurrentThread) )
            {
              MiUnlockPoolCommitWs(a1);
              LODWORD(CurrentThread) = MiLockPoolCommitWs(a1);
            }
          }
        }
        v3 = v8;
      }
      while ( v8 );
    }
  }
  return (int)CurrentThread;
}
