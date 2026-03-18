/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1408C9830
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     PspReleasePushLockExclusive @ 0x140198344 (PspReleasePushLockExclusive.c)
 *     PspAcquirePushLockExclusive @ 0x14019853C (PspAcquirePushLockExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspGetHostSiloStorage @ 0x1403066DC (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x140306710 (PspGetServerSiloStatePointer.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x140615358 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x1408CD158 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x1408CD1F0 (PspStorageRemoveObject.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  PVOID *v2; // rcx
  void (__fastcall *v3)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v6; // rdi
  __int64 HostSilo; // rax
  __int64 HostSiloStorage; // rax
  __int64 v9; // r8
  int v10; // edi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  PspAcquirePushLockExclusive();
  v3 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
      for ( i = 0LL; ; i = v6 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v6 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v6);
      }
      if ( *((_BYTE *)P + 16) )
      {
        HostSilo = PsGetHostSilo();
        P[4](HostSilo);
      }
      KeUnstackDetachProcess(&ApcState);
      v3 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v3 + 1) != P || (v2 = (PVOID *)P[1], *v2 != P) )
      __fastfail(3u);
    *v2 = v3;
    *((_QWORD *)v3 + 1) = v2;
    *P = 0LL;
    P[1] = 0LL;
  }
  PspReleasePushLockExclusive((__int64)v2);
  if ( *((_BYTE *)P + 16) )
  {
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v9) = 1;
    v10 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v9, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v10 )
    {
      if ( v10 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
