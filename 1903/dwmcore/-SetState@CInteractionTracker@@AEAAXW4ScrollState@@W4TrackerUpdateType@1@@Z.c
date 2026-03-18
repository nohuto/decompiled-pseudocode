/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DD744
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB2D8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DDD1C (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DDE88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801DDF10 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DDF58 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801E012C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801E077C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z @ 0x1801D89F0 (-AddMultipleAndSet@-$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801D8C20 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801D913C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801DE2A4 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801E077C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18021F0A0 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021F0C4 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021F230 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x18021F294 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, int a3)
{
  const struct _TlgProvider_t *v6; // rcx
  int v7; // r9d
  __int64 *v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edx
  float v13; // xmm3_4
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-59h] BYREF
  int v18; // [rsp+38h] [rbp-51h] BYREF
  __int64 v19; // [rsp+40h] [rbp-49h] BYREF
  __int64 v20; // [rsp+48h] [rbp-41h]
  __int64 v21; // [rsp+50h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  int *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  int *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 192, *(unsigned int *)(a1 + 168));
        break;
      case 2:
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 192));
        break;
      case 3:
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 192));
        break;
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle(a1 + 192, *(unsigned int *)(a1 + 168));
  }
  if ( *(_DWORD *)(a1 + 168) != a2 )
  {
    if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v23 = &v19;
      v26 = &v18;
      v29 = &v17;
      v19 = a1;
      v24 = 8;
      v18 = v7;
      v27 = 4;
      v17 = a2;
      v30 = 4;
      TlgWrite(v6, &unk_1802DC4E2, 0LL, 0LL, 5u, &pData);
    }
    *(_DWORD *)(a1 + 168) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v8 = &v19;
      v19 = *(_QWORD *)(a1 + 328);
      v9 = 0;
      v20 = *(_QWORD *)(a1 + 336);
      v21 = *(_QWORD *)(a1 + 320);
      do
      {
        v10 = *v8 + 376;
        v17 = a2;
        DynArray<enum ScrollState,0>::AddMultipleAndSet(v10, &v17);
        ++v9;
        ++v8;
      }
      while ( v9 < 3 );
    }
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( !v11 )
      {
        v13 = *(float *)(a1 + 128);
        v12 = 1;
        *(_DWORD *)(a1 + 180) = 0;
        *(float *)(a1 + 520) = v13;
LABEL_26:
        v15 = *(_DWORD *)(a1 + 80);
        v19 = *(_QWORD *)(a1 + 72);
        LODWORD(v20) = v15;
        CInteractionTracker::AddPendingStateChange(a1, v12, &v19, v13);
LABEL_27:
        CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
        goto LABEL_28;
      }
      if ( v11 != 2 || (*(_BYTE *)(a1 + 532) & 0x40) != 0 )
        goto LABEL_27;
      v12 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 532) >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 552LL) + 88LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL));
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v14 + 136LL))(
          v14,
          CInteractionTracker::s_OnIdleAtFrameBegin,
          a1,
          4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        *(_BYTE *)(a1 + 532) |= 0x80u;
      }
      v12 = 0;
    }
    v13 = *(float *)(a1 + 128);
    goto LABEL_26;
  }
LABEL_28:
  v16 = *(_QWORD *)(a1 + 632);
  if ( v16 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v16, a1, *(unsigned int *)(a1 + 168));
  }
}
