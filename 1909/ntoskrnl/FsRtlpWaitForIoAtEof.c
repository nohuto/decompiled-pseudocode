/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x1400EE6D4
 * Callers:
 *     FsRtlAcquireEofLock @ 0x1400EE400 (FsRtlAcquireEofLock.c)
 *     FsRtlGetIoAtEof @ 0x1401165D0 (FsRtlGetIoAtEof.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     FsRtlAcquireHeaderMutex @ 0x14003F260 (FsRtlAcquireHeaderMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14003F470 (FsRtlReleaseHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     KeQueryPriorityThread @ 0x1400EE990 (KeQueryPriorityThread.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  KSPIN_LOCK *v6; // r14
  int IoPriorityThread; // esi
  KPRIORITY PriorityThread; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  KPRIORITY v13; // ecx
  KPRIORITY v14; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD v17[8]; // [rsp+30h] [rbp-40h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  v6 = *(KSPIN_LOCK **)a1;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread((__int64)v6) < 2 )
  {
    PsBoostThreadIoEx((__int64)v6, 0, 0, 0LL);
    IoBoostThreadIoPriority(v6, IoPriorityThread, 0);
    *(_BYTE *)(a1 + 36) = 1;
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v6) )
      KeSetPriorityBoost((__int64)v6, (unsigned int)PriorityThread);
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = a1 + 8;
  while ( v9 != v10 )
  {
    v13 = *(_DWORD *)(v9 + 56);
    if ( v13 >= PriorityThread && *(_DWORD *)(v9 + 60) >= IoPriorityThread )
      break;
    v14 = PriorityThread;
    if ( PriorityThread <= v13 )
      v14 = *(_DWORD *)(v9 + 56);
    v15 = *(_DWORD *)(v9 + 60);
    *(_DWORD *)(v9 + 56) = v14;
    v16 = IoPriorityThread;
    if ( IoPriorityThread <= v15 )
      v16 = v15;
    *(_DWORD *)(v9 + 60) = v16;
    v9 = *(_QWORD *)(v9 + 8);
  }
  LOWORD(v17[2]) = 1;
  v17[4] = &v17[3];
  BYTE2(v17[2]) = 6;
  v17[3] = &v17[3];
  v11 = *(_QWORD **)(a1 + 16);
  HIDWORD(v17[2]) = 0;
  v17[6] = CurrentThread;
  v17[7] = __PAIR64__(IoPriorityThread, PriorityThread);
  v17[5] = a3;
  if ( *v11 != v10 )
    __fastfail(3u);
  v17[1] = v11;
  v17[0] = a1 + 8;
  *v11 = v17;
  *(_QWORD *)(a1 + 16) = v17;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&v17[2], Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && SHIDWORD(v17[7]) >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
