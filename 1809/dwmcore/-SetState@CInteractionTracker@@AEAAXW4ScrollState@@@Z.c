/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801A2F88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801A3020 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z @ 0x18019DE00 (-AddMultipleAndSet@-$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18019DFA8 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801A33EC (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // r9d
  __int64 *v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rcx
  int v9; // edi
  int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  float v13; // xmm3_4
  int v14; // [rsp+30h] [rbp-49h] BYREF
  int v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h]
  __int64 v18; // [rsp+50h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+8Ch] [rbp+13h]
  int *v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]
  int *v26; // [rsp+A0h] [rbp+27h]
  int v27; // [rsp+A8h] [rbp+2Fh]
  int v28; // [rsp+ACh] [rbp+33h]

  if ( *(_DWORD *)(a1 + 168) != a2 )
  {
    if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v20 = &v16;
      v23 = &v15;
      v26 = &v14;
      v16 = a1;
      v21 = 8;
      v15 = v5;
      v24 = 4;
      v14 = a2;
      v27 = 4;
      TlgWrite(v4, &unk_1802B4F5A, 0LL, 0LL, 5u, &pData);
    }
    *(_DWORD *)(a1 + 168) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v6 = &v16;
      v16 = *(_QWORD *)(a1 + 328);
      v7 = 0;
      v17 = *(_QWORD *)(a1 + 336);
      v18 = *(_QWORD *)(a1 + 320);
      do
      {
        v8 = *v6 + 352;
        v14 = a2;
        DynArray<enum ScrollState,0>::AddMultipleAndSet(v8, &v14);
        ++v7;
        ++v6;
      }
      while ( v7 < 3 );
    }
    if ( a2 )
    {
      v9 = a2 - 1;
      if ( v9 )
      {
        if ( v9 != 2 || (*(_BYTE *)(a1 + 532) & 0x40) != 0 )
          goto LABEL_20;
        v10 = 3;
      }
      else
      {
        v10 = 1;
      }
    }
    else
    {
      if ( *(char *)(a1 + 532) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 536LL) + 96LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 536LL));
        if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v11 + 128LL))(
               v11,
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 532) |= 0x80u;
      }
      v10 = 0;
    }
    v12 = *(_DWORD *)(a1 + 80);
    v13 = *(float *)(a1 + 128);
    v16 = *(_QWORD *)(a1 + 72);
    LODWORD(v17) = v12;
    CInteractionTracker::AddPendingStateChange(a1, v10, &v16, v13);
LABEL_20:
    CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
  }
}
