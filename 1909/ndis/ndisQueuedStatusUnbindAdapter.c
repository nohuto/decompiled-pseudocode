/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00944E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(void *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r15
  unsigned __int64 i; // rbx
  __int64 v6; // r14
  Ndis::BindState *v7; // rcx
  __int64 v8; // rdx
  int v9; // edx
  int v10; // edx
  char v11[160]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      84,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)a1);
  }
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5104));
  v4 = *(unsigned int *)(v2 + 5004);
  for ( i = 0LL; i != v4; ++i )
  {
    if ( i >= *(unsigned int *)(v2 + 5004) )
      __fastfail(5u);
    v6 = *(_QWORD *)(v2 + 5008);
    v7 = *(Ndis::BindState **)(v6 + 8 * i);
    v8 = *((_QWORD *)v7[1].m_AdditionalContext + 5);
    if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 56) < 6u && Ndis::BindState::SetBinding(v7, BindingDisabled, Reason_RebindNeeded) )
      {
        memset(v11, 0, sizeof(v11));
        if ( (unsigned __int8)byte_1C00E677B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v11);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              0x1Cu,
              0x55u,
              (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
              *(unsigned __int16 **)&v11[8],
              *(_QWORD *)v11);
        }
      }
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5104));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v2 + 5104), RunSynchronous, 0);
  ndisDereferenceMiniport(v2, 0x36u);
  ExFreePoolWithTag(a1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      6,
      86,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      v2);
  }
}
