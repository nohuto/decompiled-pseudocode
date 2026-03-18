/*
 * XREFs of CcCopyReadEx @ 0x1400D5990
 * Callers:
 *     CcCopyRead @ 0x1406ED310 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x140823430 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x14084D8A0 (FsRtlCopyRead.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400A9B1C (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140126200 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x140687B10 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(
        _SLIST_ENTRY *Object,
        __int64 *a2,
        unsigned int a3,
        char a4,
        void *a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r11d
  _SLIST_ENTRY *Next; // r13
  char v12; // bl
  __int64 v13; // rsi
  void *v14; // r15
  struct _KTHREAD *v15; // r12
  __int64 v16; // r10
  _SLIST_ENTRY *v17; // rax
  _DWORD *v18; // rax
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  struct _KTHREAD *v21; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v22; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v23; // [rsp+58h] [rbp-40h]
  unsigned __int8 v24; // [rsp+A0h] [rbp+8h]
  __int64 v25; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+18h]

  v26 = a3;
  LODWORD(v25) = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v10 = 0;
  if ( v10 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
    v10 = 2;
  v20 = 0LL;
  Next = Object[3].Next;
  v12 = 1;
  if ( v10 )
    v12 = a4;
  v13 = a3;
  if ( a3 + *a2 > *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL) + 8LL) )
    KeBugCheckEx(0x34u, 0x273uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v14 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v15 = a7;
  if ( ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, a7);
  if ( v12 )
    __incgsdword(0x2ED4u);
  else
    __incgsdword(0x2ED0u);
  v21 = KeGetCurrentThread();
  HIDWORD(v21[1].Timer.Header.WaitListHead.Blink) = 0;
  if ( v15 )
  {
    v22 = KeGetCurrentThread();
    if ( v15 != v22 )
      IoReferenceIoAttributionFromThread(v15, (__int64)&v20);
  }
  v24 = CcMapAndCopyFromCache((int)Object, v14, (__int64)&v25, (LODWORD(Next->Next) >> 18) & 7, v20);
  if ( v24 )
  {
    v23 = KeGetCurrentThread();
    __addgsdword(0x5E44u, HIDWORD(v23[1].Timer.Header.WaitListHead.Blink));
    if ( (_DWORD)v25 && ((__int64)Next->Next & 0x20000) == 0 )
      CcScheduleReadAheadEx(Object, a2, v26, v15);
    v16 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
    v17 = Object[3].Next;
    _InterlockedExchange64((volatile __int64 *)&v17[1], (__int64)v17[2].Next);
    _InterlockedExchange64((volatile __int64 *)&v17[1].Next + 1, *((_QWORD *)&v17[2].Next + 1));
    _InterlockedExchange64((volatile __int64 *)&v17[2], *a2);
    _InterlockedExchange64((volatile __int64 *)&v17[2].Next + 1, v13 + *a2);
    if ( (*(_DWORD *)(v16 + 152) & 0x200000) != 0
      && (unsigned int)((LODWORD(v17[2].Next) >> 12) - (*((_DWORD *)&v17[1].Next + 2) >> 12)) > 1 )
    {
      CcUpdateSharedCacheMapFlag(v16, 0x200000LL, 0LL);
    }
    v18 = a6;
    *a6 = 0;
    *((_QWORD *)v18 + 1) = v13;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
  if ( v20 )
    IoDiskIoAttributionDereference(v20);
  return v24;
}
