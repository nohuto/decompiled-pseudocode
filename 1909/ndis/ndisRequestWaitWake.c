/*
 * XREFs of ndisRequestWaitWake @ 0x1C0032E7C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012910 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6FD0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisCompleteWaitWake @ 0x1C0013B78 (ndisCompleteWaitWake.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisRequestWaitWake(__int64 a1, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  POWER_STATE v4; // r8d
  _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  _UNKNOWN **v9; // rcx

  if ( !(unsigned __int8)ndisReferenceMiniport(a1) )
    return 3221225473LL;
  KeWaitForSingleObject((PVOID)(a1 + 1304), Executive, 0, 0, 0LL);
  KeClearEvent((PRKEVENT)(a1 + 1304));
  v4.SystemState = *(_SYSTEM_POWER_STATE *)(a1 + 1268);
  v5 = *(_DEVICE_OBJECT **)(a1 + 3832);
  *(_BYTE *)(a1 + 1330) = 0;
  *(_BYTE *)(a1 + 1328) = 0;
  *(POWER_STATE *)(a1 + 1332) = v4;
  v6 = PoRequestPowerIrp(v5, 0, v4, CompletionFunction, (PVOID)a1, (PIRP *)(a1 + 1296));
  v8 = v6;
  if ( v6 == 259 )
  {
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        156,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a1);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxq(
        (_DWORD)v9,
        (unsigned int)&CreatedWakeIrp,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        *(_DWORD *)(a1 + 1296));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x9Du,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v6,
        a1);
    ndisCompleteWaitWake(a1);
  }
  return v8;
}
