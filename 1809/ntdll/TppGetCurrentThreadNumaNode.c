/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18002E53C
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TppWorkInitialize @ 0x18002DAD4 (TppWorkInitialize.c)
 *     TpReserveTaskPost @ 0x18002FCC4 (TpReserveTaskPost.c)
 *     TppInitializeTimerSubQueue @ 0x1800300B8 (TppInitializeTimerSubQueue.c)
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     TpAllocIoCompletion @ 0x180030F30 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     RtlpTpIoAlloc @ 0x18008BF3C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 */

__int64 __fastcall TppGetCurrentThreadNumaNode(__int64 a1, _DWORD *a2, unsigned __int8 *a3)
{
  unsigned __int8 Number; // bp
  unsigned int v7; // r9d
  unsigned int v8; // edi
  unsigned __int16 Group; // r15
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    TppAdjustRunningThreadGoal(a1);
    v7 = TppNumberNodes;
  }
  v10 = 0;
  if ( v7 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      if ( ++v10 >= v7 )
        goto LABEL_8;
    }
    v8 = v10;
  }
LABEL_8:
  result = v8 < v7 ? v8 : 0;
  *a2 = result;
  if ( a3 )
    *a3 = Number;
  return result;
}
