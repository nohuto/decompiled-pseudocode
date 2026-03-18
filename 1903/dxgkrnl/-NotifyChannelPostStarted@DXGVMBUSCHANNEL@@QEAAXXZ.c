/*
 * XREFs of ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028EBCC
 * Callers:
 *     ProcessChannelPostStarted @ 0x1C028F380 (ProcessChannelPostStarted.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2)
{
  char v3; // bp
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  char v6; // di
  struct _KEVENT *v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( *((struct _KTHREAD **)this + 16) != KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 112));
    v3 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v4 != (_QWORD *)((char *)this + 48) )
  {
    v5 = v4[14];
    v4 = (_QWORD *)*v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  v6 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v3 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v7 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    if ( v6 )
      KeSetEvent(v7, 0, 0);
  }
}
