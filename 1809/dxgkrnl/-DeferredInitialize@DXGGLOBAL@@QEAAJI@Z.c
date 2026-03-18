/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C015BF20
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C001FFFC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C012C70C (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C015C06C (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  DXGMMS_EXPORT *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  DXGPROCESS *Current; // rax
  int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = operator new(0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v6 = (DXGMMS_EXPORT *)v4;
  if ( v4 )
  {
    v4[8] = 0LL;
    v4[9] = 0LL;
    *(_BYTE *)v4 = 0;
    memset(v4 + 1, 0, 0x38uLL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v5);
    v12 = -1073741801;
    *(_QWORD *)(v14 + 24) = v2;
    *(_QWORD *)(v14 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v14);
    return (unsigned int)v12;
  }
  v7 = DXGMMS_EXPORT::Initialize(v6, v2);
  v9 = v7;
  if ( v7 >= 0 )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v6 + 9) + 8LL) + 8LL))();
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v16);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    *((_QWORD *)this + v2 + 13) = *((_QWORD *)v6 + 9);
    *((_QWORD *)this + v2 + 15) = *((_QWORD *)v6 + 8);
    v10 = (_QWORD *)*((_QWORD *)this + 31);
    v17[0] = (char *)this + 248;
    DXGGLOBAL::m_pDxgmmsExport[v2] = v6;
    while ( 1 )
    {
      v17[1] = v10;
      Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v17);
      if ( !Current )
        break;
      v12 = DXGPROCESS::DeferredInitialize(Current, v2);
      if ( v12 < 0 )
        goto LABEL_12;
      v10 = (_QWORD *)*v10;
    }
    v12 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 129), v2);
    if ( v12 >= 0 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
LABEL_12:
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    return (unsigned int)v12;
  }
  v15 = WdLogNewEntry5_WdLowResource(v8);
  *(_QWORD *)(v15 + 24) = v2;
  *(_QWORD *)(v15 + 32) = v9;
  WdLogEvent5_WdLowResource(v15);
  return (unsigned int)v9;
}
