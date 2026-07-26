/*
 * XREFs of ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3D20
 * Callers:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00B68B0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6FD0 (NdisMIdleNotificationConfirm.c)
 *     ndisIdleWaitWakeCallback @ 0x1C00B8550 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00B8860 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C00B9BD0 (ndisSetPowerResumeComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingUnexpectedSelectiveSuspendError(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned __int16 v3; // r10
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v9 = 16LL;
      v8 = v4 + 4008;
      v5 = v3;
      v10 = &v5;
      v12 = &v6;
      v11 = 4LL;
      v6 = (int)v2;
      v13 = 4LL;
      TlgWrite(&hProvider, &unk_1C00D231D, v1, v2, 5u, &pData);
    }
  }
}
