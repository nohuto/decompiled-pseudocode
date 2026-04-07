/*
 * XREFs of ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180027724
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000AB60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180027198 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::Create(struct CTopLevelWindow *a1, struct CWindowSnapshot **a2)
{
  __int64 v4; // rax
  CWindowSnapshot *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v5 = (CWindowSnapshot *)v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CWindowSnapshot::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v4 + 16) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    *(_DWORD *)(v4 + 72) = 1065353216;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CWindowSnapshot::Initialize(v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x38u);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x36u);
  }
  return v7;
}
