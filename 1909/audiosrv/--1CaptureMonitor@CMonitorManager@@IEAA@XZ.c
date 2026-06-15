/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1801074E8
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18010C2B0 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA1A0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180107C30 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  struct _TP_WAIT *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  struct std::nothrow_t *v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rdx
  struct std::nothrow_t *v12; // rdx
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  struct std::nothrow_t *v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  struct std::nothrow_t *v18; // [rsp+50h] [rbp+20h] BYREF
  void *v19; // [rsp+58h] [rbp+28h] BYREF

  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 25);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 272) = 0LL;
      v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
    }
    CloseThreadpoolWait(v2);
  }
  v4 = *((_QWORD *)this + 25);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 23);
  if ( v5 >= 8 )
  {
    v6 = (struct std::nothrow_t *)(2 * v5 + 2);
    v18 = v6;
    v7 = (void *)*((_QWORD *)this + 20);
    v19 = v7;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, (unsigned __int64 *)&v18);
      v6 = v18;
      v7 = v19;
    }
    operator delete(v7, v6);
  }
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 7LL;
  *((_WORD *)this + 80) = 0;
  v8 = *((_QWORD *)this + 19);
  if ( v8 >= 8 )
  {
    v9 = (struct std::nothrow_t *)(2 * v8 + 2);
    v18 = v9;
    v10 = (void *)*((_QWORD *)this + 16);
    v19 = v10;
    if ( (unsigned __int64)v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, (unsigned __int64 *)&v18);
      v9 = v18;
      v10 = v19;
    }
    operator delete(v10, v9);
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 7LL;
  *((_WORD *)this + 64) = 0;
  v11 = *((_QWORD *)this + 14);
  if ( v11 >= 8 )
  {
    v12 = (struct std::nothrow_t *)(2 * v11 + 2);
    v18 = v12;
    v13 = (void *)*((_QWORD *)this + 11);
    v19 = v13;
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, (unsigned __int64 *)&v18);
      v12 = v18;
      v13 = v19;
    }
    operator delete(v13, v12);
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_WORD *)this + 44) = 0;
  v14 = *((_QWORD *)this + 10);
  if ( v14 >= 8 )
  {
    v15 = (struct std::nothrow_t *)(2 * v14 + 2);
    v18 = v15;
    v16 = (void *)*((_QWORD *)this + 7);
    v19 = v16;
    if ( (unsigned __int64)v15 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, (unsigned __int64 *)&v18);
      v15 = v18;
      v16 = v19;
    }
    operator delete(v16, v15);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  v17 = *((_QWORD *)this + 5);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( *((_QWORD *)this + 4) )
    ATL::CHandle::Close((CMonitorManager::CaptureMonitor *)((char *)this + 32));
}
