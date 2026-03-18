/*
 * XREFs of AMLIResumeInterpreter @ 0x1C00631E0
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0050A30 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00510A0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C005B460 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C0063450 (Simulator_CallbackWorker.c)
 * Callees:
 *     LogSchedEvent @ 0x1C002880C (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C002A790 (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1C0082858 = 0;
  pszDest = 0;
  byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C0082728 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_1C00826E8;
        if ( (__int64 *)qword_1C00826E8 == &qword_1C00826E8 )
          break;
        if ( *(__int64 **)(qword_1C00826E8 + 8) != &qword_1C00826E8 )
          goto LABEL_14;
        v1 = *(_QWORD *)qword_1C00826E8;
        if ( *(_QWORD *)(*(_QWORD *)qword_1C00826E8 + 8LL) != qword_1C00826E8 )
          goto LABEL_14;
        qword_1C00826E8 = *(_QWORD *)qword_1C00826E8;
        *(_QWORD *)(v1 + 8) = &qword_1C00826E8;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_1C00826E8;
          if ( *(__int64 **)(qword_1C00826E8 + 8) != &qword_1C00826E8 )
LABEL_14:
            __fastfail(3u);
          *v0 = qword_1C00826E8;
          v0[1] = &qword_1C00826E8;
          *(_QWORD *)(v2 + 8) = v0;
          qword_1C00826E8 = (__int64)v0;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      if ( (__int64 *)qword_1C00826E8 != &qword_1C00826E8 && (gReadyQueue & 2) == 0 )
      {
        OSQueueWorkItem(&qword_1C0082708);
        gReadyQueue |= 2u;
        LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0082700);
}
