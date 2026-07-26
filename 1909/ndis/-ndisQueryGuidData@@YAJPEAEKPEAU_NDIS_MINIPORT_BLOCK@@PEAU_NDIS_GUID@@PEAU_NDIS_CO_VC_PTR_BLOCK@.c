/*
 * XREFs of ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C
 * Callers:
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8EDC (ndisWmiQueryAllData.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisWmiGetGuid @ 0x1C002806C (ndisWmiGetGuid.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisWmiQueryPMActiveCapabilities @ 0x1C00776F4 (ndisWmiQueryPMActiveCapabilities.c)
 *     ndisNDKCheckIfEnabledOnMiniport @ 0x1C010095C (ndisNDKCheckIfEnabledOnMiniport.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C0119F1C (ndisNDKWmiGetAdapterCapabilities.c)
 */

__int64 __fastcall ndisQueryGuidData(
        CHAR *a1,
        size_t Size,
        struct _NDIS_MINIPORT_BLOCK *a3,
        const CHAR *a4,
        struct _NDIS_CO_VC_PTR_BLOCK *a5,
        struct _GUID *a6,
        struct _NDIS_MINIPORT_BLOCK *a7)
{
  size_t v9; // r13
  PCSZ v10; // rdi
  unsigned int v11; // edx
  int v12; // eax
  NTSTATUS v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rcx
  bool v23; // r15
  __int64 v25; // rax
  unsigned __int8 v26; // al
  unsigned __int8 *v27; // rcx
  __int64 Length; // rax
  unsigned int PnPFlags; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  struct _NDIS_MINIPORT_BLOCK *v32; // rcx
  unsigned int SetMiniport; // eax
  unsigned int v34; // esi
  int v35; // eax
  int v36; // eax
  CHAR *v37; // rdi
  unsigned __int16 v38; // dx
  PCSZ SourceString; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  char v41[8]; // [rsp+58h] [rbp-A8h]
  _STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+70h] [rbp-90h]
  char v44[256]; // [rsp+90h] [rbp-70h] BYREF

  v9 = (unsigned int)Size;
  *(_QWORD *)v41 = a7;
  SourceString = a4;
  v10 = a4;
  memset(v44, 0, 0xF8uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      18,
      30,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a3,
      (char)a7);
  }
  if ( !(_DWORD)v9 )
    goto LABEL_40;
  memset(a1, 0, v9);
  if ( !v10 )
  {
    ndisWmiGetGuid(&SourceString, a3, a6, 0LL);
    v10 = SourceString;
    if ( !SourceString )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          (_DWORD)SourceString + 18,
          (_DWORD)SourceString + 31,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)a3);
      }
      v13 = -1073741811;
      goto LABEL_32;
    }
  }
  v12 = *((_DWORD *)v10 + 6);
  if ( (v12 & 0x20000000) != 0 )
  {
    v13 = 0;
    v14 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v14 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( v14 )
    {
      v15 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
      if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
        v15 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
      if ( v15 )
      {
        v16 = *(_QWORD *)v10 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
        if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
          v16 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
        if ( v16 )
        {
          v17 = *(_QWORD *)v10 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
          if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
            v17 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
          if ( v17 )
          {
            v18 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
            if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
              v18 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
            if ( v18 )
            {
              v19 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
              if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
                v19 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
              if ( !v19 )
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
              v20 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
              if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
                v20 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
              if ( !v20 )
              {
                ndisWmiQueryPMActiveCapabilities(a3, a1);
                goto LABEL_32;
              }
              v21 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
              if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
                v21 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
              if ( !v21 )
              {
                CombinedNdisRSSParameters = a3->CombinedNdisRSSParameters;
                v23 = CombinedNdisRSSParameters != 0LL;
                if ( (a3->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 && CombinedNdisRSSParameters )
                  v23 = (CombinedNdisRSSParameters->Flags & 0x10) == 0
                     && LOBYTE(CombinedNdisRSSParameters->HashInformation);
                *a1 = v23;
                goto LABEL_32;
              }
              v25 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
              if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                v25 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
              if ( !v25 )
              {
                v26 = ndisNDKCheckIfEnabledOnMiniport(a3);
LABEL_39:
                *a1 = v26;
                goto LABEL_32;
              }
              v30 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
              if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                v30 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
              if ( v30 )
              {
                if ( !a5 )
                  goto LABEL_73;
                v31 = *(_QWORD *)v10 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
                if ( *(_QWORD *)v10 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                  v31 = *((_QWORD *)v10 + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
                if ( v31 )
LABEL_73:
                  v13 = -1073741811;
              }
              else
              {
                ndisNDKWmiGetAdapterCapabilities(a3, (unsigned int)v9, a1);
              }
              goto LABEL_32;
            }
            v11 = 67108865;
            if ( (a3->PnPFlags & 0x4000001) == 0x4000001
              && (unsigned int)(a3->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
            {
              v26 = BYTE1(a3->PnPCapabilities) & 1;
              goto LABEL_39;
            }
          }
          else
          {
            PnPFlags = a3->PnPFlags;
            v11 = 67108865;
            if ( (PnPFlags & 0x4000001) == 0x4000001 && !a3->AoAc )
            {
              *a1 = (PnPFlags & 0x40) != 0;
              goto LABEL_32;
            }
          }
        }
        else if ( (a3->PnPFlags & 0x8001) == 1 && !a3->AoAc )
        {
          v26 = (a3->PnPCapabilities & 8) == 0;
          goto LABEL_39;
        }
LABEL_51:
        v13 = -1073741808;
        goto LABEL_32;
      }
      v27 = (unsigned __int8 *)(a1 + 18);
      *((_QWORD *)&v43 + 1) = a3->NetLuid.Value;
      DWORD1(v43) = a3->IfIndex;
      Length = a3->MiniportName.Length;
      LODWORD(v43) = 1573124;
      *(_OWORD *)a1 = v43;
      *((_WORD *)a1 + 8) = Length;
    }
    else
    {
      v27 = (unsigned __int8 *)(a1 + 2);
      *(_WORD *)a1 = a3->MiniportName.Length;
    }
    memmove(v27, a3->MiniportName.Buffer, a3->MiniportName.Length);
    goto LABEL_32;
  }
  if ( (v12 & 0x80u) != 0 )
  {
LABEL_40:
    v13 = 0;
    goto LABEL_32;
  }
  if ( (v12 & 1) == 0 )
    goto LABEL_51;
  if ( (v12 & 0x10) != 0 )
  {
    LODWORD(v9) = v9 - 4;
    SourceString = a1 + 4;
  }
  else if ( (v12 & 4) != 0 || (v12 & 8) != 0 )
  {
    LODWORD(v9) = v9 - 2;
    SourceString = a1 + 2;
    if ( (v12 & 4) != 0 )
      LODWORD(v9) = ((unsigned int)v9 >> 1) + 1;
  }
  else
  {
    SourceString = a1;
  }
  memset(v44, 0, 0xF8uLL);
  *(_DWORD *)&v44[88] |= 8u;
  *(_QWORD *)&v44[104] = &ndisIntReqWmi;
  *(_DWORD *)v44 = 15466902;
  *(_DWORD *)&v44[32] = *((_DWORD *)v10 + 4);
  *(_QWORD *)&v44[40] = SourceString;
  *(_QWORD *)&v44[4] = 2LL;
  *(_DWORD *)&v44[48] = v9;
  if ( a5 || (v32 = a7) == 0LL )
    v32 = a3;
  SetMiniport = ndisQuerySetMiniportEx((__int64)v32, a5, (__int64)v44, 0, 0LL, 0LL);
  v34 = SetMiniport;
  if ( SetMiniport )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        18,
        32,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a7,
        SetMiniport);
    }
    if ( (*((_DWORD *)v10 + 6) & 0x200) != 0 )
    {
      if ( (v34 & 0xC0010000) == 0xC0010000 )
        v34 = (unsigned __int16)v34 | 0xC0230000;
    }
    else if ( v34 != 259 && v34 != -2147483643 )
    {
      v35 = -1073741823;
      if ( v34 != -1073741823 && v34 != -1073741670 && v34 != -1073741637 )
      {
        if ( v34 == -1073676266 )
        {
          v13 = -1073741789;
        }
        else if ( v34 == -1073676268 )
        {
          v13 = -1073741306;
        }
        else
        {
          if ( v34 == -1073676267 )
            v35 = -1073741811;
          v13 = v35;
        }
        goto LABEL_32;
      }
    }
    v13 = v34;
    goto LABEL_32;
  }
  v36 = *((_DWORD *)v10 + 6);
  v13 = 0;
  if ( (v36 & 0x10) != 0 )
  {
    v11 = (unsigned int)v9 % *((_DWORD *)v10 + 5);
    *(_DWORD *)a1 = (unsigned int)v9 / *((_DWORD *)v10 + 5);
  }
  else if ( (v36 & 8) != 0 )
  {
    *(_WORD *)a1 = v9;
  }
  else if ( (v36 & 4) != 0 )
  {
    v37 = (CHAR *)SourceString;
    RtlInitAnsiString(&DestinationString, SourceString);
    v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( v13 >= 0 )
    {
      v38 = UnicodeString.Length;
      *(_WORD *)a1 = UnicodeString.Length;
      memmove(v37, UnicodeString.Buffer, v38);
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      18,
      33,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a3,
      v41[0],
      v13);
  }
  return (unsigned int)v13;
}
