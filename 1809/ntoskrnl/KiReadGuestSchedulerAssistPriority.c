/*
 * XREFs of KiReadGuestSchedulerAssistPriority @ 0x1401B4B10
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0EC0 (KiUpdateVPBackingThreadPriority.c)
 *     KeSetThreadSchedulerAssist @ 0x140297F34 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiComputePriorityFloor @ 0x14011F940 (KiComputePriorityFloor.c)
 */

__int64 __fastcall KiReadGuestSchedulerAssistPriority(__int64 a1)
{
  int *v1; // r10
  int v3; // r9d
  int v4; // edx
  int v5; // eax

  v1 = *(int **)(a1 + 1512);
  if ( !v1 )
    return (unsigned int)*(char *)(a1 + 195);
  v3 = *v1;
  if ( (*v1 & 0x20000) == 0 )
  {
    v4 = BYTE1(v3);
    if ( (unsigned int)BYTE1(v3) - 1 > 0x1E )
      v4 = 1;
    if ( (KiVelocityFlags & 1) != 0 )
      goto LABEL_16;
    if ( (KiVelocityFlags & 8) != 0 )
    {
      v4 += *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 6);
      if ( v4 >= 16 )
        v4 = 15;
      goto LABEL_16;
    }
    v5 = *(char *)(a1 + 563);
    if ( v4 >= v5 )
    {
      if ( (unsigned int)v4 < 0x10 )
        goto LABEL_16;
      v5 = v4;
      if ( (KiVelocityFlags & 0x80u) == 0 )
        v5 = 15;
    }
    v4 = v5;
LABEL_16:
    if ( (KiVelocityFlags & 4) != 0 && (v3 & 0x100000) != 0 && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x20) != 0 && v1[5] && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x200) != 0 && (v3 & 0x10000) != 0 && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x40) != 0 && (v3 & 0x80000) != 0 && v4 < KiVpThreadSystemWorkPriority )
      LOBYTE(v4) = KiVpThreadSystemWorkPriority;
    return (unsigned int)KiComputePriorityFloor(a1, v4);
  }
  LOBYTE(v4) = 7;
  return (unsigned int)KiComputePriorityFloor(a1, v4);
}
