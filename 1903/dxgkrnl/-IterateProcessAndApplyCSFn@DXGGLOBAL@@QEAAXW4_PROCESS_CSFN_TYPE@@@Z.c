/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0244008
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C02445D0 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00073A4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018950 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002274C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  DXGPROCESS *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *i; // rbx
  __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v27[16]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF
  int v30; // [rsp+68h] [rbp-8h]
  int v31; // [rsp+6Ch] [rbp-4h]

  v3 = a2;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v26, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v25[1] = v25;
  v25[0] = v25;
  v4 = a1 + 248;
  v5 = *(_QWORD **)(a1 + 248);
  v28[0] = v4;
  while ( 1 )
  {
    v28[1] = v5;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v28);
    v8 = Current;
    if ( !Current )
      break;
    DXGPROCESS::AcquireReference(Current, v7);
    v9 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
    if ( !v9 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      *(_QWORD *)(v16 + 24) = 5305LL;
      WdLogEvent5_WdLowResource(v16);
      break;
    }
    *v9 = v8;
    v14 = v25[0];
    v15 = v9 + 1;
    if ( *(_QWORD **)(v25[0] + 8LL) != v25 )
LABEL_21:
      __fastfail(3u);
    *v15 = v25[0];
    v15[1] = v25;
    *(_QWORD *)(v14 + 8) = v15;
    v25[0] = v15;
    v5 = (_QWORD *)*v5;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  for ( i = (_QWORD *)v25[0]; i != v25; i = (_QWORD *)*i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)(*(i - 1) + 104LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    CurrentThread = KeGetCurrentThread();
    v20 = *(i - 1);
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v20 + 104) + 16LL) != CurrentThread )
    {
      v21 = WdLogNewEntry5_WdAssertion(CurrentThread, v18);
      *(_QWORD *)(v21 + 24) = 4947LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *(_DWORD *)(v20 + 40) == 1 )
    {
      v31 = 0;
      v29 = v20;
      v30 = v3;
      Global = DXGGLOBAL::GetGlobal((__int64)CurrentThread, v18);
      DXGGLOBAL::IterateAdaptersWithCallback((__int64)Global, (__int64)ApplyCsFunctionAdapterCallback, (__int64)&v29, 2);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  while ( 1 )
  {
    v23 = v25[0];
    if ( (_QWORD *)v25[0] == v25 )
      break;
    if ( *(_QWORD **)(v25[0] + 8LL) != v25 )
      goto LABEL_21;
    v24 = *(_QWORD *)v25[0];
    if ( *(_QWORD *)(*(_QWORD *)v25[0] + 8LL) != v25[0] )
      goto LABEL_21;
    v25[0] = *(_QWORD *)v25[0];
    *(_QWORD *)(v24 + 8) = v25;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v23 - 8));
    operator delete((void *)(v23 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
}
