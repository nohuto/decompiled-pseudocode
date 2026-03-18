/*
 * XREFs of PfTStart @ 0x1407781E8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A7D58 (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x1408A1E04 (PfpParametersPropagate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PfFbBufferListUpdateMax @ 0x14013D770 (PfFbBufferListUpdateMax.c)
 *     PfFbBufferListAllocate @ 0x140195E70 (PfFbBufferListAllocate.c)
 *     PfTAccessTracingStart @ 0x14059E354 (PfTAccessTracingStart.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsEnumProcesses @ 0x140635888 (PsEnumProcesses.c)
 *     PsCreateSystemThreadEx @ 0x1406B4000 (PsCreateSystemThreadEx.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     PfTAllocateBuffers @ 0x140778474 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x1407785F0 (PfpCreateEvent.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 */

__int64 __fastcall PfTStart(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // edi
  int SystemThread; // esi
  HANDLE v6; // rcx
  _SLIST_ENTRY *v7; // rcx
  _SLIST_ENTRY *v8; // rcx
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Handle = a2;
  v3 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (a3 & 1) != 0 && (xmmword_140467984 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_140467984 & 1) == 0 && (_DWORD)qword_1404679A0 != 1 && HIDWORD(qword_1404679A0) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    SystemThread = PfTAllocateBuffers(a1 + 24, 0x8000LL, 8LL, 1112303184LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PfTAllocateBuffers(a1 + 64, 81960LL, 2LL, 1413834320LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)PfTLoggingWorker,
                     a1 + 104,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = Handle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v6, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    SystemThread = PfpCreateEvent(&DestinationString, 1LL, a1 + 616);
    if ( SystemThread < 0 )
    {
LABEL_30:
      PfTCleanup(a1);
      PfTInitialize(a1, v10, 1);
      return (unsigned int)SystemThread;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v7, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v8, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_140467984);
    if ( dword_140467818 < (unsigned int)dword_14046781C )
      PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 2);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_140467984);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v11, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 1);
  }
  return 0;
}
