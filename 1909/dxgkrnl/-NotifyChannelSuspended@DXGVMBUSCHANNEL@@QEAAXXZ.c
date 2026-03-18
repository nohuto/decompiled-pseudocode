/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028F0D4
 * Callers:
 *     ProcessChannelSuspended @ 0x1C028F800 (ProcessChannelSuspended.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(PRKEVENT *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  PRKEVENT *v6; // rdi
  PRKEVENT v7; // rcx
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(this + 9), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v6 = (PRKEVENT *)this[6];
  while ( v6 != this + 6 )
  {
    v7 = v6[14];
    v6 = (PRKEVENT *)*v6;
    (*(void (__fastcall **)(PRKEVENT))(*(_QWORD *)&v7->Header.Lock + 32LL))(v7);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  *((_BYTE *)this + 25) = 1;
  if ( this[4] )
  {
    if ( *((_BYTE *)this + 26) )
    {
      v8 = WdLogNewEntry5_WdWarning(v4, v3, v5);
      *(_QWORD *)(v8 + 24) = this;
      WdLogEvent5_WdWarning(v8);
      KeSetEvent(this[4], 0, 0);
    }
  }
}
