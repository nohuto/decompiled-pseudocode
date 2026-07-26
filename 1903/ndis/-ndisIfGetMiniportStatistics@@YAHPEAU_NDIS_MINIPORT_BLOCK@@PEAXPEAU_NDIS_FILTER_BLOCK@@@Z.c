/*
 * XREFs of ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430
 * Callers:
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00FAB00 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00FF134 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0004090 (ndisReferenceMiniportByHandleForNsi.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int SetMiniport; // r14d
  int v7; // edx
  _QWORD *v8; // r15
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _DWORD *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v25[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[20]; // [rsp+160h] [rbp+60h] BYREF

  SetMiniport = 0;
  memset(v25, 0, 0xF8uLL);
  memset(v26, 0, 0x98uLL);
  v24[0] = 0LL;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      22,
      54,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3);
  }
  memset(a2, 0, 0x90uLL);
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi((__int64)a1) )
  {
    memset(v25, 0, 0xF8uLL);
    *(_DWORD *)v25 = 15466902;
    *(_QWORD *)&v25[104] = &ndisIntReqNsi;
    v11 = *(_DWORD *)&v25[88] | 8;
    *(_DWORD *)&v25[32] = 0;
    *(_DWORD *)&v25[88] |= 8u;
    *(_QWORD *)&v25[4] = 2LL;
    *(_QWORD *)&v25[40] = 0LL;
    *(_DWORD *)&v25[48] = 0;
    if ( !a3 )
      *(_DWORD *)&v25[88] = v11 | 0x100000;
    if ( a1->MajorNdisVersion < 6u )
    {
      v21 = &unk_1C00D3160;
      v22 = 18LL;
      do
      {
        switch ( *v21 )
        {
          case 0x20202:
            *(_DWORD *)&v25[32] = 131586;
            goto LABEL_35;
          case 0x20208:
            *(_DWORD *)&v25[32] = 131592;
LABEL_35:
            *v8 = 0LL;
            *(_QWORD *)&v25[40] = v24;
            v24[0] = 0LL;
            *(_DWORD *)&v25[48] = 8;
            SetMiniport = ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3);
            if ( SetMiniport )
              break;
            goto LABEL_41;
          case 0x20219:
            v24[0] = 0LL;
            *(_QWORD *)&v25[40] = v24;
            *v8 = 0LL;
            *(_DWORD *)&v25[32] = 131591;
            *(_DWORD *)&v25[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3) )
              *v8 = v24[0];
            v24[0] = 0LL;
            *(_QWORD *)&v25[40] = v24;
            *(_DWORD *)&v25[32] = 131593;
            *(_DWORD *)&v25[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3) )
              *v8 += v24[0];
            *(_DWORD *)&v25[32] = 131595;
            goto LABEL_27;
          case 0x2021A:
            *v8 = 0LL;
            *(_QWORD *)&v25[40] = v24;
            v24[0] = 0LL;
            *(_DWORD *)&v25[32] = 131585;
            *(_DWORD *)&v25[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3) )
              *v8 = v24[0];
            v24[0] = 0LL;
            *(_QWORD *)&v25[40] = v24;
            *(_DWORD *)&v25[32] = 131587;
            *(_DWORD *)&v25[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3) )
              *v8 += v24[0];
            *(_DWORD *)&v25[32] = 131589;
            goto LABEL_27;
          case 0x2021B:
            v24[0] = 0LL;
            *(_QWORD *)&v25[40] = v24;
            *v8 = 0LL;
            *(_DWORD *)&v25[32] = 131332;
            *(_DWORD *)&v25[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3) )
              *v8 = v24[0];
            *(_DWORD *)&v25[32] = 131333;
LABEL_27:
            v24[0] = 0LL;
            *(_QWORD *)&v25[40] = v24;
            *(_DWORD *)&v25[48] = 8;
            SetMiniport = ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3);
            if ( !SetMiniport )
              *v8 += v24[0];
            break;
          case 0x2021C:
            v24[0] = 0LL;
            v23 = 2LL;
            do
            {
              *v8 = 0LL;
              --v23;
            }
            while ( v23 );
            break;
          default:
            *(_DWORD *)&v25[32] = *v21;
            *(_QWORD *)&v25[40] = v24;
            *v8 = 0LL;
            v24[0] = 0LL;
            *(_DWORD *)&v25[48] = 8;
            SetMiniport = ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3);
            if ( !SetMiniport )
LABEL_41:
              *v8 = v24[0];
            break;
        }
        ++v8;
        ++v21;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      *(_DWORD *)&v25[32] = 131334;
      *(_QWORD *)&v25[40] = v26;
      *(_DWORD *)&v25[48] = 152;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          11,
          55,
          (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
          (char)v25,
          (char)a1);
      }
      SetMiniport = ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, (__int64)a3);
      if ( !SetMiniport )
      {
        v12 = *(_OWORD *)&v26[3];
        *a2 = *(_OWORD *)&v26[1];
        v13 = *(_OWORD *)&v26[5];
        a2[1] = v12;
        v14 = *(_OWORD *)&v26[7];
        a2[2] = v13;
        v15 = *(_OWORD *)&v26[9];
        a2[3] = v14;
        v16 = *(_OWORD *)&v26[11];
        a2[4] = v15;
        v17 = *(_OWORD *)&v26[13];
        a2[5] = v16;
        v18 = *(_OWORD *)&v26[15];
        a2[6] = v17;
        v19 = *(_OWORD *)&v26[17];
        a2[7] = v18;
        a2[8] = v19;
      }
    }
    ndisDereferenceMiniportForNsi((__int64)a1, 3u, 0x3Bu);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0x16u,
      0x38u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      SetMiniport);
  return 0LL;
}
