/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488
 * Callers:
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001B3C0 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C70 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAE8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0063D7C (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0063E28 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065BD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C0067820 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0067FF8 (ndisIfSetIfDescr.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisNsiSyncMiniportMediaConnectStateNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109908 (-ndisNsiSyncMiniportMediaConnectStateNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958 (ndisIfUpdateInterfaceHiddenFlag.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C0114E90 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C0115010 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C011509C (ndisIfUpdateL2MtuSizeAndNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B514 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

char __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v4; // rbp
  char result; // al
  int v10; // edx
  __int64 v11; // xmm1_8
  int v12; // edx
  char v13; // [rsp+30h] [rbp-68h]
  _OWORD v14[4]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1376);
  result = ndisIsCompartmentEnumerable(v4);
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v10;
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        22,
        138,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
        a1,
        v13);
      v4 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1376);
    }
    memset(v14, 0, sizeof(v14));
    *(_QWORD *)&v14[0] = ndisNsiSavedClientNpi;
    *(_QWORD *)&v14[1] = a1 + 1312;
    WORD4(v14[0]) = a4;
    HIDWORD(v14[0]) = a2;
    DWORD2(v14[1]) = 8;
    if ( a2 )
    {
      *((_QWORD *)&v14[2] + 1) = 0LL;
    }
    else
    {
      v11 = *(_QWORD *)(a3 + 16);
      v14[2] = *(_OWORD *)a3;
      *(_QWORD *)&v14[3] = v11;
    }
    DWORD2(v14[3]) = v4->CompartmentId;
    result = (*(__int64 (__fastcall **)(_OWORD *))(qword_1C00E5EC8 + 8))(v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               v12,
               22,
               139,
               (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
               a1,
               a2);
    }
  }
  return result;
}
