/*
 * XREFs of PsCallImageNotifyRoutines @ 0x1405F60F0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExDereferenceCallBackBlock @ 0x140088A90 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x140088EF0 (ExGetCallBackBlockContext.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PerfLogImageLoad @ 0x1405F6AD4 (PerfLogImageLoad.c)
 */

_QWORD *__fastcall PsCallImageNotifyRoutines(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r15
  __int64 v10; // rdi
  _DWORD *v11; // r14
  _RTL_RUN_ONCE *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  void (__fastcall *v16)(_BYTE *, __int64, _DWORD *); // r9
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v18 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, _BYTE *, __int64 *))(FltMgrCallbacks + 24))(a4, 1024LL, v17, &v18) >= 0 )
  {
    a1 = v17;
  }
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 736);
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(a1, a2, a3 + 8);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *(_DWORD *)(a3 + 8) |= 0x400u;
    v10 = 64LL;
    v11 = (_DWORD *)(a3 + 8);
    *(_QWORD *)a3 = 56LL;
    *(_QWORD *)(a3 + 48) = a4;
    v12 = &PspLoadImageNotifyRoutine;
    do
    {
      v13 = ExReferenceCallBackBlock((signed __int64 *)v12);
      v14 = v13;
      if ( v13 )
      {
        v16 = (void (__fastcall *)(_BYTE *, __int64, _DWORD *))ExGetCallBackBlockRoutine((__int64)v13);
        if ( ((*v11 & 0x800) == 0 || (ExGetCallBackBlockContext((__int64)v14) & 1) != 0) && v16 )
          v16(a1, v9, v11);
        ExDereferenceCallBackBlock((signed __int64 *)v12, v14);
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  if ( v18 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
