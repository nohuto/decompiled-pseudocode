/*
 * XREFs of ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00FBCA0
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C0006400 (WPP_RECORDER_SF_DqL.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisIfQueryMiniportObjectNotPresent(
        struct _NDIS_IF_BLOCK *a1,
        unsigned int a2,
        unsigned int *a3,
        _DWORD *a4)
{
  unsigned __int32 ifMtu; // eax
  unsigned __int64 ifCounterDiscontinuityTime; // rax
  unsigned __int64 RcvLinkSpeed; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (_DWORD)a3, 48);
  if ( a2 <= 0x10285 )
  {
    switch ( a2 )
    {
      case 0x10285u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        RcvLinkSpeed = a1->RcvLinkSpeed;
        break;
      case 0x10106u:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          ifMtu = a1->ifMtu;
          goto LABEL_8;
        }
        return 3221291030LL;
      case 0x10280u:
        if ( *a3 )
        {
          *a3 = 1;
          *(_BYTE *)a4 = a1->ifPromiscuousMode;
          goto LABEL_9;
        }
        return 3221291030LL;
      case 0x10281u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        RcvLinkSpeed = a1->ifLastChange;
        break;
      case 0x10282u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        RcvLinkSpeed = a1->ifCounterDiscontinuityTime;
        break;
      case 0x10283u:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          ifMtu = a1->ifOperStatus;
          goto LABEL_8;
        }
        return 3221291030LL;
      case 0x10284u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        RcvLinkSpeed = a1->XmitLinkSpeed;
        break;
      default:
LABEL_46:
        if ( *a3 >= 8 )
        {
          *a3 = 8;
          *(_QWORD *)a4 = 0LL;
          goto LABEL_9;
        }
        return 3221291030LL;
    }
    *(_QWORD *)a4 = RcvLinkSpeed;
    goto LABEL_9;
  }
  if ( a2 == 66183 )
  {
    if ( *a3 >= 0xD8 )
    {
      *a3 = 216;
      *a4 = a1->ifOperStatus;
      a4[1] = a1->ifOperStatusFlags;
      a4[2] = a1->MediaConnectState;
      a4[3] = a1->MediaDuplexState;
      *((_QWORD *)a4 + 3) = a1->XmitLinkSpeed;
      *((_QWORD *)a4 + 4) = a1->RcvLinkSpeed;
      memset(a4 + 16, 0, 0x90uLL);
      a4[4] = a1->ifMtu;
      *((_BYTE *)a4 + 20) = a1->ifPromiscuousMode;
      *((_BYTE *)a4 + 21) = a1->ifDeviceWakeUpEnable;
      *((_QWORD *)a4 + 5) = a1->ifLastChange;
      ifCounterDiscontinuityTime = a1->ifCounterDiscontinuityTime;
      *((_QWORD *)a4 + 7) = 0LL;
      *((_QWORD *)a4 + 6) = ifCounterDiscontinuityTime;
      a4[52] = a1->CompartmentId;
      a4[53] = a1->SupportedStatistics;
      goto LABEL_9;
    }
    return 3221291030LL;
  }
  if ( a2 != 66184 )
  {
    switch ( a2 )
    {
      case 0x1028Au:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          ifMtu = a1->MediaConnectState;
          goto LABEL_8;
        }
        return 3221291030LL;
      case 0x1028Cu:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          ifMtu = a1->MediaDuplexState;
          goto LABEL_8;
        }
        return 3221291030LL;
      case 0x20106u:
        if ( *a3 >= 0x90 )
        {
          *a3 = 144;
          memset(a4, 0, 0x90uLL);
          goto LABEL_9;
        }
        return 3221291030LL;
    }
    goto LABEL_46;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  ifMtu = a1->ifAdminStatus;
LABEL_8:
  *a4 = ifMtu;
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (_DWORD)a3, 49);
  return 0LL;
}
