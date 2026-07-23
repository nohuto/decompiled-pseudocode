/*
 * XREFs of PspWaitForUsermodeExit @ 0x14088CAC8
 * Callers:
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x14088BC70 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x140676AA0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = NextProcessThread )
  {
    NextProcessThread = PsGetNextProcessThread(a1, i);
    v4 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 && !*((_BYTE *)NextProcessThread + 4) )
    {
      ObfReferenceObjectWithTag(NextProcessThread, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return 0LL;
}
