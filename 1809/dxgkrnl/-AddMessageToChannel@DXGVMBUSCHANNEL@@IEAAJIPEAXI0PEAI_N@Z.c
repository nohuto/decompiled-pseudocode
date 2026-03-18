/*
 * XREFs of ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C0257BA8
 * Callers:
 *     ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C0258B10 (-PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z.c)
 *     ?SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z @ 0x1C0258F60 (-SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C00367F8 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::AddMessageToChannel(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int *a6,
        bool a7)
{
  __int64 v7; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  _BYTE v25[16]; // [rsp+50h] [rbp-18h] BYREF

  v7 = a2;
  LODWORD(v11) = -1073741823;
  if ( a3 && a4 > 8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGVMBUSCHANNEL *)((char *)this + 112), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    if ( ((unsigned __int8)a3 & 7) != 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v13 + 24) = 581LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( (a4 & 7) != 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 582LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (a5 & 7) != 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v15 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( a6 && (*a6 & 7) != 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v16 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( *a3 != (_DWORD)v7 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v17 + 24) = 586LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v11 = (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, bool, unsigned __int64, unsigned __int64, _QWORD))qword_1C008FC80)(
                 *((_QWORD *)this + 2),
                 a3,
                 a4,
                 0LL,
                 a7,
                 a5 & -(__int64)a7,
                 (unsigned __int64)a6 & -(__int64)a7,
                 0LL);
    Global = DXGGLOBAL::GetGlobal(v18);
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( (int)v11 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v23[3] = v7;
      v23[4] = v11;
      v23[5] = 605LL;
      v23[6] = this;
      WdLogEvent5_WdWarning(v23);
    }
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  }
  return (unsigned int)v11;
}
