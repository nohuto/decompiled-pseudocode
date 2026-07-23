/*
 * XREFs of WbSetWowTrapFrame @ 0x1409214EC
 * Callers:
 *     WbSetTrapFrame @ 0x1405C9DD0 (WbSetTrapFrame.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C9B9C (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(ULONG *a1, ULONG *a2)
{
  unsigned __int64 v4; // rax
  __int16 v5; // di
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  int ContextThread; // ebx

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
  if ( !v4 )
    return (unsigned int)-1073741637;
  v5 = *(_WORD *)(v4 + 8);
  if ( !v5 )
    return (unsigned int)-1073741637;
  if ( v5 != 332 )
  {
    if ( v5 == 452 )
    {
      v6 = 416;
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  v6 = 716;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( v5 == 332 )
    v8 = 65537;
  else
    v8 = 2097153;
  a1[12] = v8;
  ContextThread = PspWow64GetContextThread((__int64)KeGetCurrentThread(), a1 + 12, v6, 0);
  if ( ContextThread >= 0 )
  {
    if ( v5 == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread(), (unsigned __int64)(a1 + 12), v6, 0);
  }
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)ContextThread;
}
