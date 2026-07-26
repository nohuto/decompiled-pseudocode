/*
 * XREFs of NdisIfFreeNetLuidIndex @ 0x1C0114960
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00634A8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F67C (ndisFilterAttachCleanUp.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_dl @ 0x1C006734C (WPP_RECORDER_SF_dl_ea_1C006734C.c)
 *     WPP_RECORDER_SF_dlL @ 0x1C0067408 (WPP_RECORDER_SF_dlL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C01142B8 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

NDIS_STATUS __stdcall NdisIfFreeNetLuidIndex(NET_IFTYPE ifType, UINT32 NetLuidIndex)
{
  NDIS_STATUS v4; // ebx
  _LIST_ENTRY *i; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  UINT32 v8; // r8d
  _LIST_ENTRY *Blink; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int Timeout; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dl(*((_QWORD *)WPP_GLOBAL_Control + 8), NetLuidIndex);
  KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
  if ( NetLuidIndex > 0x1000 )
  {
LABEL_13:
    v4 = -1073741811;
  }
  else
  {
    for ( i = ndisIfTypesList.Flink; i != &ndisIfTypesList; i = i->Flink )
    {
      if ( LOWORD(i[1].Flink) == ifType )
      {
        v6 = NetLuidIndex >> 3;
        if ( (int)v6 + 1 < (unsigned int)v6 || LODWORD(i[2].Blink) < (unsigned int)(v6 + 1) )
          goto LABEL_13;
        v7 = (unsigned int)v6;
        v8 = NetLuidIndex & 7;
        *((_BYTE *)&i[3].Flink->Flink + (unsigned int)v6) = *((_BYTE *)&i[3].Flink->Flink + v6) & ~(1 << v8);
        Blink = i[3].Blink;
        v10 = *((unsigned __int8 *)&Blink->Flink + (unsigned int)v6);
        if ( _bittest(&v10, v8) )
        {
          *((_BYTE *)&Blink->Flink + v7) = v10 & ~(1 << v8);
          v4 = ndisIfWriteRegistry((struct _NDIS_IF_TYPE *)i);
        }
        break;
      }
    }
  }
  KeReleaseMutex(&ndisUsedIndicesMutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dlL(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v12, v13, Timeout);
  return v4;
}
