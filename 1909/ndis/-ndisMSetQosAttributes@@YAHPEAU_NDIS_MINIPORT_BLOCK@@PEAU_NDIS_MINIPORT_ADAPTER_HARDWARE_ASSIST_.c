/*
 * XREFs of ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C00229D4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00696C4 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ndisMSetQosAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rbp
  unsigned int v3; // ebx
  _NDIS_QOS_CAPABILITIES *HardwareQosCapabilities; // rax
  size_t v6; // rsi
  unsigned __int8 Revision; // dl
  _NDIS_QOS_CAPABILITIES *PoolWithTag; // rax
  _NDIS_QOS_CAPABILITIES *v9; // rax
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rax
  _NDIS_QOS_CAPABILITIES *QosHwCapabilities; // rax
  _NDIS_QOS_CAPABILITIES *CurrentQosCapabilities; // rdx
  size_t v13; // r8
  _NDIS_QOS_CAPABILITIES *v14; // rdx
  USHORT Size; // ax
  _QWORD *v17; // rcx
  int v18; // r9d
  _NDIS_QOS_CAPABILITIES *v19; // rcx
  _NDIS_QOS_CAPABILITIES *v20; // rcx
  char v21; // [rsp+30h] [rbp-38h]

  v2 = a2;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      142,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v21);
  }
  HardwareQosCapabilities = v2->HardwareQosCapabilities;
  v6 = 20LL;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v17 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_28;
    v18 = 143;
    goto LABEL_27;
  }
  HardwareQosCapabilities = v2->CurrentQosCapabilities;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v17 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_28;
    v18 = 144;
LABEL_27:
    WPP_RECORDER_SF_DDDD(
      v17[8],
      Revision,
      13,
      v18,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      Revision,
      1,
      HardwareQosCapabilities->Header.Size,
      20);
LABEL_28:
    v3 = -1073741811;
    goto LABEL_29;
  }
  if ( a1->QosCurrentCapabilities || a1->QosHwCapabilities )
  {
    v3 = -1073676283;
    goto LABEL_16;
  }
  PoolWithTag = (_NDIS_QOS_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
  a1->QosCurrentCapabilities = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = (_NDIS_QOS_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
    a1->QosHwCapabilities = v9;
    if ( v9 )
    {
      QosCurrentCapabilities = a1->QosCurrentCapabilities;
      *(_QWORD *)&QosCurrentCapabilities->Header.Type = 0LL;
      *(_QWORD *)&QosCurrentCapabilities->MaxNumTrafficClasses = 0LL;
      QosCurrentCapabilities->MaxNumPfcEnabledTrafficClasses = 0;
      QosHwCapabilities = a1->QosHwCapabilities;
      *(_QWORD *)&QosHwCapabilities->Header.Type = 0LL;
      *(_QWORD *)&QosHwCapabilities->MaxNumTrafficClasses = 0LL;
      QosHwCapabilities->MaxNumPfcEnabledTrafficClasses = 0;
      CurrentQosCapabilities = v2->CurrentQosCapabilities;
      LOWORD(QosHwCapabilities) = CurrentQosCapabilities->Header.Size;
      v13 = (unsigned __int16)QosHwCapabilities;
      if ( (unsigned __int16)QosHwCapabilities >= 0x14u )
        v13 = 20LL;
      memmove(a1->QosCurrentCapabilities, CurrentQosCapabilities, v13);
      v14 = v2->HardwareQosCapabilities;
      Size = v14->Header.Size;
      if ( Size < 0x14u )
        v6 = Size;
      memmove(a1->QosHwCapabilities, v14, v6);
      goto LABEL_16;
    }
  }
  v3 = -1073741670;
LABEL_29:
  v19 = a1->QosCurrentCapabilities;
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    a1->QosCurrentCapabilities = 0LL;
  }
  v20 = a1->QosHwCapabilities;
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    a1->QosHwCapabilities = 0LL;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      145,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      (char)v2,
      v3);
  }
  return v3;
}
