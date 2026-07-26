/*
 * XREFs of ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00687C8
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C0026540 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0026D54 (ndisUpdateLoopbackOpens.c)
 *     XFilterAdjust @ 0x1C0026D8C (XFilterAdjust.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E48 (ndisUpdateCheckForLoopbackFlag.c)
 */

unsigned __int8 __fastcall ndisSetRestorePacketFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  struct _NDIS_OID_REQUEST *v4; // rbp
  int v6; // edx
  KIRQL v7; // r15
  bool v8; // zf
  _X_FILTER *EthDB; // rcx
  unsigned int CombinedPacketFilter; // ecx
  _NDIS_OPEN_BLOCK *OpenQueue; // rsi
  int v13; // edx
  char v14; // [rsp+30h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      79,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v14);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v8 = a1->MediaType == NdisMedium802_3;
  a1->MiniportThread = KeGetCurrentThread();
  EthDB = a1->EthDB;
  if ( v8 )
  {
    XFilterAdjust((__int64 *)EthDB, 0LL, 0);
    CombinedPacketFilter = a1->EthDB->CombinedPacketFilter;
  }
  else
  {
    CombinedPacketFilter = EthDB->CombinedPacketFilter;
  }
  *a3 = 0;
  if ( v4->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    *(_DWORD *)v4->DATA.QUERY_INFORMATION.InformationBuffer = CombinedPacketFilter;
    if ( (CombinedPacketFilter & 0xA0) != 0 )
    {
      OpenQueue = a1->OpenQueue;
      a1->PmodeOpens = 0;
      while ( OpenQueue )
      {
        if ( (OpenQueue->PacketFilters & 0xA0) != 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          OpenQueue->OpenFlags |= 4u;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          ++a1->PmodeOpens;
          if ( OpenQueue->ProtocolMajorVersion >= 6 )
            ++a1->PmodeOpen6;
          ndisUpdateCheckForLoopbackFlag((__int64)a1);
        }
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
    }
    ndisUpdateLoopbackOpens((__int64)a1);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        11,
        81,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)a1,
        (char)v4);
    }
    return 0;
  }
  else
  {
    v4->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    *a3 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        11,
        80,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)a1,
        (char)v4,
        20);
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    return 1;
  }
}
