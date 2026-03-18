/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x140045990
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140044350 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140045BF0 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14018C1D0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x1400082F0 (KeRegisterObjectNotification.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_DWORD *Object)
{
  __int64 v2; // rdi
  int v4; // ecx

  if ( Object[72] >= Object[71] )
    return 0;
  v2 = *((_QWORD *)Object + 2);
  if ( *(_DWORD *)(v2 + 28) )
    return 0;
  if ( !Object[77] )
    return 1;
  v4 = Object[78];
  Object[78] = v4 | 0x200;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
    return 1;
  if ( (v4 & 0x400) != 0 )
    return 0;
  Object[78] = v4 | 0x600;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  KeRegisterObjectNotification(*(_QWORD *)(v2 + 8), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(Object + 130));
  return 0;
}
