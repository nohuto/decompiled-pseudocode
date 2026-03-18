/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0282D80
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C004E1A0 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000B194 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C004E2BC (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C004E340 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00C6164 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C013B880 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        char **a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  __int64 v9; // rax
  ReferenceCounted *v10; // rcx
  char *v11; // rcx
  __int64 v12; // rax
  DMMVIDEOPRESENTTARGET *v13; // rcx
  DMMVIDEOPRESENTTARGET *v14; // rcx
  DXGADAPTER **v15; // rcx

  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 5);
    if ( !v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v7);
      v6 = *((_QWORD *)this + 5);
    }
    v8 = *(VIDPN_MGR **)(v6 + 88);
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v9);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v8, v4, a3, a4);
  }
  v10 = (ReferenceCounted *)*((_QWORD *)this + 67);
  if ( v10 )
  {
    ReferenceCounted::Release(v10);
    *((_QWORD *)this + 67) = 0LL;
  }
  v11 = (char *)this + 496;
  v12 = *((_QWORD *)this + 62);
  if ( v12 )
  {
    if ( *(char **)(v12 + 8) != v11 || (a2 = (char **)*((_QWORD *)this + 63), *a2 != v11) )
      __fastfail(3u);
    *a2 = (char *)v12;
    *(_QWORD *)(v12 + 8) = a2;
  }
  v13 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 57);
  if ( v13 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v13, this);
  v14 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 64);
  if ( v14 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v14, this);
  if ( *((_QWORD *)this + 65) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this, (__int64)a2, a3, a4);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 65) + 168LL), -1) != 5 )
    {
      v15 = (DXGADAPTER **)*((_QWORD *)this + 65);
      if ( *v15 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(*v15);
        v15 = (DXGADAPTER **)*((_QWORD *)this + 65);
      }
      if ( v15[20] )
      {
        IoFreeWorkItem(v15[20]);
        v15 = (DXGADAPTER **)*((_QWORD *)this + 65);
      }
      operator delete(v15);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
