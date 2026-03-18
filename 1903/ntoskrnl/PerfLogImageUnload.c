/*
 * XREFs of PerfLogImageUnload @ 0x140678768
 * Callers:
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 * Callees:
 *     EtwpTraceImageUnload @ 0x14001C640 (EtwpTraceImageUnload.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     KeAreAllApcsDisabled @ 0x1400C17F0 (KeAreAllApcsDisabled.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned int v9; // ebp
  int v11; // r13d
  unsigned int v15; // esi
  _QWORD *PoolWithTag; // rbx
  int v17; // eax
  unsigned __int16 *v18; // rcx
  _QWORD v19[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  v9 = a9;
  v20 = 0LL;
  v11 = a8;
  v19[0] = 0LL;
  v19[1] = 0LL;
  if ( a2 )
  {
    if ( a9 || KeAreAllApcsDisabled() )
    {
      v15 = 512;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x41777445u);
      if ( PoolWithTag )
      {
        ObfReferenceObject(a2);
        PoolWithTag[14] = a5;
        *((_DWORD *)PoolWithTag + 30) = a6;
        *((_DWORD *)PoolWithTag + 31) = a7;
        PoolWithTag[11] = a2;
        PoolWithTag[12] = a3;
        PoolWithTag[13] = a4;
        *((_DWORD *)PoolWithTag + 32) = v11;
        KeInitializeApc(
          (__int64)PoolWithTag,
          (__int64)KeGetCurrentThread(),
          0,
          (__int64)xHalTimerWatchdogStop,
          (__int64)EtwpCancelTraceImageUnloadApc,
          (__int64)EtwpTraceImageUnloadApc,
          0,
          (__int64)PoolWithTag);
        if ( KeInsertQueueApc((__int64)PoolWithTag, 0LL, 0LL, 0) )
          return;
        ExFreePoolWithTag(PoolWithTag, 0);
        ObfDereferenceObject(a2);
      }
    }
    else
    {
      v15 = 1024;
    }
    if ( FltMgrCallbacks )
    {
      v17 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD *, __int64 *))(FltMgrCallbacks + 24))(a2, v15, v19, &v20);
      v18 = (unsigned __int16 *)v19;
      if ( v17 < 0 )
        v18 = a1;
      a1 = v18;
    }
  }
  EtwpTraceImageUnload(a1, a3, a4, a5, a6, a7, v11, v9, 0);
  if ( v20 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
}
