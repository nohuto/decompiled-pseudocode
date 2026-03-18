/*
 * XREFs of DispatchCtxtQueue @ 0x1C0026820
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  char v1; // cl
  _QWORD *v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = gReadyQueue & 0xFD;
  byte_1C0082700 = v0;
  gReadyQueue &= ~2u;
  if ( (__int64 *)qword_1C00826E8 != &qword_1C00826E8
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v1 & 8) == 0 )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)qword_1C00826E8;
      if ( (__int64 *)qword_1C00826E8 == &qword_1C00826E8 )
        break;
      if ( *(__int64 **)(qword_1C00826E8 + 8) != &qword_1C00826E8
        || (v3 = *(_QWORD *)qword_1C00826E8, *(_QWORD *)(*(_QWORD *)qword_1C00826E8 + 8LL) != qword_1C00826E8) )
      {
        __fastfail(3u);
      }
      qword_1C00826E8 = *(_QWORD *)qword_1C00826E8;
      *(_QWORD *)(v3 + 8) = &qword_1C00826E8;
      v2[1] = v2;
      *v2 = v2;
      v4 = v2 - 4;
      *((_DWORD *)v4 + 16) &= ~0x40u;
      RunContext((PSLIST_ENTRY)v4);
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0082700);
}
