/*
 * XREFs of ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007E138
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0077B80 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0013A1C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001DC2C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C007EC9C (-ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall NdisTraceLoggingPowerOnStatistics(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  const GUID *v3; // r8
  const GUID *v4; // r9
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  union _LARGE_INTEGER v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  union _LARGE_INTEGER v10; // [rsp+50h] [rbp-B8h] BYREF
  __int64 WakeIrpCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 SetPowerOidCount; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  __int64 *v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  __int64 *v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  union _LARGE_INTEGER *v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  __int64 *p_WakeIrpCount; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *p_LastWakeIrpLatencyMs; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *p_MaxWakeIrpLatencyMs; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *p_TotalWakeIrpLatencyMs; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  __int64 *p_SetPowerOidCount; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  unsigned __int64 *p_LastSetPowerOidLatencyMs; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  unsigned __int64 *p_MaxSetPowerOidLatencyMs; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  unsigned __int64 *p_TotalSetPowerOidLatencyMs; // [rsp+138h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+38h]

  AoAc = a1->AoAc;
  if ( AoAc )
  {
    v8.QuadPart = 0LL;
    ndisConvertInterruptTimeToLocalTime((unsigned __int64)a1, &v8);
    v10 = v8;
    if ( hProvider.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v5 = a1->MediaConnectState == MediaConnectStateConnected;
        p_InterfaceGuid = &a1->InterfaceGuid;
        v6 = *((unsigned __int16 *)&a1->NetLuid.Info + 3);
        LOBYTE(v7) = v5;
        v9 = v6;
        v16 = &v9;
        v18 = &v7;
        v20 = &v10;
        WakeIrpCount = AoAc->WakeIrpCount;
        p_WakeIrpCount = &WakeIrpCount;
        p_LastWakeIrpLatencyMs = &AoAc->LastWakeIrpLatencyMs;
        p_MaxWakeIrpLatencyMs = &AoAc->MaxWakeIrpLatencyMs;
        p_TotalWakeIrpLatencyMs = &AoAc->TotalWakeIrpLatencyMs;
        SetPowerOidCount = AoAc->SetPowerOidCount;
        p_SetPowerOidCount = &SetPowerOidCount;
        p_LastSetPowerOidLatencyMs = &AoAc->LastSetPowerOidLatencyMs;
        p_MaxSetPowerOidLatencyMs = &AoAc->MaxSetPowerOidLatencyMs;
        p_TotalSetPowerOidLatencyMs = &AoAc->TotalSetPowerOidLatencyMs;
        v15 = 16LL;
        v17 = 8LL;
        v19 = 1LL;
        v21 = 8LL;
        v23 = 8LL;
        v25 = 8LL;
        v27 = 8LL;
        v29 = 8LL;
        v31 = 8LL;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        TlgWrite(&hProvider, &unk_1C008CB28, v3, v4, 0xEu, &pData);
      }
    }
  }
}
