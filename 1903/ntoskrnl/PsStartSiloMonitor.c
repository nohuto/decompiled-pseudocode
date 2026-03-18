/*
 * XREFs of PsStartSiloMonitor @ 0x14077B960
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     PspReleasePushLockExclusive @ 0x140197CE4 (PspReleasePushLockExclusive.c)
 *     PspAcquirePushLockExclusive @ 0x140197EDC (PspAcquirePushLockExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspGetServerSiloStatePointer @ 0x140306C60 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140613848 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x14077BAB8 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x1408CA0D8 (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  void *i; // rcx
  void *NextSilo; // rax
  char v6; // si
  int v7; // ebp
  void *j; // rcx
  void *v9; // rax
  void *v10; // rdi
  __int64 *v11; // rax
  __int64 HostSilo; // rsi
  void *v14; // r8
  int v15; // esi
  void *k; // rcx
  void *v17; // rax
  void *v18; // rdi
  __int64 v19; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  PspAcquirePushLockExclusive();
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v14 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        if ( !NextSilo )
          break;
        v3 = (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1);
        if ( (unsigned int)v3 <= 2 )
        {
          v2 = -1073741637;
          goto LABEL_13;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_8;
      KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
      HostSilo = PsGetHostSilo();
      v2 = PspInvokeCreateCallback(HostSilo, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(HostSilo, a1);
      KeUnstackDetachProcess(&ApcState);
      if ( v2 >= 0 )
      {
LABEL_8:
        v6 = 0;
        v7 = 0;
        KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
        for ( j = 0LL; ; j = v10 )
        {
          v9 = PspGetNextSilo(j, 1);
          v10 = v9;
          if ( !v9 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v9) - 1) <= 2 )
          {
            ++v7;
            if ( (int)PspInvokeCreateCallback(v10, a1) < 0 )
              v6 = 1;
          }
        }
        KeUnstackDetachProcess(&ApcState);
        if ( v6 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v15 = 0;
            KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
            for ( k = 0LL; ; k = v18 )
            {
              v17 = PspGetNextSilo(k, 1);
              v18 = v17;
              if ( !v17 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v17) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v18, a1);
                ++v15;
              }
            }
            if ( v7 != v15 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v19 = PsGetHostSilo();
              PspInvokeCreateCallback(v19, a1);
            }
            KeUnstackDetachProcess(&ApcState);
          }
          v2 = -1073741248;
        }
        else
        {
          v11 = (__int64 *)qword_140436A68;
          v3 = (__int64)&PspSiloMonitorList;
          if ( *(__int64 **)qword_140436A68 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v11;
          *v11 = a1;
          qword_140436A68 = a1;
        }
      }
    }
  }
LABEL_13:
  PspReleasePushLockExclusive(v3);
  return (unsigned int)v2;
}
