/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02BB0F4
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C00553C0 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051A8 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005549C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0055520 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01297D0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C014FD5C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(DMMVIDEOPRESENTTARGET *this, char **a2, __int64 a3)
{
  struct HDXGMONITOR__ *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  VIDPN_MGR *v7; // rdi
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rax
  DMMVIDEOPRESENTTARGET *v11; // rcx
  DMMVIDEOPRESENTTARGET *v12; // rcx
  DXGADAPTER **v13; // rcx

  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v3 )
  {
    v5 = *((_QWORD *)this + 5);
    if ( !v5 )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v6);
      v5 = *((_QWORD *)this + 5);
    }
    v7 = *(VIDPN_MGR **)(v5 + 88);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v8);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v7, v3);
  }
  v9 = (char *)this + 512;
  v10 = *((_QWORD *)this + 64);
  if ( v10 )
  {
    if ( *(char **)(v10 + 8) != v9 || (a2 = (char **)*((_QWORD *)this + 65), *a2 != v9) )
      __fastfail(3u);
    *a2 = (char *)v10;
    *(_QWORD *)(v10 + 8) = a2;
  }
  v11 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  if ( v11 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v11, this);
  v12 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 66);
  if ( v12 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v12, this);
  if ( *((_QWORD *)this + 67) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), -1) != 5 )
    {
      v13 = (DXGADAPTER **)*((_QWORD *)this + 67);
      if ( *v13 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(*v13);
        v13 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      if ( v13[18] )
      {
        IoFreeWorkItem(v13[18]);
        v13 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      operator delete(v13);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64), (__int64)a2, a3);
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
