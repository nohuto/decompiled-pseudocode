/*
 * XREFs of ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00FAB00
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C0006400 (WPP_RECORDER_SF_DqL.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0113F28 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(
        struct _NDIS_FILTER_BLOCK *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rdi
  unsigned int MiniportStatistics; // r12d
  int v10; // edx
  int v11; // r8d
  unsigned __int64 v12; // r8
  _NDIS_MINIPORT_BLOCK *Miniport; // r13
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // cl
  __int32 ifOperStatus; // ecx
  _NDIS_IF_BLOCK *v19; // rax
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  _NDIS_IF_BLOCK *v21; // [rsp+48h] [rbp-B8h]
  struct _NDIS_OID_REQUEST v22; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  MiniportStatistics = 0;
  memset(&v22, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 50);
  memset(&v22, 0, 0xF8uLL);
  *(_DWORD *)&v22.NdisReserved[16] |= 8u;
  Miniport = a1->Miniport;
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v22.NdisReserved[32] = &ndisIntReqNsi;
  v22.Header = (NDIS_OBJECT_HEADER)15466902;
  v22.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v22.RequestType = 2LL;
  v22.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v22.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  DriverHandle = Miniport->DriverHandle;
  v21 = IfBlock;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  switch ( a2 )
  {
    case 0x10283u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      ifOperStatus = Miniport->IfBlock->ifOperStatus;
      goto LABEL_15;
    case 0x10288u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      ifOperStatus = Miniport->IfBlock->ifAdminStatus;
LABEL_15:
      *(_DWORD *)a4 = ifOperStatus;
      break;
    case 0x10106u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      *(_DWORD *)a4 = IfBlock->ifMtu;
      break;
    case 0x20106u:
      if ( *a3 < 0x90 )
        return 3221291030LL;
      *a3 = 144;
      MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, a4, a1);
      break;
    case 0x10286u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      *(_QWORD *)a4 = 0LL;
      break;
    default:
      if ( a2 <= 0x20202 )
      {
        if ( a2 != 131586 )
        {
          v12 = 0x1C0000000uLL;
          switch ( a2 )
          {
            case 0x10280u:
              if ( !*a3 )
                return 3221291030LL;
              *a3 = 1;
              *a4 = Miniport->IfBlock->ifPromiscuousMode;
              break;
            case 0x10281u:
              if ( *a3 < 8 )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)a4 = IfBlock->ifLastChange;
              break;
            case 0x10282u:
              if ( *a3 < 8 )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)a4 = IfBlock->ifCounterDiscontinuityTime;
              break;
            case 0x10284u:
              if ( *a3 < 8 )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)a4 = IfBlock->XmitLinkSpeed;
              break;
            case 0x10285u:
              if ( *a3 < 8 )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)a4 = IfBlock->RcvLinkSpeed;
              break;
            case 0x10287u:
              if ( *a3 < 0xD8 )
                return 3221291030LL;
              *a3 = 216;
              *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
              *((_DWORD *)a4 + 1) = Miniport->IfBlock->ifOperStatusFlags;
              *((_DWORD *)a4 + 2) = IfBlock->MediaConnectState;
              *((_DWORD *)a4 + 3) = IfBlock->MediaDuplexState;
              *((_QWORD *)a4 + 3) = IfBlock->XmitLinkSpeed;
              *((_QWORD *)a4 + 4) = IfBlock->RcvLinkSpeed;
              MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, a4 + 64, a1);
              v19 = v21;
              *((_DWORD *)a4 + 4) = v21->ifMtu;
              LODWORD(IfBlock) = Miniport->IfBlock->ifPromiscuousMode;
              a4[20] = (unsigned __int8)IfBlock;
              a4[21] = v19->ifDeviceWakeUpEnable;
              *((_QWORD *)a4 + 5) = v19->ifLastChange;
              *((_QWORD *)a4 + 6) = v19->ifCounterDiscontinuityTime;
              *((_QWORD *)a4 + 7) = 0LL;
              *((_DWORD *)a4 + 52) = v19->CompartmentId;
              *((_DWORD *)a4 + 53) = Miniport->IfBlock->SupportedStatistics;
              break;
            case 0x1028Au:
              if ( *a3 < 4 )
                return 3221291030LL;
              *a3 = 4;
              *(_DWORD *)a4 = IfBlock->MediaConnectState;
              break;
            case 0x1028Cu:
              if ( *a3 < 4 )
                return 3221291030LL;
              *a3 = 4;
              *(_DWORD *)a4 = IfBlock->MediaDuplexState;
              break;
            default:
              goto LABEL_53;
          }
          break;
        }
        if ( *a3 >= 8 )
        {
          *a3 = 8;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
          v20 = 0LL;
          v22.DATA.QUERY_INFORMATION.Oid = 131586;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v22, a1);
          if ( !MiniportStatistics )
            v7 = v20;
          *(_QWORD *)a4 = v7;
          break;
        }
        return 3221291030LL;
      }
      switch ( a2 )
      {
        case 0x20208u:
          if ( *a3 >= 8 )
          {
            *a3 = 8;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.Oid = 131592;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v22, a1);
            if ( !MiniportStatistics )
              v7 = v20;
            *(_QWORD *)a4 = v7;
            goto LABEL_16;
          }
          return 3221291030LL;
        case 0x20219u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
          v20 = 0LL;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          if ( MajorNdisVersion >= 6u )
          {
            v22.DATA.QUERY_INFORMATION.Oid = 131609;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
          }
          else
          {
            v22.DATA.QUERY_INFORMATION.Oid = 131591;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v22.DATA.QUERY_INFORMATION.Oid = 131593;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 += v20;
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v22.DATA.QUERY_INFORMATION.Oid = 131595;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 += v20;
          }
          break;
        case 0x2021Au:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
          v20 = 0LL;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          if ( MajorNdisVersion >= 6u )
          {
            v22.DATA.QUERY_INFORMATION.Oid = 131610;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
          }
          else
          {
            v22.DATA.QUERY_INFORMATION.Oid = 131585;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v22.DATA.QUERY_INFORMATION.Oid = 131587;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 += v20;
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v22.DATA.QUERY_INFORMATION.Oid = 131589;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 += v20;
          }
          break;
        case 0x2021Bu:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
          v20 = 0LL;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          if ( MajorNdisVersion >= 6u )
          {
            v22.DATA.QUERY_INFORMATION.Oid = 131611;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
          }
          else
          {
            v22.DATA.QUERY_INFORMATION.Oid = 131332;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v22.DATA.QUERY_INFORMATION.Oid = 131333;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 += v20;
          }
          break;
        case 0x2021Cu:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          if ( MajorNdisVersion >= 6u )
          {
            v20 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = &v20;
            v22.DATA.QUERY_INFORMATION.Oid = 131612;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v22, a1);
            *(_QWORD *)a4 = v20;
          }
          else
          {
            *(_QWORD *)a4 = 0LL;
          }
          break;
        default:
LABEL_53:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)a4 = 0LL;
          v22.DATA.QUERY_INFORMATION.Oid = a2;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = a4;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v22, a1);
          break;
      }
      break;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)IfBlock, v12, 51);
  return MiniportStatistics;
}
