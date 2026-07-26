/*
 * XREFs of ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0114544
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00648B0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064BA0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddressRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_RCV_ADDRESS *p_ifRcvAddressLength,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NDIS_IF_RCV_ADDRESS *v4; // r15
  char v5; // bp
  unsigned int v6; // ebx
  char *v7; // r13
  int v8; // edi
  int v9; // r14d
  int v10; // edi
  char v11; // bp
  int v12; // eax
  int v13; // r12d
  unsigned int v14; // ecx
  char v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+80h] [rbp+8h]

  v17 = (char)a1;
  v4 = p_ifRcvAddressLength;
  v5 = (char)a1;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)p_ifRcvAddressLength;
    LOBYTE(p_ifRcvAddressLength) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifRcvAddressLength,
      22,
      163,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v16,
      (char)a3);
  }
  v7 = (char *)*((_QWORD *)a3 + 5);
  v8 = *((_DWORD *)a3 + 13);
  v9 = *((_DWORD *)a3 + 12);
  if ( !v7 )
  {
    v10 = 0;
    goto LABEL_17;
  }
  v11 = 0;
  while ( v9 > 0 )
  {
    if ( v11 )
      break;
    if ( v8 )
    {
      if ( v8 != 4 )
        goto LABEL_14;
      v12 = 2;
      v11 = 1;
      p_ifRcvAddressLength = (struct _NDIS_IF_RCV_ADDRESS *)&v4->ifRcvAddressLength;
      v13 = 6;
    }
    else
    {
      v12 = 4;
      p_ifRcvAddressLength = v4;
      v13 = 4;
    }
    if ( v9 < v12 || !p_ifRcvAddressLength )
    {
LABEL_14:
      v11 = 1;
      continue;
    }
    memmove(v7, p_ifRcvAddressLength, (unsigned int)v12);
    v14 = v13 - v8;
    v8 = v13;
    v7 += v14;
    v9 -= v14;
  }
  v10 = v8 - *((_DWORD *)a3 + 13);
  v5 = v17;
  v6 = v10 == 0 ? 0xC000000D : 0;
LABEL_17:
  *((_DWORD *)a3 + 12) = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifRcvAddressLength,
      0x16u,
      0xA4u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v5,
      (char)v4,
      (char)a3,
      v6);
  return v6;
}
