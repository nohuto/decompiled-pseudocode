/*
 * XREFs of ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001CB74 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_MP_REFTAG@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C007C6D8 (-ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_ND.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C0138BCC (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  __int64 v7; // rdi
  char v8; // r12
  int v9; // edx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r9d
  bool v14; // zf
  int v15; // eax
  bool v16; // r12
  KIRQL v17; // al
  struct _KEVENT *v18; // rcx
  struct _NDIS_MINIPORT_BLOCK *v19; // rdx
  char v21; // [rsp+40h] [rbp-C0h]
  KIRQL v22; // [rsp+40h] [rbp-C0h]
  char v23; // [rsp+41h] [rbp-BFh]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  struct _KEVENT v28; // [rsp+70h] [rbp-90h] BYREF
  char v29[160]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v30[22]; // [rsp+130h] [rbp+30h] BYREF

  v25 = 0LL;
  v7 = 0LL;
  memset(v30, 0, sizeof(v30));
  v21 = 0;
  v8 = 0;
  v23 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x1Cu,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      &a2->Length);
  v10 = ndisReferenceProtocolByName(a2);
  if ( v10 >= 0 )
  {
    if ( a1->Length )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
        ++MEMORY[0x1A8];
        MEMORY[0x1A0] = KeGetCurrentThread();
        v11 = ndisMapOpenByName(a1, 0LL);
        v7 = v11;
        if ( v11 )
          break;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        ndisDereferenceProtocol(0LL, v12, 4u, v13);
        if ( !v21 )
          v21 = 1;
        if ( (int)ndisReferenceProtocolByName(a2) < 0 )
        {
          v10 = -1073741772;
          goto LABEL_47;
        }
      }
      v23 = 1;
      v8 = 1;
      v25 = *(_QWORD *)(v11 + 16);
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        v10 = -1073741823;
LABEL_46:
        ndisMDereferenceOpenUnlocked(v7, 4);
LABEL_47:
        if ( v8 )
          ndisDereferenceMiniport(v25, 0x34u);
        goto LABEL_49;
      }
    }
    else
    {
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        v10 = -1073741823;
        goto LABEL_45;
      }
      KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
      ++MEMORY[0x1A8];
      MEMORY[0x1A0] = KeGetCurrentThread();
    }
    ndisInitializeNetPnPEvent(v30, &v28);
    if ( a5 == 3 )
    {
      LODWORD(v30[1]) = 4;
    }
    else
    {
      if ( a5 != 9 )
      {
        v14 = MEMORY[0x1A8]-- == 1;
        v10 = -1073741808;
        if ( v14 )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        goto LABEL_45;
      }
      LODWORD(v30[1]) = 5;
    }
    v30[2] = a3;
    LODWORD(v30[3]) = a4;
    v15 = ndisDeliverNetPnPEventSynchronously(0LL, v7, (__int64)v30);
    v14 = MEMORY[0x1A8]-- == 1;
    v10 = v15;
    if ( v14 )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    v16 = v10 == 65539;
    if ( v7 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 232));
      v22 = v17;
      if ( (*(_DWORD *)(v7 + 224) & 0x80000) == 0 )
      {
        *(_DWORD *)(v7 + 224) &= ~0x10u;
        v18 = *(struct _KEVENT **)(v7 + 912);
        if ( v18 )
        {
          KeSetEvent(v18, 0, 0);
          *(_QWORD *)(v7 + 912) = 0LL;
          v17 = v22;
          v16 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 232), v17);
      if ( v25 && v16 && MEMORY[0x38] <= 6u && (MEMORY[0x38] != 6 || MEMORY[0x39] < 0x28u) )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5104LL));
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v7 + 856), BindingDisabled, Reason_RebindNeeded) )
        {
          memset(v29, 0, sizeof(v29));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_PROTOCOL_LINK **)(v7 + 856),
              (struct NDIS_PNPTRACE_LOCALS *)v29);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v19,
                0x1Cu,
                0x1Du,
                (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
                *(unsigned __int16 **)&v29[8],
                *(_QWORD *)v29);
          }
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5104LL), v19);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5104LL), RunSynchronous, 0);
      }
    }
LABEL_45:
    v8 = v23;
    if ( !v23 )
      goto LABEL_47;
    goto LABEL_46;
  }
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      13,
      30,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      0);
  }
  return (unsigned int)v10;
}
