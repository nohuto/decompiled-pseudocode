/*
 * XREFs of AMLIPauseInterpreter @ 0x1C00630B0
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0050F90 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00514E0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x1C005B3B0 (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     Simulator_PauseInterpreter @ 0x1C00639A0 (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x1C002880C (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C0082728;
    byte_1C0082700 = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_1C0082738;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_1C0082738 != &qword_1C0082730 )
        __fastfail(3u);
      *a1 = &qword_1C0082730;
      a1[1] = v4;
      *v4 = a1;
      qword_1C0082738 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, byte_1C0082700);
    LogSchedEvent(1346458963, 0LL, v1, 0LL, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
