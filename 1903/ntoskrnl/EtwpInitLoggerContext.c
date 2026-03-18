/*
 * XREFs of EtwpInitLoggerContext @ 0x1406B6BB4
 * Callers:
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003AC0 (EtwpQueryUsedProcessorCount.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400048C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x140082040 (KeQuerySystemTimePrecise.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x140108C10 (KeInitializeMutex.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpInitializeCompression @ 0x140333E10 (EtwpInitializeCompression.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  ULONG MaximumProcessorCount; // eax
  SIZE_T v8; // rdi
  PVOID PoolWithTag; // rax
  __int64 v10; // rbx
  char *v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  char *v17; // rdi
  void *v18; // rax

  v2 = *(unsigned __int16 *)a1;
  v5 = 0;
  v6 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
    if ( (a2 & 0x400) != 0 )
      v6 = 8 * MaximumProcessorCount;
  }
  v8 = v5 + v2 + 1346 + 2 * v6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8, 0x4C777445u);
  v10 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, (unsigned int)v8);
  v11 = (char *)(v10 + 1344);
  if ( v5 )
  {
    *(_QWORD *)(v10 + 1040) = v11;
    v11 += v5;
  }
  if ( v6 )
  {
    *(_QWORD *)(v10 + 1312) = v11;
    v17 = &v11[v6];
    *(_QWORD *)(v10 + 1320) = v17;
    v11 = &v17[v6];
  }
  memmove(v11, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v10 + 152), (PCWSTR)v11);
  *(_DWORD *)(v10 + 12) = a2;
  *(_DWORD *)(v10 + 32) = 0xFFFF;
  *(_DWORD *)(v10 + 28) = -1072889856;
  *(_DWORD *)(v10 + 20) = -1072496640;
  *(_DWORD *)(v10 + 24) = -1072562176;
  *(_DWORD *)(v10 + 316) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v10 + 12) = a2 & 0x7FFFFFFF;
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v10 + 832), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v18 = (void *)(v10 + 288);
LABEL_25:
    *(_QWORD *)(v10 + 280) = v18;
    goto LABEL_16;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v18 = &EtwpGlobalSequence;
    goto LABEL_25;
  }
LABEL_16:
  *(_QWORD *)(v10 + 1328) = -1LL;
  *(_DWORD *)(v10 + 336) = 1;
  v12 = *(_QWORD *)(*(_QWORD *)qword_140466188 + 7888LL) << 12 >> 20;
  if ( (unsigned int)v12 <= 0x200 )
  {
    *(_DWORD *)(v10 + 4) = 0x2000;
  }
  else
  {
    v13 = 0x10000;
    if ( (unsigned int)v12 <= 0x400 )
      v13 = 0x4000;
    *(_DWORD *)(v10 + 4) = v13;
  }
  v14 = 2 * EtwpQueryUsedProcessorCount(v10);
  *(_DWORD *)(v10 + 240) = v14;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_21;
  if ( EtwpInitializeCompression(v15) >= 0 )
  {
    *(_DWORD *)(v10 + 240) += 4;
    v14 = *(_DWORD *)(v10 + 240);
LABEL_21:
    *(_DWORD *)(v10 + 252) = v14 + 22;
    KeQuerySystemTimePrecise((__int64 *)(v10 + 808));
    KeInitializeMutex((PRKMUTEX)(v10 + 648), 0);
    *(_QWORD *)(v10 + 704) = 0LL;
    *(_QWORD *)(v10 + 352) = v10 + 344;
    *(_QWORD *)(v10 + 344) = v10 + 344;
    *(_QWORD *)(v10 + 64) = v10 + 72;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 80) = v10 + 88;
    *(_QWORD *)(v10 + 88) = 0LL;
    *(_QWORD *)(v10 + 104) = v10 + 96;
    *(_QWORD *)(v10 + 96) = v10 + 96;
    *(_QWORD *)(v10 + 120) = v10 + 112;
    *(_QWORD *)(v10 + 112) = v10 + 112;
    *(_QWORD *)(v10 + 1032) = v10 + 1024;
    *(_QWORD *)(v10 + 1024) = v10 + 1024;
    *(_WORD *)(v10 + 1048) = 0;
    *(_QWORD *)(v10 + 1056) = 0LL;
    *(_QWORD *)(v10 + 712) = 0LL;
    KeInitializeEvent((PRKEVENT)(v10 + 472), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v10 + 496), SynchronizationEvent, 0);
    KeInitializeTimerEx((PKTIMER)(v10 + 520), SynchronizationTimer);
    KeInitializeDpc((PRKDPC)(v10 + 584), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v10);
    return v10;
  }
  ExFreePoolWithTag((PVOID)v10, 0);
  return 0LL;
}
