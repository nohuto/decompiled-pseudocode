/*
 * XREFs of ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001CB74 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(struct _UNICODE_STRING *a1, int a2, const struct _UNICODE_STRING *a3)
{
  int v4; // ebp
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  __int64 v7; // r14
  unsigned __int64 i; // rbx
  __int64 v9; // rsi
  Ndis::BindState *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  unsigned __int16 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // [rsp+88h] [rbp+20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      21,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  ndisReferenceMiniportByName((__int64)a1);
  if ( v15 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v15 + 5128, 0LL);
    v7 = *(unsigned int *)(v15 + 5004);
    for ( i = 0LL; ; ++i )
    {
      if ( i == v7 )
      {
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v15 + 5104), v6);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v15 + 5104), RunSynchronous, 0);
        ndisDereferenceMiniport(v15, 0x30u);
        return;
      }
      if ( i >= *(unsigned int *)(v15 + 5004) )
        __fastfail(5u);
      v9 = *(_QWORD *)(v15 + 5008);
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * i) + 80LL) + 24LL), a3, 1u) )
      {
        v10 = *(Ndis::BindState **)(v9 + 8 * i);
        if ( v4 == 1 )
        {
          if ( Ndis::BindState::SetBinding(v10, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C00E673B >= 4u )
          {
            v11 = *(__int64 **)(v9 + 8 * i);
            v12 = *v11;
            v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v11[10] + 24);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v13 = 22;
LABEL_17:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v6,
                0x1Cu,
                v13,
                (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
                (unsigned __int16 *)&v6->Header.Type,
                v12);
              continue;
            }
          }
        }
        else if ( Ndis::BindState::SetBinding(v10, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C00E673B >= 4u )
        {
          v14 = *(__int64 **)(v9 + 8 * i);
          v12 = *v14;
          v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v14[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 23;
            goto LABEL_17;
          }
        }
      }
    }
  }
}
