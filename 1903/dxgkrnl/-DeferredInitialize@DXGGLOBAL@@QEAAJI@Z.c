/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C017C474
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002274C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00FC4C0 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C017C5CC (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGMMS_EXPORT *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  DXGPROCESS *Current; // rax
  int v22; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v9 = (DXGMMS_EXPORT *)v4;
  if ( v4 )
  {
    v4[8] = 0LL;
    v4[9] = 0LL;
    *(_BYTE *)v4 = 0;
    memset(v4 + 1, 0, 0x38uLL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    v22 = -1073741801;
    *(_QWORD *)(v24 + 24) = v2;
    *(_QWORD *)(v24 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    return (unsigned int)v22;
  }
  v10 = DXGMMS_EXPORT::Initialize(v9, v2);
  v15 = v10;
  if ( v10 < 0 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v25 + 24) = v2;
    *(_QWORD *)(v25 + 32) = v15;
    WdLogEvent5_WdLowResource(v25);
  }
  else
  {
    v16 = (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)v9 + 9) + 8LL) + 8LL))();
    v15 = v16;
    if ( v16 >= 0 )
    {
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v27, v17);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      *((_QWORD *)this + v2 + 13) = *((_QWORD *)v9 + 9);
      *((_QWORD *)this + v2 + 15) = *((_QWORD *)v9 + 8);
      v20 = (_QWORD *)*((_QWORD *)this + 31);
      v28[0] = (char *)this + 248;
      DXGGLOBAL::m_pDxgmmsExport[v2] = v9;
      while ( 1 )
      {
        v28[1] = v20;
        Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v28);
        if ( !Current )
          break;
        v22 = DXGPROCESS::DeferredInitialize(Current, (unsigned int)v2);
        if ( v22 < 0 )
          goto LABEL_13;
        v20 = (_QWORD *)*v20;
      }
      v22 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 125), (unsigned int)v2);
      if ( v22 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
LABEL_13:
      if ( v27[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
      return (unsigned int)v22;
    }
    v26 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v26 + 24) = v2;
    *(_QWORD *)(v26 + 32) = v15;
    WdLogEvent5_WdError(v26);
  }
  return (unsigned int)v15;
}
