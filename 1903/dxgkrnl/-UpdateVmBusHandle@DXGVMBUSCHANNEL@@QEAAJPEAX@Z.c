/*
 * XREFs of ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1C028F2AC
 * Callers:
 *     ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C0291188 (-UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::UpdateVmBusHandle(DXGVMBUSCHANNEL *this, void *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1C00A3E68)(*((_QWORD *)this + 2), a2);
  v8 = v4;
  if ( v4 < 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v9[3] = v8;
    v9[4] = 431LL;
    v9[5] = this;
    WdLogEvent5_WdError(v9);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned int)v8;
}
