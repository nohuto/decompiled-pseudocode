/*
 * XREFs of CcCopyReadEx @ 0x1400AF370
 * Callers:
 *     CcCopyRead @ 0x1406CFFB0 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x1407E9970 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x140815050 (FsRtlCopyRead.c)
 * Callees:
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF25C (IoReferenceIoAttributionFromThread.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140108C50 (CcUpdateSharedCacheMapFlag.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x140639780 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        void *a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r11d
  _DWORD *v11; // r13
  unsigned __int8 v12; // si
  __int64 v13; // rdi
  void *v14; // r15
  struct _KTHREAD *v15; // r12
  unsigned int v16; // eax
  __int64 v17; // r10
  __int64 v18; // rax
  _DWORD *v19; // rax
  unsigned __int8 v21; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+18h]

  v23 = a3;
  LODWORD(v22) = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v10 = 0;
  if ( v10 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
    v10 = 2;
  v11 = (_DWORD *)Object[6];
  v12 = 1;
  if ( v10 )
    v12 = a4;
  v13 = a3;
  if ( a3 + *a2 > *(_QWORD *)(*(_QWORD *)(Object[5] + 8LL) + 8LL) )
    KeBugCheckEx(0x34u, 0x273uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v14 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v15 = a7;
  if ( (*v11 & 0x20000) != 0 )
  {
    CcScheduleReadAheadEx(Object, a2, a3, a7);
    a3 = v23;
  }
  v16 = 11988;
  if ( !v12 )
    v16 = 11984;
  __incgsdword(v16);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  if ( v15 && v15 != KeGetCurrentThread() )
  {
    IoReferenceIoAttributionFromThread(v15);
    a3 = v23;
  }
  v21 = CcMapAndCopyFromCache((int)Object, *a2, a3, v12, v14, (__int64)&v22, (*v11 >> 18) & 7, 0LL);
  if ( v21 )
  {
    __addgsdword(0x5E44u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
    if ( (_DWORD)v22 && (*v11 & 0x20000) == 0 )
      CcScheduleReadAheadEx(Object, a2, v23, v15);
    v17 = *(_QWORD *)(Object[5] + 8LL);
    v18 = Object[6];
    _InterlockedExchange64((volatile __int64 *)(v18 + 16), *(_QWORD *)(v18 + 32));
    _InterlockedExchange64((volatile __int64 *)(v18 + 24), *(_QWORD *)(v18 + 40));
    _InterlockedExchange64((volatile __int64 *)(v18 + 32), *a2);
    _InterlockedExchange64((volatile __int64 *)(v18 + 40), v13 + *a2);
    if ( (*(_DWORD *)(v17 + 152) & 0x200000) != 0
      && (unsigned int)((*(_DWORD *)(v18 + 32) >> 12) - (*(_DWORD *)(v18 + 24) >> 12)) > 1 )
    {
      CcUpdateSharedCacheMapFlag(v17, 0x200000LL, 0LL);
    }
    v19 = a6;
    *a6 = 0;
    *((_QWORD *)v19 + 1) = v13;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
  return v21;
}
