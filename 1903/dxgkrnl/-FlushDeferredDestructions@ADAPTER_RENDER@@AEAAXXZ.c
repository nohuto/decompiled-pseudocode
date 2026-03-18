/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F53E4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE8A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6200 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C0121D98 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  PERESOURCE *v5; // rcx
  __int64 v6; // rax
  DXGDEVICE *i; // rdi
  DXGDEVICE *v8; // rdi
  DXGDEVICE *j; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE v11; // [rsp+50h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 2195LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[2];
  if ( v5[16] != (PERESOURCE)KeGetCurrentThread() && !*((_BYTE *)v5 + 2502) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v2);
    *(_QWORD *)(v6 + 24) = 2200LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = (DXGDEVICE *)this[15]; i != (DXGDEVICE *)(this + 15) && i; i = *(DXGDEVICE **)i )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)i + 5) + 56LL), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(i, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v8 = (DXGDEVICE *)(this + 17);
  for ( j = (DXGDEVICE *)this[17]; j != v8 && j; j = *(DXGDEVICE **)j )
  {
    memset(&v11, 0, sizeof(v11));
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)j + 5) + 56LL), &v11);
    DXGDEVICE::FlushDeferredDestruction(j, 0LL, 0, 0);
    KeUnstackDetachProcess(&v11);
  }
}
