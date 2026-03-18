/*
 * XREFs of ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0003780
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C00582F4 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *v4; // rcx
  void (__fastcall *v6)(unsigned __int64, __int64, __int64, __int64, char); // rax
  _FX_DRIVER_GLOBALS *v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int16 v13; // ax
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(FxSystemWorkItem **)(DeferredContext + 240);
  if ( v4 )
  {
    FxSystemWorkItem::EnqueueWorker(v4, FxInterrupt::_InterruptWorkItemCallback, (void *)DeferredContext, 0);
  }
  else
  {
    v6 = *(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64, char))(unk_1C00ABE90 + 8LL);
    if ( v6 )
      v6(DeferredContext + 336, 8LL, 2164260864LL, 3938LL, 2);
    v7 = *(_FX_DRIVER_GLOBALS **)(DeferredContext + 16);
    if ( v7->FxTrackDriverForMiniDumpLog )
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00ABE58.m_DriverUsage->FxDriverGlobals
                                      + stru_1C00ABE58.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v7;
    v8 = *(_QWORD *)(DeferredContext + 248);
    if ( v8 )
    {
      v15 = 0;
      (*(void (__fastcall **)(__int64, unsigned __int8 *, void *, void *))(*(_QWORD *)v8 + 16LL))(
        v8,
        &v15,
        SystemArgument1,
        SystemArgument2);
      v11 = *(_QWORD *)(DeferredContext + 96);
      v12 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      v13 = *(_WORD *)(v11 + 10);
      v14 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v13 )
        v14 = 0LL;
      if ( !*(_WORD *)(DeferredContext + 10) )
        v12 = 0LL;
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(DeferredContext + 336))(v12, v14);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(DeferredContext + 248) + 24LL))(
        *(_QWORD *)(DeferredContext + 248),
        v15);
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(DeferredContext + 96) + 10LL) )
        v10 = *(_QWORD *)(DeferredContext + 96) ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( *(_WORD *)(DeferredContext + 10) )
        v9 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(DeferredContext + 336))(v9, v10);
    }
  }
}
