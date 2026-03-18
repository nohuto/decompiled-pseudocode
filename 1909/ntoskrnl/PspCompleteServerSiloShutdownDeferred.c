/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PspSendJobNotification @ 0x1400EBD44 (PspSendJobNotification.c)
 *     PsGetServerSiloState @ 0x14012D970 (PsGetServerSiloState.c)
 *     PspUnlockJob @ 0x140613420 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x140613488 (PspLockJobShared.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C4D74 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C59D0 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x1408C9BC8 (PspNotifyServerSiloTermination.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(_QWORD *Object)
{
  void *ServerSiloGlobals; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rdi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  if ( (unsigned int)PsGetServerSiloState(v3) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 110);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 110) = 0LL;
  }
  v5 = (void *)*((_QWORD *)ServerSiloGlobals + 111);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)ServerSiloGlobals + 111) = 0LL;
  }
  PspNotifyServerSiloTermination(Object);
  PspDeleteExternalServerSiloState(Object);
  v6 = (void *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  v7 = *((_DWORD *)ServerSiloGlobals + 273);
  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
  if ( Object[57] && (*((_DWORD *)Object + 219) & 0x2000) != 0 )
    PspSendJobNotification((__int64)Object, 13LL, v7, 0);
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  return ObfDereferenceObject(Object);
}
