/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C66B4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01BF32C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00EF06C (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(PERESOURCE **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  PERESOURCE *v4; // rcx
  __int64 v5; // rax
  PERESOURCE *v6; // r14
  PERESOURCE *i; // rsi
  PERESOURCE *v8; // rax
  DXGDEVICE *v9; // rbx
  PERESOURCE *v10; // rsi
  PERESOURCE *j; // rdi
  PERESOURCE *v12; // rax
  DXGDEVICE *v13; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE v15; // [rsp+50h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 2169LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[2];
  if ( v4[16] != (PERESOURCE)KeGetCurrentThread() && !*((_BYTE *)v4 + 2470) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 2174LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (PERESOURCE *)(this + 15);
  for ( i = this[15]; ; i = (PERESOURCE *)*i )
  {
    v8 = 0LL;
    if ( i != v6 )
      v8 = i;
    if ( !v8 )
      break;
    v9 = 0LL;
    if ( i != v6 )
      v9 = (DXGDEVICE *)i;
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v9 + 5) + 56LL), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(v9, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v10 = (PERESOURCE *)(this + 17);
  for ( j = this[17]; ; j = (PERESOURCE *)*j )
  {
    v12 = 0LL;
    if ( j != v10 )
      v12 = j;
    if ( !v12 )
      break;
    v13 = 0LL;
    if ( j != v10 )
      v13 = (DXGDEVICE *)j;
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v13 + 5) + 56LL), &v15);
    DXGDEVICE::FlushDeferredDestruction(v13, 0LL, 0, 0);
    KeUnstackDetachProcess(&v15);
  }
}
