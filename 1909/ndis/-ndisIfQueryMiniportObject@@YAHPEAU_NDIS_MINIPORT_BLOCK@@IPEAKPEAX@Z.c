/*
 * XREFs of ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00FF134
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C0006400 (WPP_RECORDER_SF_DqL.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0113F28 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryMiniportObject(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned int *a3,
        _DWORD *a4)
{
  __int64 v7; // rsi
  unsigned int v9; // r12d
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  _NDIS_IF_BLOCK *IfBlock; // r15
  int v14; // edx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // cl
  __int32 MiniportMediaConnectState; // eax
  unsigned __int64 ifLastChange; // rax
  unsigned int MiniportStatistics; // eax
  bool v21; // cf
  struct _NDIS_MINIPORT_BLOCK *v22; // rcx
  _QWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v24; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  v9 = 0;
  memset(&v24, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 52);
  memset(&v24, 0, 0xF8uLL);
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v24.NdisReserved[32] = &ndisIntReqNsi;
  v14 = 8;
  DriverHandle = a1->DriverHandle;
  *(_DWORD *)&v24.NdisReserved[16] |= 8u;
  v24.Header = (NDIS_OBJECT_HEADER)15466902;
  v24.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v24.RequestType = 2LL;
  v24.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v24.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( a2 > 0x10288 )
  {
    switch ( a2 )
    {
      case 0x1028Au:
        if ( *a3 < 4 )
          return 3221291030LL;
        *a3 = 4;
        MiniportMediaConnectState = a1->MiniportMediaConnectState;
        goto LABEL_18;
      case 0x1028Cu:
        if ( *a3 < 4 )
          return 3221291030LL;
        *a3 = 4;
        MiniportMediaConnectState = a1->MiniportMediaDuplexState;
        goto LABEL_18;
      case 0x20106u:
        if ( *a3 < 0x90 )
          return 3221291030LL;
        *a3 = 144;
        MiniportStatistics = ndisIfGetMiniportStatistics(a1, a4, 0LL);
        goto LABEL_82;
      case 0x20202u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v24.DATA.QUERY_INFORMATION.Oid = 131586;
        break;
      case 0x20208u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v24.DATA.QUERY_INFORMATION.Oid = 131592;
        break;
      default:
        switch ( a2 )
        {
          case 0x20219u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v21 = MajorNdisVersion < 6u;
            v23[0] = 0LL;
            v22 = a1;
            v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
            if ( v21 )
            {
              v24.DATA.QUERY_INFORMATION.Oid = 131591;
              ndisIfQuerySetMiniport(a1, &v24, 0LL);
              *(_QWORD *)a4 = v23[0];
              v23[0] = 0LL;
              v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
              v24.DATA.QUERY_INFORMATION.Oid = 131593;
              v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v24, 0LL);
              *(_QWORD *)a4 += v23[0];
              v24.DATA.QUERY_INFORMATION.Oid = 131595;
              goto LABEL_65;
            }
            v24.DATA.QUERY_INFORMATION.Oid = 131609;
            break;
          case 0x2021Au:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v21 = MajorNdisVersion < 6u;
            v23[0] = 0LL;
            v22 = a1;
            v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
            if ( v21 )
            {
              v24.DATA.QUERY_INFORMATION.Oid = 131585;
              ndisIfQuerySetMiniport(a1, &v24, 0LL);
              *(_QWORD *)a4 = v23[0];
              v23[0] = 0LL;
              v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
              v24.DATA.QUERY_INFORMATION.Oid = 131587;
              v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v24, 0LL);
              *(_QWORD *)a4 += v23[0];
              v24.DATA.QUERY_INFORMATION.Oid = 131589;
              goto LABEL_65;
            }
            v24.DATA.QUERY_INFORMATION.Oid = 131610;
            break;
          case 0x2021Bu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v21 = MajorNdisVersion < 6u;
            v23[0] = 0LL;
            v22 = a1;
            v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
            if ( v21 )
            {
              v24.DATA.QUERY_INFORMATION.Oid = 131332;
              ndisIfQuerySetMiniport(a1, &v24, 0LL);
              *(_QWORD *)a4 = v23[0];
              v24.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_65:
              v23[0] = 0LL;
              v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
              v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v24, 0LL);
              *(_QWORD *)a4 += v23[0];
              goto LABEL_19;
            }
            v24.DATA.QUERY_INFORMATION.Oid = 131611;
            break;
          case 0x2021Cu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            if ( MajorNdisVersion < 6u )
            {
LABEL_42:
              *(_QWORD *)a4 = v7;
              goto LABEL_19;
            }
            v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
            v23[0] = 0LL;
            v24.DATA.QUERY_INFORMATION.Oid = 131612;
            v9 = ndisIfQuerySetMiniport(a1, &v24, 0LL);
            goto LABEL_69;
          default:
            goto LABEL_59;
        }
        ndisIfQuerySetMiniport(v22, &v24, 0LL);
LABEL_69:
        ifLastChange = v23[0];
        goto LABEL_30;
    }
    *a3 = 8;
    v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    v24.DATA.QUERY_INFORMATION.InformationBuffer = v23;
    v23[0] = 0LL;
    v9 = ndisIfQuerySetMiniport(a1, &v24, 0LL);
    if ( !v9 )
      v7 = v23[0];
    goto LABEL_42;
  }
  switch ( a2 )
  {
    case 0x10288u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      MiniportMediaConnectState = IfBlock->ifAdminStatus;
LABEL_18:
      *a4 = MiniportMediaConnectState;
      goto LABEL_19;
    case 0x10106u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      MiniportMediaConnectState = IfBlock->ifMtu;
      goto LABEL_18;
    case 0x10280u:
      if ( *a3 )
      {
        *a3 = 1;
        *(_BYTE *)a4 = IfBlock->ifPromiscuousMode;
        goto LABEL_19;
      }
      return 3221291030LL;
    case 0x10281u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifLastChange;
      goto LABEL_30;
    case 0x10282u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifCounterDiscontinuityTime;
      goto LABEL_30;
    case 0x10283u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      MiniportMediaConnectState = IfBlock->ifOperStatus;
      goto LABEL_18;
    case 0x10284u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = a1->MiniportXmitLinkSpeed;
      goto LABEL_30;
    case 0x10285u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = a1->MiniportRcvLinkSpeed;
LABEL_30:
      *(_QWORD *)a4 = ifLastChange;
      goto LABEL_19;
    case 0x10286u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      goto LABEL_42;
  }
  if ( a2 != 66183 )
  {
LABEL_59:
    if ( *a3 < 8 )
      return 3221291030LL;
    *a3 = 8;
    v24.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    *(_QWORD *)a4 = 0LL;
    v24.DATA.QUERY_INFORMATION.Oid = a2;
    v24.DATA.QUERY_INFORMATION.InformationBuffer = a4;
    MiniportStatistics = ndisIfQuerySetMiniport(a1, &v24, 0LL);
LABEL_82:
    v9 = MiniportStatistics;
    goto LABEL_19;
  }
  if ( *a3 < 0xD8 )
    return 3221291030LL;
  *a3 = 216;
  *a4 = IfBlock->ifOperStatus;
  a4[1] = IfBlock->ifOperStatusFlags;
  a4[2] = a1->MiniportMediaConnectState;
  a4[3] = a1->MiniportMediaDuplexState;
  *((_QWORD *)a4 + 3) = a1->MiniportXmitLinkSpeed;
  *((_QWORD *)a4 + 4) = a1->MiniportRcvLinkSpeed;
  v9 = ndisIfGetMiniportStatistics(a1, (_OWORD *)a4 + 4, 0LL);
  a4[4] = IfBlock->ifMtu;
  *((_BYTE *)a4 + 20) = IfBlock->ifPromiscuousMode;
  *((_BYTE *)a4 + 21) = IfBlock->ifDeviceWakeUpEnable;
  *((_QWORD *)a4 + 5) = IfBlock->ifLastChange;
  *((_QWORD *)a4 + 6) = IfBlock->ifCounterDiscontinuityTime;
  *((_QWORD *)a4 + 7) = 0LL;
  a4[52] = IfBlock->CompartmentId;
  a4[53] = IfBlock->SupportedStatistics;
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v12, 53);
  return v9;
}
