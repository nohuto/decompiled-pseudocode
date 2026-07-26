/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C011525C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CBC50 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisMapOpenByName @ 0x1C00503C4 (ndisMapOpenByName.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C01179F0 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  char v6; // r13
  char v7; // r12
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  bool v13; // r12
  KIRQL v14; // al
  struct _KEVENT *v15; // rcx
  struct _NDIS_MINIPORT_BLOCK *v16; // rdx
  char v18; // [rsp+30h] [rbp-D0h]
  KIRQL v19; // [rsp+31h] [rbp-CFh]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  struct _KEVENT v24; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[20]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+120h] [rbp+20h] BYREF
  int v27; // [rsp+128h] [rbp+28h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]

  v5 = 0LL;
  v21 = 0LL;
  v6 = 0;
  v18 = 0;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_Z(0x1Cu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, &a2->Length);
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
        MEMORY[0x1AC] = 68922;
        v11 = ndisMapOpenByName(a1, 0LL);
        v5 = v11;
        if ( v11 )
          break;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        ndisDereferenceProtocol(0LL, v12, 4u);
        if ( !v6 )
          v6 = 1;
        if ( (int)ndisReferenceProtocolByName(a2) < 0 )
        {
          v10 = -1073741772;
          goto LABEL_46;
        }
      }
      v18 = 1;
      v7 = 1;
      v21 = *(_QWORD *)(v11 + 16);
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        v10 = -1073741823;
LABEL_45:
        ndisMDereferenceOpenUnlocked(v5, 4);
LABEL_46:
        if ( v7 )
          ndisDereferenceMiniport(v21, 0x34u);
        goto LABEL_48;
      }
    }
    else
    {
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        v10 = -1073741823;
        goto LABEL_44;
      }
      KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
      ++MEMORY[0x1A8];
      MEMORY[0x1A0] = KeGetCurrentThread();
      MEMORY[0x1AC] = 68994;
    }
    ndisInitializeNetPnPEvent(&v26, &v24);
    if ( a5 == 3 )
    {
      v27 = 4;
    }
    else
    {
      if ( a5 != 9 )
      {
        v10 = -1073741808;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        goto LABEL_44;
      }
      v27 = 5;
    }
    v28 = a3;
    v29 = a4;
    v10 = ndisDeliverNetPnPEventSynchronously(0LL, (_QWORD *)v5, (__int64)&v26);
    MEMORY[0x1AC] = 0;
    if ( !--MEMORY[0x1A8] )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    v13 = v10 == 65539;
    if ( v5 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 232));
      v19 = v14;
      if ( (*(_DWORD *)(v5 + 224) & 0x80000) == 0 )
      {
        *(_DWORD *)(v5 + 224) &= ~0x10u;
        v15 = *(struct _KEVENT **)(v5 + 912);
        if ( v15 )
        {
          KeSetEvent(v15, 0, 0);
          *(_QWORD *)(v5 + 912) = 0LL;
          v13 = 0;
          v14 = v19;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 232), v14);
      if ( v21 && v13 && MEMORY[0x38] <= 6u && (MEMORY[0x38] != 6 || MEMORY[0x39] < 0x28u) )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5144LL));
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v5 + 856), BindingDisabled, Reason_RebindNeeded)
          && (unsigned __int8)byte_1C00A026B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 856),
            (struct NDIS_PNPTRACE_LOCALS *)v25);
          WPP_SF_Zq(0x1Du, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, (const wchar_t *)v25[1], v25[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5144LL), v16);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5144LL), RunSynchronous, 0);
      }
    }
LABEL_44:
    v7 = v18;
    if ( !v18 )
      goto LABEL_46;
    goto LABEL_45;
  }
LABEL_48:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x1Eu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, 0LL);
  return (unsigned int)v10;
}
