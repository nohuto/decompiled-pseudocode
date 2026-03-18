/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x140113E98
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140045C90 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B710 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x140113594 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeDeregisterObjectNotification @ 0x140113EF0 (KeDeregisterObjectNotification.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(PVOID Object)
{
  if ( (*((_DWORD *)Object + 78) & 0x400) != 0
    && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL)) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 78) &= ~0x400u;
  }
  *((_DWORD *)Object + 78) &= ~0x200u;
}
