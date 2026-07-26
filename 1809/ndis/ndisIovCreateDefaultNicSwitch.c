/*
 * XREFs of ndisIovCreateDefaultNicSwitch @ 0x1C00BDD6C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIovFinalizeNicSwitch @ 0x1C006FDE4 (ndisIovFinalizeNicSwitch.c)
 *     ndisIovInitializeNicSwitch @ 0x1C007026C (ndisIovInitializeNicSwitch.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00C52C0 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F8674 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00F9360 (ndisIovReadSwitchConfiguration.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  PVOID v2; // rsi
  PVOID v3; // r14
  unsigned int SwitchConfiguration; // ebx
  char v5; // r15
  __int64 v6; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  NDIS_STATUS v10; // eax
  unsigned int MaxNumVFs; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v12; // r8
  bool v13; // zf
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  int Status[2]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID SubKeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v21; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v22; // [rsp+60h] [rbp-A8h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v24[248]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v25; // [rsp+188h] [rbp+80h] BYREF
  int v26; // [rsp+190h] [rbp+88h]
  _OWORD v27[35]; // [rsp+198h] [rbp+90h] BYREF

  v2 = 0LL;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  v3 = 0LL;
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  SwitchConfiguration = 0;
  memset(v27, 0, 0x228uLL);
  memset(v24, 0, sizeof(v24));
  v22 = 0LL;
  v21 = 0LL;
  v5 = 0;
  P = 0LL;
  v25 = 0LL;
  v26 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0xAu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1);
  if ( !ndisIovNicSwitchWithoutIovSupported((__int64)a1) )
  {
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
      {
        NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
        if ( NicSwitchCurrentCapabilities
          && NicSwitchCurrentCapabilities->Header.Revision >= 2u
          && NicSwitchCurrentCapabilities->Header.Size >= 0x74u )
        {
          if ( !NicSwitchCurrentCapabilities->MaxNumSwitches )
          {
            SwitchConfiguration = -1073741637;
            goto LABEL_5;
          }
          SwitchConfiguration = ndisIovInitializeNicSwitch(v6, (__int64)v27, &v22, &v21, &P);
          if ( SwitchConfiguration )
            goto LABEL_30;
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = a1;
          v10 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v2 = ConfigurationHandle;
          SwitchConfiguration = v10;
          Status[0] = v10;
          if ( v10 )
            goto LABEL_30;
          NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
          SwitchConfiguration = Status[0];
          v3 = SubKeyHandle;
          if ( Status[0] )
            goto LABEL_30;
          LODWORD(v27[0]) = 36176512;
          SwitchConfiguration = ndisIovReadSwitchConfiguration(SubKeyHandle);
          if ( SwitchConfiguration )
            goto LABEL_30;
          if ( *((_QWORD *)&v27[0] + 1) != 1LL )
          {
            SwitchConfiguration = -1073676267;
            goto LABEL_30;
          }
          MaxNumVFs = DWORD1(v27[33]);
          v12 = a1->NicSwitchCurrentCapabilities;
          if ( DWORD1(v27[33]) > v12->MaxNumVFs )
            MaxNumVFs = v12->MaxNumVFs;
          DWORD1(v27[33]) = MaxNumVFs;
          DWORD2(v27[33]) = v12->MaxNumVPorts;
          HIDWORD(v27[33]) = v12->NdisReserved7;
          v13 = ndisIovHWvRSSSupported(a1) == 0;
          v16 = 1;
          if ( !v13 )
            v16 = *(_DWORD *)(v14 + 128);
          DWORD1(v27[34]) = v16;
          LODWORD(v27[34]) = *(_DWORD *)(v14 + 52) - v15;
          memset(v24, 0, sizeof(v24));
          *(_DWORD *)&v24[88] |= 8u;
          *(_DWORD *)&v24[8] = 0;
          *(_DWORD *)&v24[56] = 0;
          *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
          *(_DWORD *)v24 = 15466902;
          *(_DWORD *)&v24[4] = 12;
          *(_QWORD *)&v24[40] = v27;
          *(_DWORD *)&v24[32] = 66103;
          *(_DWORD *)&v24[48] = 552;
          *(_DWORD *)&v24[52] = 552;
          SwitchConfiguration = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
          if ( SwitchConfiguration )
            goto LABEL_30;
          v5 = 1;
          SwitchConfiguration = ndisIovFinalizeNicSwitch((__int64)a1, v27, (__int64)v22, (__int64)v21, P);
        }
        else
        {
          SwitchConfiguration = -1073741637;
        }
        if ( !SwitchConfiguration )
        {
LABEL_36:
          if ( v3 )
            NdisCloseConfiguration(v3);
          if ( v2 )
            NdisCloseConfiguration(v2);
          goto LABEL_5;
        }
        if ( v5 )
        {
          v26 = 0;
          LODWORD(v25) = 786816;
          memset(v24, 0, sizeof(v24));
          *(_DWORD *)&v24[88] |= 8u;
          *(_DWORD *)&v24[8] = 0;
          *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
          *(_DWORD *)v24 = 15466902;
          *(_QWORD *)&v24[40] = &v25;
          *(_DWORD *)&v24[32] = 66105;
          *(_DWORD *)&v24[48] = 12;
          *(_DWORD *)&v24[4] = 1;
          ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
        }
LABEL_30:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        goto LABEL_36;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0xBu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1, SwitchConfiguration);
  return SwitchConfiguration;
}
