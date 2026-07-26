/*
 * XREFs of ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0068728
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C0025730 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

void __fastcall ndisSetRestoreMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _X_FILTER *EthDB; // rbx
  struct _NDIS_OID_REQUEST *v3; // r14
  char v4; // r13
  _X_FILTER *p_FTypeOpenList; // rsi
  _NDIS_OPEN_BLOCK *OpenList; // rdi
  int v7; // edx
  unsigned int NextNumAddresses; // eax
  __int64 i; // rbp
  unsigned int v10; // r9d
  __int64 v11; // rcx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r12
  unsigned __int8 *NextMCastAddressBuf; // r11
  unsigned int v14; // r10d
  unsigned int v15; // eax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r8
  __int64 v18; // r15
  _X_FILTER *p_NoFTypeOpenList; // rcx
  char v20; // [rsp+30h] [rbp-38h]

  EthDB = a1->EthDB;
  v3 = a2;
  v4 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      105,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v20);
  }
  p_FTypeOpenList = EthDB;
  OpenList = EthDB->OpenList;
  memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
  NextNumAddresses = EthDB->NextNumAddresses;
  EthDB->NextNumAddresses = 0;
  EthDB->NextOldNumAddresses = NextNumAddresses;
  do
  {
    while ( 1 )
    {
      if ( !OpenList )
      {
        if ( p_FTypeOpenList == EthDB )
          OpenList = EthDB->NoFTypeOpenList;
        p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
        if ( p_FTypeOpenList != EthDB )
          p_NoFTypeOpenList = p_FTypeOpenList;
        p_FTypeOpenList = p_NoFTypeOpenList;
        if ( !OpenList )
        {
          if ( p_NoFTypeOpenList != (_X_FILTER *)&EthDB->NoFTypeOpenList )
            break;
          p_FTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
          OpenList = EthDB->FTypeOpenList;
          if ( !OpenList )
            break;
        }
      }
      for ( i = 0LL; (unsigned int)i < OpenList->NumAddresses; i = (unsigned int)(i + 1) )
      {
        v10 = EthDB->NextNumAddresses;
        v7 = -1;
        v11 = 0LL;
        if ( v10 )
        {
          MCastAddressBuf = OpenList->MCastAddressBuf;
          NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          v7 = -1;
          v14 = *(_DWORD *)&MCastAddressBuf[i].MCastAddress[2];
          while ( 1 )
          {
            v15 = *(_DWORD *)&NextMCastAddressBuf[6 * v11 + 2];
            if ( v15 > v14 )
              break;
            if ( v15 >= v14 )
            {
              v16 = *(_WORD *)&NextMCastAddressBuf[6 * v11];
              v17 = *(_WORD *)MCastAddressBuf[i].MCastAddress;
              if ( v16 > v17 )
                break;
              if ( v16 >= v17 )
                goto LABEL_18;
            }
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= v10 )
              goto LABEL_14;
          }
          v7 = 1;
        }
LABEL_14:
        EthDB->NextNumAddresses = v10 + 1;
        if ( v10 + 1 > EthDB->MaxMulticastAddresses )
          break;
        v18 = (unsigned int)v11;
        if ( v7 > 0 )
          memmove(
            EthDB->NextMCastAddressBuf[(unsigned int)(v11 + 1)],
            EthDB->NextMCastAddressBuf[v11],
            6 * (v10 + 1 - (unsigned int)v11) - 6);
        memmove(EthDB->NextMCastAddressBuf[v18], &OpenList->MCastAddressBuf->MCastAddress[8 * i + 4 * i], 6uLL);
LABEL_18:
        ;
      }
      OpenList = OpenList->FilterNextOpen;
    }
  }
  while ( p_FTypeOpenList != (_X_FILTER *)&EthDB->FTypeOpenList );
  v3->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
  v3->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      106,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v4,
      (char)v3);
  }
}
