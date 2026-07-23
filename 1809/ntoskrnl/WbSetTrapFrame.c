/*
 * XREFs of WbSetTrapFrame @ 0x1406257B4
 * Callers:
 *     WbHeapExecuteCall @ 0x140625ADC (WbHeapExecuteCall.c)
 *     sub_140625C8C @ 0x140625C8C (sub_140625C8C.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x1408E67EC (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // ebx
  __int16 v8; // ax

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v4 && ((v8 = *(_WORD *)(v4 + 8), v8 == 332) || v8 == 452) )
  {
    return (unsigned int)WbSetWowTrapFrame(a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((__int64)KeGetCurrentThread(), a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
      ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), (CONTEXT *)(a1 + 48), 0, 1, 1);
    }
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ContextThreadInternal;
}
