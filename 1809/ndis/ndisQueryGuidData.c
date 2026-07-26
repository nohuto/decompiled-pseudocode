/*
 * XREFs of ndisQueryGuidData @ 0x1C00B4E54
 * Callers:
 *     ndisWmiQueryAllData @ 0x1C00B4384 (ndisWmiQueryAllData.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B5580 (ndisWmiQuerySingleInstance.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009B60 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWmiGetGuid @ 0x1C0009C20 (ndisWmiGetGuid.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisWmiQueryPMActiveCapabilities @ 0x1C00E8E6C (ndisWmiQueryPMActiveCapabilities.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00F7B20 (ndisNDKWmiGetAdapterCapabilities.c)
 */

__int64 __fastcall ndisQueryGuidData(
        CHAR *a1,
        size_t Size,
        struct _NDIS_MINIPORT_BLOCK *a3,
        void *a4,
        _QWORD *a5,
        int a6,
        struct _NDIS_MINIPORT_BLOCK *a7)
{
  __int64 v7; // rsi
  size_t v9; // r14
  CHAR v12; // di
  PCSZ v13; // rsi
  int v14; // eax
  NTSTATUS v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rcx
  bool v25; // r12
  __int64 v27; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  char *v29; // rcx
  __int64 Length; // rax
  CHAR v31; // al
  unsigned int PnPFlags; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  struct _NDIS_MINIPORT_BLOCK *v35; // rcx
  int SetMiniport; // eax
  unsigned int v37; // r14d
  int v38; // eax
  int v39; // eax
  CHAR *v40; // rsi
  unsigned __int16 v41; // dx
  __int64 v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43; // [rsp+38h] [rbp-C8h]
  PCSZ SourceString; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+58h] [rbp-A8h]
  void *v47; // [rsp+70h] [rbp-90h]
  _STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v49[248]; // [rsp+90h] [rbp-70h] BYREF

  v7 = (__int64)a7;
  v9 = (unsigned int)Size;
  v47 = a4;
  v12 = 0;
  v43 = Size;
  SourceString = 0LL;
  memset(v49, 0, sizeof(v49));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a3, a7);
  if ( !(_DWORD)v9 )
  {
    v15 = 0;
    goto LABEL_33;
  }
  memset(a1, 0, v9);
  ndisWmiGetGuid(&SourceString, (__int64)a3, a5, 0);
  v13 = SourceString;
  if ( !SourceString )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x1Fu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a3);
