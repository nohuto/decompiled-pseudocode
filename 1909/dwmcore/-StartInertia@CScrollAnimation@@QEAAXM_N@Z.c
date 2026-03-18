/*
 * XREFs of ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180206078
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180205844 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D7368 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021E1B4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CScrollAnimation::StartInertia(CScrollAnimation *this, float a2, char a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct CChainingHelper *ActiveChainingHelper; // rax
  struct CChainingHelper *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = *((_QWORD *)this + 41);
  if ( v3 )
    v6 = *(_QWORD *)(v3 + 16);
  else
    v6 = 0LL;
  *((_QWORD *)this + 42) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
  v7 = *((_DWORD *)this + 79);
  *((_DWORD *)this + 78) = 2;
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v6, v7, a2, 0);
  LOBYTE(v8) = a3;
  (*(void (__fastcall **)(CScrollAnimation *, __int64, __int64))(*(_QWORD *)this + 336LL))(this, v9, v8);
  v10 = *((_QWORD *)this + 41);
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 16);
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v10 + 192));
  v12 = ActiveChainingHelper;
  if ( !a3 && ActiveChainingHelper )
  {
    v13 = *((int *)this + 79);
    v14 = 3 * v13;
    *((_BYTE *)ActiveChainingHelper + 4 * v14) &= 0xFCu;
    *((_DWORD *)ActiveChainingHelper + v14 + 1) = 0;
    v15 = (char *)ActiveChainingHelper + 36;
    *((_BYTE *)ActiveChainingHelper + 36) |= 1u;
    v16 = 3 * v13;
    *((_BYTE *)v12 + 4 * v16) &= 0xFAu;
    *((_DWORD *)v12 + v16 + 2) = 0;
    v17 = 3LL;
    *v15 |= 2u;
    do
    {
      *(_BYTE *)v12 |= 4u;
      *((_DWORD *)v12 + 2) = -805306369;
      v12 = (struct CChainingHelper *)((char *)v12 + 12);
      *v15 |= 2u;
      --v17;
    }
    while ( v17 );
  }
  *((_BYTE *)this + 344) &= ~4u;
  *(_OWORD *)((char *)this + 408) = 0uLL;
  *((_QWORD *)this + 53) = 0LL;
}
