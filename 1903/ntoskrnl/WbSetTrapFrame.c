/*
 * XREFs of WbSetTrapFrame @ 0x1405C9DD0
 * Callers:
 *     sub_1405C9A80 @ 0x1405C9A80 (sub_1405C9A80.c)
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x1409214EC (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // ebx
  __int16 v8; // ax

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
  if ( v4 && ((v8 = *(_WORD *)(v4 + 8), v8 == 332) || v8 == 452) )
  {
    return (unsigned int)WbSetWowTrapFrame(a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
      ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), 1);
    }
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ContextThreadInternal;
}
