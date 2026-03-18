/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F5F3C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C022B4B0 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010918 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0010DF8 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rax
  char *v5; // r14
  _QWORD *v6; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v8; // rbx
  ADAPTER_DISPLAY **v9; // rsi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v16[40]; // [rsp+70h] [rbp+1Fh] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 14) + 8LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2906LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
  *((_QWORD *)this + 22) = KeGetCurrentThread();
  v6 = (_QWORD *)*((_QWORD *)this + 34);
  v13[0] = (char *)this + 272;
  while ( 1 )
  {
    v13[1] = v6;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v13);
    v8 = Current;
    if ( !Current )
      break;
    v9 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 216);
    if ( v9 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, (struct DXGADAPTER *const)v9, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14) >= 0 )
      {
        v10 = v9[315];
        if ( !v10 )
        {
          v11 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v11 + 24) = 2942LL;
          WdLogEvent5_WdAssertion(v11);
          v10 = v9[315];
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v10, v8) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v9[315], v8) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v14);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v8, a2, 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      if ( v12[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    }
    v6 = (_QWORD *)*v6;
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
