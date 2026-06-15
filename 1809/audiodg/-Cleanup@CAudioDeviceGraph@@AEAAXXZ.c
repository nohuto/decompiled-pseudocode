/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140012BE0
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140012D18 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EEC0 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14001000C (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140035974 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdi
  __int64 **v4; // rbx
  __int64 *v5; // rcx
  LPVOID *v6; // rdi
  __int64 v7; // rax
  bool v8; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids, this);
      v2 = WPP_GLOBAL_Control;
    }
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x20000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(v2[2], 43LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
  }
  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL))(this);
  v3 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    *v3 = &CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v3 + 2);
    operator delete(v3);
  }
  *((_QWORD *)this + 15) = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (__int64 **)((char *)this + 168);
  while ( v4[2] )
  {
    v5 = *v4;
    if ( !*v4 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = (LPVOID *)v5[2];
    v7 = *v5;
    *v4 = (__int64 *)*v5;
    if ( v7 )
      *(_QWORD *)(v7 + 8) = 0LL;
    else
      v4[1] = 0LL;
    *v5 = (__int64)v4[4];
    v4[4] = v5;
    v8 = v4[2] == (__int64 *)1;
    v4[2] = (__int64 *)((char *)v4[2] - 1);
    if ( v8 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)v4);
    if ( v6 )
    {
      CPipeInstance::~CPipeInstance(v6);
      operator delete(v6);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
  }
}
