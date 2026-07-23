/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x14011934C
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int v1; // r12d
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rbx
  volatile signed __int64 *v4; // rdi
  unsigned int *v5; // rbx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned __int64 *v8; // rax
  unsigned int v9; // r15d
  char v10; // si
  unsigned __int64 v12; // [rsp+58h] [rbp+10h]
  __int64 v13; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 - v12 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  v5 = (unsigned int *)Process[2].Affinity.Bitmap[18];
  if ( v5 )
  {
    v6 = *v5;
    v7 = 1;
    if ( *v5 > 1 )
    {
      v8 = (unsigned __int64 *)(v5 + 12);
      while ( *v8 < v12 )
      {
        ++v7;
        v8 += 3;
        if ( v7 >= v6 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v5[6 * v7 + 6] == v12 && v5[6 * v7 + 8] == (_DWORD)v13 - (_DWORD)v12 )
      {
        v9 = v6 - 1;
        if ( v7 != v6 - 1 )
          memmove(&v5[6 * v7 + 4], &v5[4 * v7 + 10 + 2 * v7], 24LL * (v6 - v7 - 1));
        v1 = 0;
        *v5 = v9;
      }
    }
  }
LABEL_15:
  v10 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