LABEL_47:
    v15 = -1073741811;
    goto LABEL_32;
  }
  v14 = *((_DWORD *)SourceString + 6);
  if ( (v14 & 0x20000000) != 0 )
  {
    v15 = 0;
    v16 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v16 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( v16 )
    {
      v17 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
      if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
        v17 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
      if ( v17 )
      {
        v18 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
        if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
          v18 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
        if ( v18 )
        {
          v19 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
          if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
            v19 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
          if ( v19 )
          {
            v20 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
            if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
              v20 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
            if ( v20 )
            {
              v21 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
                v21 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
              if ( !v21 )
              {
                *(_DWORD *)a1 = 1835392;
                *((_DWORD *)a1 + 1) = a3->PMAdminConfig.Value & 3;
                *((_DWORD *)a1 + 2) = (a3->PMAdminConfig.Value >> 2) & 3;
                *((_DWORD *)a1 + 3) = (a3->PMAdminConfig.Value >> 4) & 3;
                *((_DWORD *)a1 + 4) = (a3->PMAdminConfig.Value >> 6) & 3;
                *((_DWORD *)a1 + 5) = (a3->PMAdminConfig.Value >> 8) & 3;
                *((_DWORD *)a1 + 6) = (a3->PMAdminConfig.Value >> 10) & 3;
                goto LABEL_32;
              }
              v22 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
                v22 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
              if ( !v22 )
              {
                ndisWmiQueryPMActiveCapabilities(a3, a1);
                goto LABEL_32;
              }
              v23 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
                v23 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
              if ( !v23 )
              {
                CombinedNdisRSSParameters = a3->CombinedNdisRSSParameters;
                v25 = CombinedNdisRSSParameters != 0LL;
                if ( (a3->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 && CombinedNdisRSSParameters )
                  v25 = (CombinedNdisRSSParameters->Flags & 0x10) == 0
                     && LOBYTE(CombinedNdisRSSParameters->HashInformation);
                *a1 = v25;
                goto LABEL_32;
              }
              v27 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                v27 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
              if ( !v27 )
              {
                NDKBlock = ndisGetNDKBlock(a3);
                if ( NDKBlock )
                  v12 = *((_BYTE *)NDKBlock + 24);
                *a1 = v12;
                goto LABEL_32;
              }
              v33 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                v33 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
              if ( !v33 )
              {
                ndisNDKWmiGetAdapterCapabilities(a3, (unsigned int)v9, a1);
                goto LABEL_32;
              }
              if ( v47 )
              {
                v34 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
                if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                  v34 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
                if ( !v34 )
                  goto LABEL_32;
              }
              goto LABEL_47;
            }
            if ( (a3->PnPFlags & 0x4000001) == 0x4000001
              && (unsigned int)(a3->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
            {
              v31 = BYTE1(a3->PnPCapabilities) & 1;
              goto LABEL_52;
            }
          }
          else
          {
            PnPFlags = a3->PnPFlags;
            if ( (PnPFlags & 0x4000001) == 0x4000001 && !a3->AoAc )
            {
              *a1 = (PnPFlags & 0x40) != 0;
              goto LABEL_32;
            }
          }
        }
        else if ( (a3->PnPFlags & 0x8001) == 1 && !a3->AoAc )
        {
          v31 = (a3->PnPCapabilities & 8) == 0;
LABEL_52:
          *a1 = v31;
          goto LABEL_32;
        }
LABEL_53:
        v15 = -1073741808;
        goto LABEL_32;
      }
      *(_QWORD *)&v46 = 0LL;
      v29 = a1 + 18;
      *((_QWORD *)&v46 + 1) = a3->NetLuid.Value;
      DWORD1(v46) = a3->IfIndex;
      Length = a3->MiniportName.Length;
      LODWORD(v46) = 1573124;
      *(_OWORD *)a1 = v46;
      *((_WORD *)a1 + 8) = Length;
    }
    else
    {
      v29 = a1 + 2;
      *(_WORD *)a1 = a3->MiniportName.Length;
    }
    memmove(v29, a3->MiniportName.Buffer, a3->MiniportName.Length);
LABEL_32:
    v7 = (__int64)a7;
    goto LABEL_33;
  }
  if ( (v14 & 0x80u) != 0 )
  {
    v15 = 0;
    goto LABEL_32;
  }
  if ( (v14 & 1) == 0 )
    goto LABEL_53;
  if ( (v14 & 0x10) != 0 )
  {
    LODWORD(v9) = v9 - 4;
    SourceString = a1 + 4;
LABEL_86:
    v43 = v9;
    goto LABEL_87;
  }
  if ( (v14 & 4) == 0 && (v14 & 8) == 0 )
  {
    SourceString = a1;
    goto LABEL_87;
  }
  LODWORD(v9) = v9 - 2;
  v43 = v9;
  SourceString = a1 + 2;
  if ( (v14 & 4) != 0 )
  {
    LODWORD(v9) = ((unsigned int)v9 >> 1) + 1;
    goto LABEL_86;
  }
LABEL_87:
  memset(v49, 0, sizeof(v49));
  *(_DWORD *)&v49[88] |= 8u;
  *(_QWORD *)&v49[104] = &ndisIntReqWmi;
  *(_DWORD *)v49 = 15466902;
  *(_DWORD *)&v49[32] = *((_DWORD *)v13 + 4);
  *(_QWORD *)&v49[40] = SourceString;
  *(_QWORD *)&v49[4] = 2LL;
  *(_DWORD *)&v49[48] = v9;
  if ( a4 || (v35 = a7) == 0LL )
    v35 = a3;
  SetMiniport = ndisQuerySetMiniport(v35, a4, (struct _NDIS_OID_REQUEST *)v49, 0LL, 0LL);
  v37 = SetMiniport;
  if ( !SetMiniport )
  {
    v39 = *((_DWORD *)v13 + 6);
    v15 = 0;
    if ( (v39 & 0x10) != 0 )
    {
      *(_DWORD *)a1 = v43 / *((_DWORD *)v13 + 5);
    }
    else if ( (v39 & 8) != 0 )
    {
      *(_WORD *)a1 = v43;
    }
    else if ( (v39 & 4) != 0 )
    {
      v40 = (CHAR *)SourceString;
      RtlInitAnsiString(&DestinationString, SourceString);
      v15 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v15 >= 0 )
      {
        v41 = UnicodeString.Length;
        *(_WORD *)a1 = UnicodeString.Length;
        memmove(v40, UnicodeString.Buffer, v41);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    goto LABEL_32;
  }
  if ( (unsigned __int8)byte_1C00A0261 >= 2u )
    WPP_SF_qD(0x20u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a7, SetMiniport);
  if ( (*((_DWORD *)v13 + 6) & 0x200) != 0 )
  {
    if ( (v37 & 0xC0010000) == 0xC0010000 )
      v37 = (unsigned __int16)v37 | 0xC0230000;
    goto LABEL_96;
  }
  if ( v37 == 259
    || v37 == -2147483643
    || (v38 = -1073741823, v37 == -1073741823)
    || v37 == -1073741670
    || v37 == -1073741637 )
  {
LABEL_96:
    v15 = v37;
    goto LABEL_32;
  }
  if ( v37 == -1073676266 )
  {
    v15 = -1073741789;
    goto LABEL_32;
  }
  v7 = (__int64)a7;
  if ( v37 == -1073676268 )
  {
    v15 = -1073741306;
  }
  else
  {
    if ( v37 == -1073676267 )
      v38 = -1073741811;
    v15 = v38;
  }
LABEL_33:
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
  {
    LODWORD(v42) = v15;
    WPP_SF_qqd(0x21u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a3, v7, v42);
  }
  return (unsigned int)v15;
}
