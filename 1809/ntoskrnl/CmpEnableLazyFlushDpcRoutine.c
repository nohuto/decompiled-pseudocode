/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x140178030
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x14017806C (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine4 @ 0x1401C76C0 (KiCustomAccessRoutine4.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v4[28]; // [rsp+0h] [rbp-118h] BYREF
  _DWORD *v5; // [rsp+70h] [rbp-A8h]
  __int64 v6; // [rsp+D5h] [rbp-43h]
  __int64 v7; // [rsp+DDh] [rbp-3Bh]
  unsigned __int64 v8; // [rsp+105h] [rbp-13h]

  v5 = v4;
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v4[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v6 = __ROL8__(DeferredContext, SystemArgument1);
    v7 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1LL, DeferredContext, SystemArgument1, SystemArgument2);
}
