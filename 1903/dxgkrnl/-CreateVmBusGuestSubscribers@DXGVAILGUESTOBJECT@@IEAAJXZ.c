/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C0290154
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C0290B14 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C028EFE4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  PVOID v2; // rax
  __int64 v3; // rdx
  void **v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  void **v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _BYTE v21[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  if ( *(_OWORD *)((char *)this + 72) != 0LL )
  {
    LODWORD(v6) = -1073740528;
    goto LABEL_20;
  }
  v2 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
  if ( v2 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    v4 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
    *((_WORD *)v2 + 8) = 0;
    *(_QWORD *)v2 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
  }
  *((_QWORD *)this + 9) = v2;
  if ( v2 )
  {
    v8 = DXGVMBUSCHANNEL::RegisterSubscriber(
           *((DXGVMBUSCHANNEL **)this + 8),
           0x6F746D72u,
           (struct IDXGCHANNELSUBSCRIBER *)v2,
           (struct IDXGCHANNEL **)v2 + 1);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v12 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
      if ( v12 )
      {
        v12[1] = 0LL;
        v14 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
        *((_WORD *)v12 + 8) = 0;
        *v12 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
      }
      *((_QWORD *)this + 10) = v12;
      if ( !v12 )
      {
        LODWORD(v6) = -1073741801;
        v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v16 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v16);
      }
      if ( (int)v6 < 0 )
        goto LABEL_15;
      v17 = DXGVMBUSCHANNEL::RegisterSubscriber(
              *((DXGVMBUSCHANNEL **)this + 8),
              0x706D6F63u,
              *((struct IDXGCHANNELSUBSCRIBER **)this + 10),
              (struct IDXGCHANNEL **)(*((_QWORD *)this + 10) + 8LL));
      v6 = v17;
      if ( v17 >= 0 )
        goto LABEL_20;
    }
    v7 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v7 + 24) = v6;
  }
  else
  {
    LODWORD(v6) = -1073741801;
    v7 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = -1073741801LL;
  }
  WdLogEvent5_WdWarning(v7);
LABEL_15:
  v18 = *((_QWORD *)this + 9);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
    *((_QWORD *)this + 9) = 0LL;
  }
  v19 = *((_QWORD *)this + 10);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    *((_QWORD *)this + 10) = 0LL;
  }
LABEL_20:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return (unsigned int)v6;
}
