/*
 * XREFs of ndisIovCreateDefaultNicSwitch @ 0x1C00329C4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C002AD60 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0930 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0D44 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C00B0F64 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A884 (-ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int SetMiniport; // ebx
  PVOID v3; // rsi
  PVOID v4; // r14
  int v5; // edx
  char v6; // r15
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  NDIS_STATUS v12; // eax
  unsigned int NumVFs; // eax
  unsigned int *p_Type; // r9
  __int64 v15; // r9
  int v16; // r8d
  int Status[2]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID SubKeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v21; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v22; // [rsp+70h] [rbp-98h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+78h] [rbp-90h] BYREF
  char v24[256]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+198h] [rbp+90h] BYREF
  int v26; // [rsp+1A0h] [rbp+98h]
  struct _NDIS_NIC_SWITCH_PARAMETERS v27; // [rsp+1A8h] [rbp+A0h] BYREF

  memset(&ConfigObject, 0, sizeof(ConfigObject));
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  SetMiniport = 0;
  v3 = 0LL;
  v4 = 0LL;
  memset(&v27, 0, sizeof(v27));
  memset(v24, 0, 0xF8uLL);
  v22 = 0LL;
  v25 = 0LL;
  v6 = 0;
  v26 = 0;
  v21 = 0LL;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      26,
      10,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1);
  }
  if ( !(unsigned __int8)ndisIovNicSwitchWithoutIovSupported(a1) )
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
            SetMiniport = -1073741637;
            goto LABEL_5;
          }
          SetMiniport = ndisIovInitializeNicSwitch(
                          v8,
                          &v27,
                          (struct _NDIS_NIC_SWITCH_BLOCK **)&v22,
                          (struct _NDIS_PF_BLOCK **)&v21,
                          (struct _NDIS_VPORT_BLOCK **)&P);
          if ( SetMiniport )
            goto LABEL_29;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = a1;
          ConfigObject.Flags = 0;
          v12 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v3 = ConfigurationHandle;
          SetMiniport = v12;
          Status[0] = v12;
          if ( v12 )
            goto LABEL_29;
          NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
          SetMiniport = Status[0];
          v4 = SubKeyHandle;
          if ( Status[0] )
            goto LABEL_29;
          v27.Header = (_NDIS_OBJECT_HEADER)36176512;
          SetMiniport = ndisIovReadSwitchConfiguration(SubKeyHandle, &v27);
          if ( SetMiniport )
            goto LABEL_29;
          if ( v27.SwitchType != NdisNicSwitchTypeExternal || v27.SwitchId )
          {
            SetMiniport = -1073676267;
            goto LABEL_29;
          }
          NumVFs = v27.NumVFs;
          p_Type = (unsigned int *)&a1->NicSwitchCurrentCapabilities->Header.Type;
          if ( v27.NumVFs > p_Type[12] )
            NumVFs = p_Type[12];
          v27.NumVFs = NumVFs;
          v27.NdisReserved1 = p_Type[10];
          v27.NdisReserved2 = p_Type[16];
          v27.NumQueuePairsForDefaultVPort = ndisIovGetNumberOfQueuesForDefaultVPort(a1);
          v27.NdisReserved3 = *(_DWORD *)(v15 + 52) - v16;
          memset(v24, 0, 0xF8uLL);
          *(_DWORD *)&v24[88] |= 8u;
          *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
          *(_QWORD *)&v24[40] = &v27;
          *(_DWORD *)v24 = 15466902;
          *(_QWORD *)&v24[4] = 12LL;
          *(_DWORD *)&v24[32] = 66103;
          *(_QWORD *)&v24[52] = 552LL;
          *(_DWORD *)&v24[48] = 552;
          SetMiniport = ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v24, 0, 0LL, 0LL);
          if ( SetMiniport )
            goto LABEL_29;
          v6 = 1;
          SetMiniport = ndisIovFinalizeNicSwitch(
                          a1,
                          &v27,
                          (struct _NDIS_NIC_SWITCH_BLOCK *)v22,
                          (struct _NDIS_PF_BLOCK *)v21,
                          (struct _NDIS_VPORT_BLOCK *)P);
        }
        else
        {
          SetMiniport = -1073741637;
        }
        if ( !SetMiniport )
        {
LABEL_35:
          if ( v4 )
            NdisCloseConfiguration(v4);
          if ( v3 )
            NdisCloseConfiguration(v3);
          goto LABEL_5;
        }
        if ( v6 )
        {
          LODWORD(v25) = 786816;
          v26 = 0;
          memset(v24, 0, 0xF8uLL);
          *(_DWORD *)&v24[88] |= 8u;
          *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
          *(_QWORD *)&v24[40] = &v25;
          *(_DWORD *)v24 = 15466902;
          *(_DWORD *)&v24[48] = 12;
          *(_DWORD *)&v24[32] = 66105;
          *(_QWORD *)&v24[4] = 1LL;
          ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v24, 0, 0LL, 0LL);
        }
LABEL_29:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        goto LABEL_35;
      }
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      11,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1,
      SetMiniport);
  }
  return SetMiniport;
}
