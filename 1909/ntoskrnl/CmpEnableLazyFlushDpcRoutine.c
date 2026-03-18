/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x14015C0A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x140181F94 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine4 @ 0x1401CE6B0 (KiCustomAccessRoutine4.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[56]; // [rsp+0h] [rbp-128h] BYREF
  _DWORD *v9; // [rsp+E0h] [rbp-48h]

  v9 = v8;
  memset(&v8[32], 0, 0x5DuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v8[53] + 1) = SystemArgument1;
    *(_QWORD *)((char *)&v8[41] + 1) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v8[43] + 1) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1LL);
}
