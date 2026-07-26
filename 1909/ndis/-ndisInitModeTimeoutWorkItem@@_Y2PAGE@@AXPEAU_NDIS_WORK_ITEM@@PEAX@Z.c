/*
 * XREFs of ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C010A190
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C010A270 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  int v3; // edx
  char v4; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      10,
      (struct _GUID *)&WPP_c9db38346f173682e41c7494ab2277a1_Traceguids,
      v4);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols((char)v2);
  ndisMExitInitMode(v2, RunSynchronous);
  KeSetEvent(&v2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport((__int64)v2, 0x17u);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      13,
      11,
      (struct _GUID *)&WPP_c9db38346f173682e41c7494ab2277a1_Traceguids,
      (char)v2);
  }
}
