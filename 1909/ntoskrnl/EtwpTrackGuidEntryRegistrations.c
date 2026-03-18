/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x1408FF944
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x1408FF4BC (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpProviderArrivalCallback @ 0x140736780 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *i; // rsi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdi
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v14; // rbx
  _BYTE v16[48]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a2 + 408;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  v8 = a2 + 128;
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v9 = 0;
  while ( !*(_DWORD *)v8 || *(unsigned __int16 *)(v8 + 6) != *a1 )
  {
    ++v9;
    v8 += 32LL;
    if ( v9 >= 8 )
      goto LABEL_18;
  }
  for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
  {
    if ( a3 == 2 )
    {
      v11 = KeGetCurrentThread();
      v12 = (__int64)(i - 2);
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(i[2] + 408LL, 0LL);
      *(_QWORD *)(i[2] + 416LL) = KeGetCurrentThread();
    }
    else
    {
      v12 = (__int64)i;
    }
    if ( (*(_BYTE *)(v12 + 98) & 1) != 0 )
    {
      EtwpProviderArrivalCallback((__int64)a1, 0, v12);
    }
    else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 768LL)) )
    {
      memset(v16, 0, sizeof(v16));
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(*(_QWORD *)(v12 + 80));
      v14 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(*(_KPROCESS **)(v12 + 80), 0, (__int64)v16);
      EtwpProviderArrivalCallback((__int64)a1, 1, v12);
      KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
      PsDetachSiloFromCurrentThread(v14);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 768LL));
    }
    if ( a3 == 2 )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v12 + 32) + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
LABEL_18:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
