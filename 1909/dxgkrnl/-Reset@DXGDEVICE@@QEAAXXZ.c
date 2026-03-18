/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C02306CC
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F6400 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6B04 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C025F408 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  const struct _WNF_STATE_NAME *v11; // rdx
  unsigned int v12; // r9d
  DXGPROCESS *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF
  int v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 1504LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  for ( i = (__int64 *)*((_QWORD *)this + 47); i != (__int64 *)((char *)this + 376) && i; i = (__int64 *)*i )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(i[2] + 16) + 16LL)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v8 + 24) = 226LL;
      WdLogEvent5_WdAssertion(v8);
    }
    *((_DWORD *)i + 8) = -1;
    *((_DWORD *)i + 7) = 2;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  v9 = *((_QWORD *)this + 2);
  v10 = *((_QWORD *)this + 82);
  *((_DWORD *)this + 116) = 2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 520) + 8LL) + 576LL))(v10) )
    *((_DWORD *)this + 116) = 3;
  else
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 208LL))(
      *((_QWORD *)this + 82),
      22LL);
  v13 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v19 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v13, v11, &v19, v12) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 1556LL;
    WdLogEvent5_WdError(v17);
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
}
