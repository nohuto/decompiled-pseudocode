/*
 * XREFs of ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0258940
 * Callers:
 *     ProcessChannelPostStarted @ 0x1C0259100 (ProcessChannelPostStarted.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  char v8; // di
  struct _KEVENT *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((struct _KTHREAD **)this + 15) != KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 112));
    v5 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v6 != (_QWORD *)((char *)this + 48) )
  {
    v7 = v6[14];
    v6 = (_QWORD *)*v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  v8 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v5 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v9 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    if ( v8 )
      KeSetEvent(v9, 0, 0);
  }
}
