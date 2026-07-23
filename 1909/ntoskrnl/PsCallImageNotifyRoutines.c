/*
 * XREFs of PsCallImageNotifyRoutines @ 0x1405EC0D0
 * Callers:
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14001D240 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeAreAllApcsDisabled @ 0x1400A1670 (KeAreAllApcsDisabled.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PerfLogImageLoad @ 0x1405EC97C (PerfLogImageLoad.c)
 */

_QWORD *__fastcall PsCallImageNotifyRoutines(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  _DWORD *v11; // r14
  _RTL_RUN_ONCE *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  void (__fastcall *Count)(_QWORD *, __int64, _DWORD *); // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v18 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, _QWORD *, __int64 *))(FltMgrCallbacks + 24))(a4, 1024LL, v17, &v18) >= 0 )
  {
    a1 = v17;
  }
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 744);
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
        Count = (void (__fastcall *)(_QWORD *, __int64, _DWORD *))v13[1].Count;
        if ( ((*v11 & 0x800) == 0 || (v14[2].Count & 1) != 0) && Count )
          Count(a1, v9, v11);
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
