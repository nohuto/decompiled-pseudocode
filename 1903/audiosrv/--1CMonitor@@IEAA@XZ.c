/*
 * XREFs of ??1CMonitor@@IEAA@XZ @ 0x18010DC84
 * Callers:
 *     ?Release@CMonitor@@UEAAKXZ @ 0x1801110A0 (-Release@CMonitor@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C3348 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800D2488 (WPP_SF_qq.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180108130 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18010C770 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  CAudioSessionManager *v2; // rcx
  struct _TP_WORK *v3; // rax
  CMonitor::CMonitorNotification *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CMonitor::CMonitorNotification *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  *(_QWORD *)this = &CMonitor::`vftable';
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x19u,
      (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
      this);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 62) )
  {
    v3 = (struct _TP_WORK *)*((_QWORD *)this + 62);
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)v2 + 2), 0x1Au, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
      v3 = (struct _TP_WORK *)*((_QWORD *)this + 62);
    }
    CloseThreadpoolWork(v3);
    *((_QWORD *)this + 62) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)this + 44);
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)this + 38);
  if ( *((_QWORD *)this + 37) )
    ATL::CHandle::Close((void **)this + 37);
  if ( *((_QWORD *)this + 35) )
    ATL::CHandle::Close((void **)this + 35);
  if ( *((_QWORD *)this + 30) )
    ATL::CHandle::Close((void **)this + 30);
  v4 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 29);
  if ( v4 )
    CMonitor::CMonitorNotification::Release(v4);
  v5 = *((_QWORD *)this + 28);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CoTaskMemFree(*((LPVOID *)this + 26));
  *((_QWORD *)this + 26) = 0LL;
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  CoTaskMemFree(*((LPVOID *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  v10 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 21);
  if ( v10 )
    CMonitor::CMonitorNotification::Release(v10);
  if ( *((_QWORD *)this + 15) )
    ATL::CHandle::Close((void **)this + 15);
  v11 = *((_QWORD *)this + 14);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CoTaskMemFree(*((LPVOID *)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  v12 = *((_QWORD *)this + 12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(*((LPVOID *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
