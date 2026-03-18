/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01476F4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C025FD20 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C634 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CC14 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CCC8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E324 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  char *v4; // r14
  _QWORD *v5; // rsi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v7; // rbx
  ADAPTER_DISPLAY **v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  ADAPTER_DISPLAY *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v17[64]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[72]; // [rsp+88h] [rbp-21h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 16LL) != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 2908LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v4 = (char *)this + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
  *((_QWORD *)this + 21) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  v15[0] = (char *)this + 248;
  while ( 1 )
  {
    v15[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v15);
    v7 = Current;
    if ( !Current )
      break;
    v8 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 216);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, (struct DXGADAPTER *const)v8, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v16, 0xFFFFFFFFLL, v9) >= 0 )
      {
        v11 = v8[319];
        if ( !v11 )
        {
          v13 = WdLogNewEntry5_WdAssertion(0LL, v10);
          *(_QWORD *)(v13 + 24) = 2944LL;
          WdLogEvent5_WdAssertion(v13);
          v11 = v8[319];
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v11, v7) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v8[319], v7) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v16);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v7, a2, 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      if ( v14[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
    }
    v5 = (_QWORD *)*v5;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
