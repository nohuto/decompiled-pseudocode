/*
 * XREFs of PiUEventHandleVetoEvent @ 0x140700A70
 * Callers:
 *     PiUEventHandleIoctl @ 0x1405A0E4C (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     RtlStringCchCopyNW @ 0x1400F5114 (RtlStringCchCopyNW.c)
 *     PsGetProcessImageFileName @ 0x140129D40 (PsGetProcessImageFileName.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14058FA80 (PiUEventDequeuePendingEventWorker.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406683B8 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  UNICODE_STRING *v6; // rbx
  int AllocatedFullProcessImageName; // edi
  PEPROCESS v8; // r15
  char v9; // r13
  __int64 v10; // r12
  struct _FAST_MUTEX *v11; // rcx
  _QWORD *v12; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  const CHAR *ProcessImageFileName; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING v21; // [rsp+38h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  Process = 0LL;
  *(_QWORD *)&v21.Length = 0LL;
  v6 = 0LL;
  P = 0LL;
  AllocatedFullProcessImageName = 0;
  v21.Buffer = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( v5 && a2 && a3 == 8 )
  {
    v10 = *a2;
    v11 = *(struct _FAST_MUTEX **)(v5 + 16);
    *(_QWORD *)&DestinationString.Length = *a2;
    ExAcquireFastMutex(v11);
    v12 = *(_QWORD **)(v5 + 96);
    if ( v12 == (_QWORD *)(v5 + 96) )
    {
      AllocatedFullProcessImageName = -1073741811;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v12[3] + 69LL) )
    {
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v14 = v12[3];
      v15 = *(_DWORD **)(v14 + 32);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v14 + 40);
        if ( v16 )
        {
          if ( !*v15 )
          {
            if ( (_BYTE)v10 )
            {
              *v15 = *(_DWORD *)(&DestinationString.MaximumLength + 1);
              v17 = PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process);
              v8 = Process;
              if ( v17 < 0
                || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, &P),
                    AllocatedFullProcessImageName < 0) )
              {
                v6 = &v21;
                RtlInitUnicodeString(&v21, &word_140767740);
                AllocatedFullProcessImageName = 0;
              }
              else
              {
                v6 = (UNICODE_STRING *)P;
                if ( !*(_WORD *)P )
                {
                  v9 = 1;
                  ExFreePoolWithTag(P, 0);
                  v6 = &v21;
                  ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)v8);
                  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
                  RtlAnsiStringToUnicodeString(&v21, &DestinationString, 1u);
                }
              }
              if ( v6->Length > 0x400u )
              {
                AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                                  *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v12[3] + 40LL) + 8LL),
                                                  0x200uLL,
                                                  v6->Buffer,
                                                  0x1FFuLL);
                *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40LL) + 8LL) + 1022LL) = 0;
                **(_WORD **)(v12[3] + 40LL) = 1024;
              }
              else
              {
                RtlCopyUnicodeString(*(PUNICODE_STRING *)(v12[3] + 40LL), v6);
              }
              KeSetEvent(*(PRKEVENT *)(v12[3] + 24LL), 0, 0);
            }
            else
            {
              **(_WORD **)(v16 + 8) = 0;
              **(_WORD **)(v14 + 40) = 0;
              **(_DWORD **)(v14 + 32) = 0;
            }
          }
        }
      }
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    }
    PiUEventDequeuePendingEventWorker(v5, v12, 1);
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
  }
  else
  {
    AllocatedFullProcessImageName = -1073741811;
  }
  if ( v9 )
  {
    RtlFreeAnsiString(v6);
  }
  else if ( v6 && v6 != &v21 )
  {
    ExFreePoolWithTag(v6, 0);
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
LABEL_11:
  *(_QWORD *)(a5 + 8) = 0LL;
  return (unsigned int)AllocatedFullProcessImageName;
}
