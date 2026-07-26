/*
 * XREFs of ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B6660
 * Callers:
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00B62A0 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00CCF04 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000A9D0 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000BF50 (ndisReferenceMiniportByHandleForNsi.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int SetMiniport; // r14d
  _QWORD *v7; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _DWORD *v19; // r12
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v23[248]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v24[20]; // [rsp+148h] [rbp+40h] BYREF

  SetMiniport = 0;
  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  v7 = a2;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqq(0x36u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2, a3);
  memset(a2, 0, 0x90uLL);
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi((__int64)a1) )
  {
    memset(v23, 0, sizeof(v23));
    *(_DWORD *)v23 = 15466902;
    *(_QWORD *)&v23[104] = &ndisIntReqNsi;
    v8 = *(_DWORD *)&v23[88] | 8;
    *(_DWORD *)&v23[32] = 0;
    *(_DWORD *)&v23[88] |= 8u;
    *(_QWORD *)&v23[4] = 2LL;
    *(_QWORD *)&v23[40] = 0LL;
    *(_DWORD *)&v23[48] = 0;
    if ( !a3 )
      *(_DWORD *)&v23[88] = v8 | 0x100000;
    if ( a1->MajorNdisVersion < 6u )
    {
      v19 = &unk_1C008E250;
      v20 = 18LL;
      do
      {
        v9 = (unsigned int)*v19;
        switch ( (int)v9 )
        {
          case 131586:
            *(_DWORD *)&v23[32] = 131586;
            goto LABEL_32;
          case 131592:
            *(_DWORD *)&v23[32] = 131592;
LABEL_32:
            *v7 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            v22 = 0LL;
            *(_DWORD *)&v23[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3);
            if ( SetMiniport )
              break;
            goto LABEL_38;
          case 131609:
            v22 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            *v7 = 0LL;
            *(_DWORD *)&v23[32] = 131591;
            *(_DWORD *)&v23[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3) )
              *v7 = v22;
            v22 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            *(_DWORD *)&v23[32] = 131593;
            *(_DWORD *)&v23[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3) )
              *v7 += v22;
            *(_DWORD *)&v23[32] = 131595;
            goto LABEL_24;
          case 131610:
            *v7 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            v22 = 0LL;
            *(_DWORD *)&v23[32] = 131585;
            *(_DWORD *)&v23[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3) )
              *v7 = v22;
            v22 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            *(_DWORD *)&v23[32] = 131587;
            *(_DWORD *)&v23[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3) )
              *v7 += v22;
            *(_DWORD *)&v23[32] = 131589;
            goto LABEL_24;
          case 131611:
            v22 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            *v7 = 0LL;
            *(_DWORD *)&v23[32] = 131332;
            *(_DWORD *)&v23[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3) )
              *v7 = v22;
            *(_DWORD *)&v23[32] = 131333;
LABEL_24:
            v22 = 0LL;
            *(_QWORD *)&v23[40] = &v22;
            *(_DWORD *)&v23[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3);
            if ( !SetMiniport )
              *v7 += v22;
            break;
          case 131612:
            v22 = 0LL;
            v21 = 2LL;
            do
            {
              *v7 = 0LL;
              --v21;
            }
            while ( v21 );
            break;
          default:
            *(_DWORD *)&v23[32] = *v19;
            *(_QWORD *)&v23[40] = &v22;
            *v7 = 0LL;
            v22 = 0LL;
            *(_DWORD *)&v23[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3);
            if ( !SetMiniport )
LABEL_38:
              *v7 = v22;
            break;
        }
        ++v7;
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    else
    {
      memset(v24, 0, 0x98uLL);
      *(_DWORD *)&v23[32] = 131334;
      *(_QWORD *)&v23[40] = v24;
      *(_DWORD *)&v23[48] = 152;
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, (__int64)a3);
      if ( !SetMiniport )
      {
        v10 = *(_OWORD *)&v24[3];
        *a2 = *(_OWORD *)&v24[1];
        v11 = *(_OWORD *)&v24[5];
        a2[1] = v10;
        v12 = *(_OWORD *)&v24[7];
        a2[2] = v11;
        v13 = *(_OWORD *)&v24[9];
        a2[3] = v12;
        v14 = *(_OWORD *)&v24[11];
        a2[4] = v13;
        v15 = *(_OWORD *)&v24[13];
        a2[5] = v14;
        v16 = *(_OWORD *)&v24[15];
        a2[6] = v15;
        v17 = *(_OWORD *)&v24[17];
        a2[7] = v16;
        a2[8] = v17;
      }
    }
    LOBYTE(v9) = 3;
    ndisDereferenceMiniportForNsi((__int64)a1, v9, 0x3Bu);
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqqL(0x37u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2, a3, SetMiniport);
  return 0LL;
}
