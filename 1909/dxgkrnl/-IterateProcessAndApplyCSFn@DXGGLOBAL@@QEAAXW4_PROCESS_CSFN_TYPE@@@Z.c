/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0244688
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0244C50 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002279C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
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
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rax
  _QWORD v26[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v27[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  int v31; // [rsp+68h] [rbp-8h]
  int v32; // [rsp+6Ch] [rbp-4h]

  v3 = a2;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v27, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v26[1] = v26;
  v26[0] = v26;
  v4 = a1 + 248;
  v5 = *(_QWORD **)(a1 + 248);
  v29[0] = v4;
  while ( 1 )
  {
    v29[1] = v5;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v29);
    v8 = Current;
    if ( !Current )
      break;
    DXGPROCESS::AcquireReference(Current, v7);
    v9 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
    if ( !v9 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      *(_QWORD *)(v16 + 24) = 5306LL;
      WdLogEvent5_WdLowResource(v16);
      break;
    }
    *v9 = v8;
    v14 = v26[0];
    v15 = v9 + 1;
    if ( *(_QWORD **)(v26[0] + 8LL) != v26 )
LABEL_21:
      __fastfail(3u);
    *v15 = v26[0];
    v15[1] = v26;
    *(_QWORD *)(v14 + 8) = v15;
    v26[0] = v15;
    v5 = (_QWORD *)*v5;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  for ( i = (_QWORD *)v26[0]; i != v26; i = (_QWORD *)*i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, *(struct DXGFASTMUTEX *const *)(*(i - 1) + 104LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
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
      v32 = 0;
      v30 = v20;
      v31 = v3;
      Global = DXGGLOBAL::GetGlobal((__int64)CurrentThread, v18);
      DXGGLOBAL::IterateAdaptersWithCallback((__int64)Global, (__int64)ApplyCsFunctionAdapterCallback, (__int64)&v30, 2);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    if ( v28[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  while ( 1 )
  {
    v24 = v26[0];
    if ( (_QWORD *)v26[0] == v26 )
      break;
    if ( *(_QWORD **)(v26[0] + 8LL) != v26 )
      goto LABEL_21;
    v25 = *(_QWORD *)v26[0];
    if ( *(_QWORD *)(*(_QWORD *)v26[0] + 8LL) != v26[0] )
      goto LABEL_21;
    v26[0] = *(_QWORD *)v26[0];
    *(_QWORD *)(v25 + 8) = v26;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v24 - 8), v23);
    operator delete((void *)(v24 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
}
