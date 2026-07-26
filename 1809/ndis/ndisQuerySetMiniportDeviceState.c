/*
 * XREFs of ndisQuerySetMiniportDeviceState @ 0x1C00B8374
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxqqt @ 0x1C0069550 (McTemplateK0jqxqqt.c)
 *     WPP_SF_qZLLL @ 0x1C0069788 (WPP_SF_qZLLL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int SetMiniport; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+28h] [rbp-D8h]
  unsigned int v14; // [rsp+30h] [rbp-D0h]
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[248]; // [rsp+60h] [rbp-A0h] BYREF

  v15 = a2;
  memset(v16, 0, sizeof(v16));
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x34u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x35u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
    return 0LL;
  }
  else
  {
    memset(v16, 0, sizeof(v16));
    *(_DWORD *)&v16[88] |= 8u;
    *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
    *(_DWORD *)v16 = 15466902;
    *(_DWORD *)&v16[32] = a3;
    *(_DWORD *)&v16[48] = 4;
    *(_DWORD *)&v16[8] = 0;
    *(_DWORD *)&v16[4] = a4 != 0;
    *(_QWORD *)&v16[40] = &v15;
    SetMiniport = ndisQuerySetMiniport((void *)a1, 0LL, (struct _NDIS_OID_REQUEST *)v16, 0LL, 0LL);
    v10 = SetMiniport;
    if ( SetMiniport && SetMiniport != -1073741637 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
      {
        v14 = SetMiniport;
        v13 = a4;
        LODWORD(v12) = a3;
        WPP_SF_qZLLL(a4, v8, a1, *(const wchar_t **)(a1 + 3888), v12, v13, v14);
      }
      if ( (byte_1C00A2081 & 8) != 0 )
        McTemplateK0jqxqqt(
          v9,
          v8,
          (const GUID *)(a1 + 4040),
          a1 + 4040,
          *(_DWORD *)(a1 + 4088),
          *(_QWORD *)(a1 + 4056),
          v10,
          a3,
          a4);
    }
    if ( a4 && v10 != -1073741637 && v10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(0x37u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, v10);
    return v10;
  }
}
