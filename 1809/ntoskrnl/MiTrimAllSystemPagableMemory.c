/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x1402B3D80
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x1402B4510 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x140925C08 (MmVerifierTrimMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiPurgePartitionStandby @ 0x140151F1C (MiPurgePartitionStandby.c)
 *     MiEmptyTargetedWorkingSet @ 0x1402B31C8 (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  _DWORD *v2; // r14
  unsigned __int64 SessionVm; // rbx
  _DWORD *v4; // rsi
  __int64 v6; // r12
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  unsigned int v11; // edi
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // r13d
  __int16 v14; // dx
  __int64 v15; // rcx
  ULONG_PTR *v16; // rcx

  v2 = &unk_14043BF68;
  SessionVm = 1LL;
  v4 = &unk_14043C140;
  v6 = 3LL;
  if ( !a1 )
  {
    v7 = 0;
    v8 = &unk_14043BF68;
    v9 = &unk_14043C140;
    do
    {
      SessionVm = (unsigned __int64)v9;
      if ( v9 && *v8 != v9[1] )
        break;
      ++v7;
      v9 += 68;
      ++v8;
    }
    while ( v7 < 3 );
    if ( v7 == 6 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_14043BF48) <= 1 && KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    CurrentThread->SpecialApcDisable += v14;
    if ( !a1 )
    {
      do
      {
        SessionVm = (unsigned __int64)v4;
        if ( v4 && *v2 != v4[1] )
        {
          v11 = 1;
          MiEmptyTargetedWorkingSet((__int64)v4);
          *v2 = v4[1];
        }
        v4 += 68;
        ++v2;
        --v6;
      }
      while ( v6 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      SessionVm = (unsigned __int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
      v15 = SessionVm;
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      {
LABEL_22:
        if ( a2 == 1 && v11 == 1 )
        {
          if ( a1 == 1 )
            v16 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
          else
            v16 = &MiSystemPartition;
          MiPurgePartitionStandby((__int64)v16, 8u);
        }
        goto LABEL_28;
      }
      SessionVm = MiGetSessionVm();
      v15 = SessionVm;
    }
    MiEmptyTargetedWorkingSet(v15);
    v11 = 1;
    goto LABEL_22;
  }
LABEL_28:
  _InterlockedDecrement(&dword_14043BF48);
  if ( v13 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v11;
}
