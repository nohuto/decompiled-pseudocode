/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140034848
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140029D48 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140010560 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140010588 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A888 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140032A98 (WPP_SF_q.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140034734 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14003555C (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x1400359D8 (-RemoveHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEA.c)
 */

void __fastcall CPipeInstance::Cleanup(CPipeInstance *this)
{
  __int64 **v2; // rsi
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rdx
  __int64 v7; // rax
  CConnectionInstance *v8; // rbp
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rdi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
      this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  if ( *((_QWORD *)this + 10) )
  {
    v2 = (__int64 **)((char *)this + 64);
    do
    {
      v3 = *v2;
      if ( !*v2 )
LABEL_21:
        ATL::AtlThrowImpl(-2147467259);
      v4 = *v3;
      v5 = (__int64 *)v3[2];
      *v2 = (__int64 *)*v3;
      if ( v4 )
        *(_QWORD *)(v4 + 8) = 0LL;
      else
        *((_QWORD *)this + 9) = 0LL;
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((__int64)this + 64, v3);
      while ( v5[2] )
      {
        v6 = (__int64 *)*v5;
        if ( !*v5 )
          goto LABEL_21;
        v7 = *v6;
        v8 = (CConnectionInstance *)v6[2];
        *v5 = *v6;
        if ( v7 )
          *(_QWORD *)(v7 + 8) = 0LL;
        else
          v5[1] = 0LL;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode((__int64)v5, v6);
        if ( v8 )
          CConnectionInstance::`scalar deleting destructor'(v8);
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(v5);
      operator delete(v5);
    }
    while ( *((_QWORD *)this + 10) );
  }
  while ( *((_QWORD *)this + 4) )
  {
    v9 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead((char *)this + 16);
    v10 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( *(_DWORD *)(v9 + 40) == 2 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 32LL))(
        *((_QWORD *)this + 30),
        *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL));
    (**v10)(v10, 1LL);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids);
  }
}
