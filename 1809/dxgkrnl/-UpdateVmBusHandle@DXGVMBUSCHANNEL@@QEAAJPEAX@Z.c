/*
 * XREFs of ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1C025902C
 * Callers:
 *     ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C025AEA8 (-UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::UpdateVmBusHandle(DXGVMBUSCHANNEL *this, void *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v4 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1C008FE58)(*((_QWORD *)this + 2), a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = v6;
    v7[4] = 431LL;
    v7[5] = this;
    WdLogEvent5_WdError(v7);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return (unsigned int)v6;
}
