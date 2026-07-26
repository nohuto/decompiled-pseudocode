/*
 * XREFs of ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C01214FC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qccL @ 0x1C00C0C48 (WPP_RECORDER_SF_qccL.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01218D8 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetPacketDirectAttributes(
        _QWORD *a1,
        const union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4)
{
  struct _NDIS_PD_BLOCK *v4; // rdi
  int v6; // ebx
  unsigned int Flags; // eax
  unsigned __int8 DmaAddressWidth; // cl
  int v10; // eax
  char v11; // al
  int v12; // [rsp+20h] [rbp-38h]

  v4 = (struct _NDIS_PD_BLOCK *)a1[684];
  if ( !v4 )
  {
    v6 = -1073741637;
    goto LABEL_3;
  }
  LOBYTE(a3) = 1;
  if ( a2->Header.Revision == 1 && a2->Header.Size >= 9u )
  {
    Flags = a2->GeneralAttributes.Flags;
    if ( (Flags & 0xFFFFFFFC) != 0 )
    {
LABEL_9:
      v6 = -1073741811;
      goto LABEL_3;
    }
    DmaAddressWidth = a2->PacketDirectAttributes.DmaAddressWidth;
    if ( (Flags & 1) != 0 )
    {
      if ( DmaAddressWidth )
        goto LABEL_9;
      v4->PDDmaAddressWidth = 0;
      v11 = 1;
    }
    else
    {
      if ( (unsigned __int8)(DmaAddressWidth - 1) <= 0x1Eu || DmaAddressWidth >= 0x41u )
        goto LABEL_9;
      v10 = 64;
      if ( DmaAddressWidth )
        v10 = DmaAddressWidth;
      v4->PDDmaAddressWidth = v10;
      v11 = 0;
    }
    v4->PDNonDmaAdapter = v11;
    if ( (a2->GeneralAttributes.Flags & 2) != 0 )
    {
      if ( !*(_QWORD *)(a1[470] + 1144LL) )
      {
        v6 = -1073741808;
        goto LABEL_3;
      }
      v4->PDBuffersManagedByDriver = 1;
    }
    if ( v4->PDEnabledRegistryValue )
    {
      v6 = ndisPDInitializeMiniportBufferManagement(v4);
      if ( v6 == -1073740007 )
      {
        if ( !v4->PDDomainId )
          goto LABEL_3;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            29,
            16,
            (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
            (char)a1,
            v4->PDDomainId);
        }
        v4->PDDomainId = 0;
        v4->DiagnosticCode |= 0x80000001;
        v6 = ndisPDInitializeMiniportBufferManagement(v4);
      }
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
  {
LABEL_3:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        29,
        18,
        (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
        (char)a1,
        v6);
    }
    return (unsigned int)v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v4->PDNonDmaAdapter == 0;
    WPP_RECORDER_SF_qccL(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, a3, a4, v12);
  }
  return (unsigned int)v6;
}
