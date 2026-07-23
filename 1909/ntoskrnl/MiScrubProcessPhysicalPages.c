/*
 * XREFs of MiScrubProcessPhysicalPages @ 0x140896518
 * Callers:
 *     MiScrubProcesses @ 0x14089CB70 (MiScrubProcesses.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140117C20 (RtlFindSetBitsEx.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D6E0 (ExGetCallBackBlockRoutine.c)
 *     MiLockAwePagesExclusive @ 0x1402D6BBC (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1402D6C04 (MiLockAweVadsExclusive.c)
 *     MiScrubAwePage @ 0x1402D7760 (MiScrubAwePage.c)
 *     MiUnlockAwePagesExclusive @ 0x1402D79A8 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402D79FC (MiUnlockAweVadsExclusive.c)
 *     MiMakePageBad @ 0x1402EC1B8 (MiMakePageBad.c)
 */

__int64 __fastcall MiScrubProcessPhysicalPages(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbp
  _KPROCESS *Process; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  ULONG64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  ULONG64 SetBits; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  ULONG_PTR v13; // rsi
  unsigned __int64 i; // r15

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  Process = CurrentThread->ApcState.Process;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = *(_QWORD *)&Process[1].IdealNode[14];
  v6 = *(_QWORD *)(v5 + 392);
  if ( v6 )
  {
    v7 = 0LL;
    v8 = ExGetCallBackBlockRoutine(*(_QWORD *)(v5 + 392));
    MiLockAwePagesExclusive(v9, (__int64)CurrentThread);
    do
    {
      if ( *(_DWORD *)(v3 + 4) )
        break;
      SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)(v6 + 16), 1uLL, v7);
      v11 = SetBits;
      if ( SetBits < v7 || SetBits == -1LL )
        break;
      v12 = v8 * SetBits;
      v13 = 48 * v8 * SetBits - 0x58000000000LL;
      for ( i = 0LL; i < v8; ++i )
      {
        if ( (int)MiScrubAwePage(a1, v12, (_DWORD *)v6) < 0 )
          MiMakePageBad(v13, 1);
        MiUnlockAwePagesExclusive(v6, (__int64)CurrentThread);
        MiUnlockAweVadsExclusive((__int64)CurrentThread);
        ++v12;
        v13 += 48LL;
        MiLockAweVadsExclusive((__int64)CurrentThread);
        MiLockAwePagesExclusive(v6, (__int64)CurrentThread);
        if ( !_bittest64(*(const signed __int64 **)(v6 + 24), v11) )
          break;
      }
      v7 = v11 + 1;
      v3 = a2;
    }
    while ( v7 < *(_QWORD *)(v6 + 16) );
    MiUnlockAwePagesExclusive(v6, (__int64)CurrentThread);
  }
  return MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
