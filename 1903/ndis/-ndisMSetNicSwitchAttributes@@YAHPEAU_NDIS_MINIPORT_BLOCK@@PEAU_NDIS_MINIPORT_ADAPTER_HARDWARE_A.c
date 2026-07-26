/*
 * XREFs of ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0021E14
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisMSetNicSwitchAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rbp
  unsigned int v4; // ebx
  _NDIS_NIC_SWITCH_CAPABILITIES *HardwareNicSwitchCapabilities; // rax
  UCHAR Revision; // r9
  USHORT v7; // r10
  _NDIS_NIC_SWITCH_CAPABILITIES *v8; // rcx
  UCHAR v9; // r8
  size_t v10; // rsi
  _NDIS_NIC_SWITCH_CAPABILITIES *PoolWithTag; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v12; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v13; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v14; // rdx
  USHORT Size; // ax
  size_t v16; // r8
  _NDIS_NIC_SWITCH_CAPABILITIES *CurrentNicSwitchCapabilities; // rdx
  USHORT v18; // ax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rcx
  char v23; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      138,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v23);
  }
  HardwareNicSwitchCapabilities = v2->HardwareNicSwitchCapabilities;
  Revision = HardwareNicSwitchCapabilities->Header.Revision;
  if ( Revision
    && (v7 = HardwareNicSwitchCapabilities->Header.Size, v7 >= 0x20u)
    && (v8 = v2->CurrentNicSwitchCapabilities, (v9 = v8->Header.Revision) != 0)
    && (LODWORD(a2) = v8->Header.Size, (unsigned __int16)a2 >= 0x20u) )
  {
    if ( a1->NicSwitchCurrentCapabilities || a1->NicSwitchHwCapabilities )
    {
      v4 = -1073676283;
      goto LABEL_27;
    }
    if ( v9 >= 2u
      && ((unsigned __int16)a2 < 0x74u || v8->NumTotalMacAddresses || v8->NumMacAddressesPerPort || v8->NumVlansPerPort)
      || Revision >= 2u
      && (v7 < 0x74u
       || HardwareNicSwitchCapabilities->NumTotalMacAddresses
       || HardwareNicSwitchCapabilities->NumMacAddressesPerPort
       || HardwareNicSwitchCapabilities->NumVlansPerPort) )
    {
      v4 = -1073741637;
    }
    else
    {
      v10 = 132LL;
      PoolWithTag = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
      a1->NicSwitchCurrentCapabilities = PoolWithTag;
      if ( PoolWithTag )
      {
        v12 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
        a1->TopNicSwitchCurrentCapabilities = v12;
        if ( v12 )
        {
          v13 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
          a1->NicSwitchHwCapabilities = v13;
          if ( v13 )
          {
            memset(a1->TopNicSwitchCurrentCapabilities, 0, sizeof(_NDIS_NIC_SWITCH_CAPABILITIES));
            memset(a1->NicSwitchCurrentCapabilities, 0, sizeof(_NDIS_NIC_SWITCH_CAPABILITIES));
            memset(a1->NicSwitchHwCapabilities, 0, sizeof(_NDIS_NIC_SWITCH_CAPABILITIES));
            v14 = v2->HardwareNicSwitchCapabilities;
            Size = v14->Header.Size;
            v16 = Size;
            if ( Size >= 0x84u )
              v16 = 132LL;
            memmove(a1->NicSwitchHwCapabilities, v14, v16);
            CurrentNicSwitchCapabilities = v2->CurrentNicSwitchCapabilities;
            v18 = CurrentNicSwitchCapabilities->Header.Size;
            if ( v18 < 0x84u )
              v10 = v18;
            memmove(a1->NicSwitchCurrentCapabilities, CurrentNicSwitchCapabilities, v10);
            memmove(a1->TopNicSwitchCurrentCapabilities, v2->CurrentNicSwitchCapabilities, v10);
            goto LABEL_27;
          }
        }
      }
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
  if ( NicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(NicSwitchCurrentCapabilities, 0);
    a1->NicSwitchCurrentCapabilities = 0LL;
  }
  TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
  if ( TopNicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(TopNicSwitchCurrentCapabilities, 0);
    a1->TopNicSwitchCurrentCapabilities = 0LL;
  }
  NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities;
  if ( NicSwitchHwCapabilities )
  {
    ExFreePoolWithTag(NicSwitchHwCapabilities, 0);
    a1->NicSwitchHwCapabilities = 0LL;
  }
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      139,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      (char)v2,
      v4);
  }
  return v4;
}
