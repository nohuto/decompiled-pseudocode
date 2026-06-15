/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x1400374B0
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140037070 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002A3EC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A888 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002B3EC (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140032A98 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _UNKNOWN **v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  CPipeInstance *v6; // rdi
  __int64 v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x27u,
        (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids,
        this,
        -2LL);
      v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x20000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_((__int64)v2[2], 0x28u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
  }
  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL))(this);
  v3 = (__int64 *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    *v3 = (__int64)&CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v3 + 2);
    operator delete(v3);
  }
  *((_QWORD *)this + 15) = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (__int64 *)((char *)this + 168);
  while ( v4[2] )
  {
    v5 = (__int64 *)*v4;
    if ( !*v4 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = (CPipeInstance *)v5[2];
    v7 = *v5;
    *v4 = *v5;
    if ( v7 )
      *(_QWORD *)(v7 + 8) = 0LL;
    else
      v4[1] = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((__int64)v4, v5);
    if ( v6 )
      CPipeInstance::`scalar deleting destructor'(v6);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
  }
}
