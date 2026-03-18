/*
 * XREFs of VfBeforeCallDriver @ 0x1409300A4
 * Callers:
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409244A0 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14092450C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     VfBugCheckNoStackUsage @ 0x14030A948 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver1 @ 0x14092EC8C (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x14092FCFC (VfGetPristineDispatchRoutine.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409308A0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfDeadlockBeforeCallDriver @ 0x14093BC58 (VfDeadlockBeforeCallDriver.c)
 */

__int64 __fastcall VfBeforeCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v7; // rdx
  unsigned int v8; // ebx
  KIRQL v9; // al
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rax

  if ( *(_BYTE *)(a2 + 64) != 1 && (MmVerifierData & 0x100) != 0 && !*(_QWORD *)(a2 + 8) )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) != 0 )
      v7 = *(_QWORD *)(a2 + 24);
    else
      v7 = *(_QWORD *)(a2 + 112);
    ViIrpCheckKernelAddressForIrp(a2, v7);
  }
  if ( a3 )
  {
    if ( !KeAreInterruptsEnabled() && (MmVerifierData & 0x400000) == 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140985A78 = 0LL;
      qword_140985A80 = 0LL;
      *(_BYTE *)(a3 + 157) = v9;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      BugCheckParameter1 = 192LL;
      qword_140985A70 = a2;
      VfBugCheckNoStackUsage();
    }
    *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = CurrentIrql;
    *(_DWORD *)(a3 + 188) = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
    {
      v11 = *(_QWORD *)(a2 + 80);
      if ( v11 )
      {
        if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v11 + 4) )
          *(_DWORD *)(a3 + 152) |= 2u;
      }
    }
    v8 = VfDeadlockBeforeCallDriver(a2);
    if ( !VfIoDisabled )
    {
      *(_DWORD *)(a3 + 152) |= 1u;
      IovpCallDriver1(a3);
    }
  }
  else
  {
    return (unsigned int)VfDeadlockBeforeCallDriver(a2);
  }
  return v8;
}
