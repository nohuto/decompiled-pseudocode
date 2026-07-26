/*
 * XREFs of ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00B66E0
 * Callers:
 *     ndisSetPowerSuspend @ 0x1C011C2E4 (ndisSetPowerSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B58F8 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00B59F8 (ndisMSendPmParametersOidForSuspend.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3B50 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisWdmSendPmOidsForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, enum _DEVICE_POWER_STATE a2)
{
  int v3; // eax
  unsigned int v4; // edi
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned __int16 v6; // r9
  _NDIS_SELECTIVE_SUSPEND *v7; // rbx
  enum _DEVICE_POWER_STATE v9; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_PM_PARAMETERS v10; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v11[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_PM_PARAMETERS v12; // [rsp+160h] [rbp+60h] BYREF

  v9 = a2;
  memset(v11, 0, 0xF8uLL);
  v12 = *ndisMInitializePmParametersForSuspend(&v10, a1);
  v3 = ndisMSendPmParametersOidForSuspend((char)a1, (__int64)&v12);
  v4 = v3;
  if ( v3 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 3u, v3);
    SelectiveSuspend->LastUnexpectedFailureLine[1] = SelectiveSuspend->LastUnexpectedFailureLine[0];
    SelectiveSuspend->LastUnexpectedFailureLine[0] = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 19;
LABEL_9:
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        v6,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        v4,
        a1);
    }
  }
  else
  {
    memset(v11, 0, 0xF8uLL);
    DWORD2(v11[5]) |= 0x408u;
    *((_QWORD *)&v11[6] + 1) = &ndisIntReqGeneric;
    LODWORD(v11[0]) = 15466902;
    *((_QWORD *)&v11[2] + 1) = &v9;
    LODWORD(v11[2]) = -50265855;
    *(_QWORD *)((char *)v11 + 4) = 1LL;
    LODWORD(v11[3]) = 4;
    KeInitializeEvent((PRKEVENT)&v11[7], NotificationEvent, 0);
    v4 = ndisMInvokeOidRequest((char)a1);
    if ( v4 == 259 )
    {
      KeWaitForSingleObject(&v11[7], Executive, 0, 0, 0LL);
      v4 = v11[5];
    }
    if ( v4 )
    {
      v7 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 4u, v4);
      v7->LastUnexpectedFailureLine[1] = v7->LastUnexpectedFailureLine[0];
      v7->LastUnexpectedFailureLine[0] = 4;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 20;
        goto LABEL_9;
      }
    }
  }
  return v4;
}
