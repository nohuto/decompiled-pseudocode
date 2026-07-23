/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x1400E1528
 * Callers:
 *     FsRtlAcquireEofLock @ 0x1400E12D0 (FsRtlAcquireEofLock.c)
 *     FsRtlGetIoAtEof @ 0x1400E1810 (FsRtlGetIoAtEof.c)
 * Callees:
 *     FsRtlAcquireHeaderMutex @ 0x14004E0B0 (FsRtlAcquireHeaderMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400511C0 (FsRtlReleaseHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v5; // r14
  int IoPriorityThread; // esi
  KPRIORITY PriorityThread; // edi
  _SINGLE_LIST_ENTRY *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax
  KPRIORITY v15; // ecx
  KPRIORITY v16; // eax
  int v17; // ecx
  int v18; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v21; // [rsp+42h] [rbp-2Eh]
  int v22; // [rsp+44h] [rbp-2Ch]
  _QWORD v23[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(struct _KTHREAD **)a1;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread((__int64)v5) < 2 )
  {
    PsBoostThreadIoEx((__int64)v5, 0, 0, 0LL);
    IoBoostThreadIoPriority(v5, (unsigned int)IoPriorityThread, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread(v5) )
      KeSetPriorityBoost((__int64)v5, (unsigned int)PriorityThread, v9, v10);
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = a1 + 8;
  while ( v11 != v12 )
  {
    v15 = *(_DWORD *)(v11 + 56);
    if ( v15 >= PriorityThread && *(_DWORD *)(v11 + 60) >= IoPriorityThread )
      break;
    v16 = PriorityThread;
    if ( PriorityThread <= v15 )
      v16 = *(_DWORD *)(v11 + 56);
    v17 = *(_DWORD *)(v11 + 60);
    *(_DWORD *)(v11 + 56) = v16;
    v18 = IoPriorityThread;
    if ( IoPriorityThread <= v17 )
      v18 = v17;
    *(_DWORD *)(v11 + 60) = v18;
    v11 = *(_QWORD *)(v11 + 8);
  }
  Object = 1;
  v23[1] = v23;
  v21 = 6;
  v23[0] = v23;
  v13 = *(_QWORD **)(a1 + 16);
  v22 = 0;
  v23[3] = CurrentThread;
  v24 = PriorityThread;
  v25 = IoPriorityThread;
  v23[2] = a3;
  if ( *v13 != v12 )
    __fastfail(3u);
  v19[1] = v13;
  v19[0] = a1 + 8;
  *v13 = v19;
  *(_QWORD *)(a1 + 16) = v19;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v25 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
