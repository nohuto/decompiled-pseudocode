/*
 * XREFs of DbgkpSendErrorMessage @ 0x140849EA8
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1406F97B8 (DbgkForwardException.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeTestAlertThread @ 0x14001BF90 (KeTestAlertThread.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     AlpcGetMessageAttribute @ 0x1400F03E0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400F0500 (AlpcInitializeMessageAttribute.c)
 *     KeCopyExceptionRecord @ 0x14013DA30 (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401C1D90 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8A5C (PsTestProtectedProcessIncompatibility.c)
 *     MmGetSectionInformation @ 0x1406C7100 (MmGetSectionInformation.c)
 *     DbgkForwardException @ 0x1406F97B8 (DbgkForwardException.c)
 *     DbgkpDeleteErrorPort @ 0x140849B98 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140849BC4 (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084A38C (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x14084A80C (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r15
  __int64 ProcessServerSilo; // rbx
  char *v8; // rsi
  signed int started; // edi
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v12; // eax
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rax
  __int16 v23; // dx
  char v24; // r13
  int v25; // ebx
  _DWORD *MessageAttribute; // rax
  __int64 v27; // rcx
  NTSTATUS v28; // eax
  char v29; // bl
  char v31; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v34; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR RequiredBufferSize; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v37; // [rsp+68h] [rbp-98h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+80h] [rbp-80h] BYREF

  v36 = a1;
  memset(&Buffer[8], 0, 0x60uLL);
  v34.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31 = 0;
  v37 = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v8 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960;
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1788) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 960), 1, (__int64)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)MmGetSessionIdEx(Process) != ServerSiloServiceSessionId
    && Buffer[4].AllocatedAttributes != 1
    && (a2 & 2) != 0 )
  {
    v31 = DbgkpSuspendProcess(Process);
  }
  started = DbgkpStartSystemErrorHandler();
  if ( started >= 0 )
  {
    if ( DbgkErrorPortStartTimeout == -1 )
    {
      Timeout = 0LL;
    }
    else
    {
      Timeout = &v34;
      v34.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
    }
    v12 = KeWaitForSingleObject(*((PVOID *)v8 + 3), Executive, 1, 0, Timeout);
    if ( v12 == 258 || !*((_QWORD *)v8 + 1) )
    {
      started = -1073740973;
    }
    else if ( v12 == 257 || v12 == 192 )
    {
      started = -1073741749;
    }
    else
    {
      Object = 0LL;
      --CurrentThread->KernelApcDisable;
      started = 0;
      v13 = 0LL;
      ExAcquirePushLockSharedEx((ULONG_PTR)v8, 0LL);
      v14 = (void *)*((_QWORD *)v8 + 2);
      if ( (void *)Process == v14 )
      {
        started = -1073741420;
      }
      else
      {
        v13 = *((_QWORD *)v8 + 1);
        if ( v13 )
        {
          Object = (PVOID)*((_QWORD *)v8 + 2);
          ObfReferenceObjectWithTag(v14, 0x50676244u);
          _InterlockedIncrement((volatile signed __int32 *)v13);
        }
        else
        {
          started = -1073740973;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( started >= 0 )
      {
        v15 = v36;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
        v16 = 8;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(_DWORD *)(a3 + 4) = 8;
        *(_WORD *)(a3 + 4) = -32761;
        *(_DWORD *)a3 = 17826024;
        *(_DWORD *)(a3 + 40) = 7;
        *(_DWORD *)(a3 + 44) = -2147418111;
        KeCopyExceptionRecord((_OWORD *)(a3 + 48), v15);
        v17 = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        v18 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
        *(_DWORD *)(a3 + 264) = 0;
        *(_OWORD *)(a3 + 200) = v17;
        v19 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
        *(_OWORD *)(a3 + 216) = v18;
        v20 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
        *(_OWORD *)(a3 + 232) = v19;
        *(_OWORD *)(a3 + 248) = v20;
        if ( (*(_BYTE *)(Process + 1786) & 7) != 0 )
        {
          v21 = 1LL;
          *(_DWORD *)(a3 + 264) = 1;
          v16 = 9;
        }
        else
        {
          v21 = 0LL;
        }
        if ( (*(_BYTE *)(Process + 728) & 1) != 0 )
        {
          *(_DWORD *)(a3 + 264) = v16;
          v21 = v16;
        }
        v22 = *(_QWORD *)(Process + 1064);
        if ( v22 )
        {
          v23 = *(_WORD *)(v22 + 8);
          if ( v23 == 332 || v23 == 452 )
          {
            v21 = (unsigned int)v21 | 2;
            *(_DWORD *)(a3 + 264) = v21;
          }
        }
        if ( (a2 & 1) != 0 )
        {
          v21 = (unsigned int)v21 | 4;
          v24 = 1;
          *(_DWORD *)(a3 + 264) = v21;
        }
        else
        {
          v24 = 0;
        }
        LOBYTE(v21) = 1;
        v25 = PsTestProtectedProcessIncompatibility(v21, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        *MessageAttribute = 0;
        MessageAttribute[5] = v25;
        MessageAttribute[4] = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0);
        v27 = (__int64)v37;
        if ( (*(_DWORD *)(&v37[1].SwapListEntry + 1) & 1) != 0 )
          started = -1073741749;
        if ( started >= 0 )
        {
          v28 = ZwAlpcSendWaitReceivePort(
                  *(HANDLE *)(v13 + 8),
                  0x220000u,
                  (PPORT_MESSAGE)a3,
                  Buffer,
                  (PPORT_MESSAGE)a3,
                  &RequiredBufferSize,
                  0LL,
                  0LL);
          started = v28;
          if ( v28 >= 0 )
          {
            if ( v28 == 257 )
            {
              started = -1073741749;
            }
            else
            {
              if ( (*(_WORD *)(a3 + 4) & 0x2000) != 0 )
                ZwAlpcSendWaitReceivePort(*(HANDLE *)(v13 + 8), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
              started = *(_DWORD *)(a3 + 44);
              if ( started >= 0 && !v24 && started == 65538 )
              {
                v29 = v31;
                if ( v31 )
                {
                  PsThawProcess(Process, 0);
                  KeLeaveCriticalRegion();
                  v29 = 0;
                }
                started = !DbgkForwardException(v36, 1, 1) ? 0xC0000144 : 0;
                goto LABEL_53;
              }
            }
LABEL_52:
            v29 = v31;
LABEL_53:
            ObfDereferenceObjectWithTag(Object, 0x50676244u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
              DbgkpDeleteErrorPort((HANDLE *)v13);
            goto LABEL_58;
          }
          v27 = (__int64)v37;
        }
        if ( started == -1073741769 )
          DbgkpRemoveErrorPort(v27, (ULONG_PTR)v8, v13);
        goto LABEL_52;
      }
    }
  }
  v29 = v31;
LABEL_58:
  if ( v29 )
  {
    PsThawProcess(Process, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)started;
}
