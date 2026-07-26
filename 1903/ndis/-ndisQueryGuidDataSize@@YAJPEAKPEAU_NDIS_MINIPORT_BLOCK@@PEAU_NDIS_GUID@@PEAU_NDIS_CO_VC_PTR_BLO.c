/*
 * XREFs of ?ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C001879C
 * Callers:
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qLLDDDDDDDDDD @ 0x1C00194A4 (WPP_RECORDER_SF_qLLDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisWmiGetGuid @ 0x1C002807C (ndisWmiGetGuid.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_qLDDDDDDDDDD @ 0x1C00A7D6C (WPP_RECORDER_SF_qLDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_qLDDDDDDDDDDD @ 0x1C00A7F90 (WPP_RECORDER_SF_qLDDDDDDDDDDD.c)
 */

__int64 __fastcall ndisQueryGuidDataSize(
        unsigned int *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_GUID *a3,
        struct _NDIS_CO_VC_PTR_BLOCK *a4,
        struct _GUID *Guid,
        struct _NDIS_MINIPORT_BLOCK *a6)
{
  struct _NDIS_GUID *v6; // r14
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  int v11; // edx
  unsigned int v12; // r13d
  unsigned int Flags; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int Length; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int SetMiniport; // eax
  unsigned int v29; // r15d
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // [rsp+20h] [rbp-F0h]
  bool v33; // [rsp+90h] [rbp-80h]
  _UNICODE_STRING GuidString; // [rsp+98h] [rbp-78h] BYREF
  struct _NDIS_GUID *v35; // [rsp+A8h] [rbp-68h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v36; // [rsp+B0h] [rbp-60h]
  char v37[256]; // [rsp+C0h] [rbp-50h] BYREF

  v6 = a3;
  v7 = a6;
  v36 = a2;
  v35 = a3;
  memset(v37, 0, 0xF8uLL);
  v33 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C00E6731 >= 4u )
    v33 = RtlStringFromGUID(Guid, &GuidString) >= 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      18,
      26,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a2,
      (__int64)&GuidString);
  if ( v6 )
  {
    v12 = 0;
  }
  else
  {
    v22 = ndisWmiGetGuid(&v35, a2, Guid, 0LL);
    v6 = v35;
    v12 = v22;
    if ( !v35 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLDDDDDDDDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          Guid->Data4[5],
          Guid->Data4[4],
          Guid->Data4[3],
          v32,
          (char)a2,
          Guid->Data1,
          Guid->Data2,
          Guid->Data3,
          Guid->Data4[0],
          Guid->Data4[1],
          Guid->Data4[2],
          Guid->Data4[3],
          Guid->Data4[4],
          Guid->Data4[5],
          Guid->Data4[6],
          Guid->Data4[7]);
      goto LABEL_37;
    }
  }
  Flags = v6->Flags;
  if ( (Flags & 0x20000000) != 0 )
  {
    v12 = 0;
    v14 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v14 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( v14 )
    {
      v15 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
        v15 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
      if ( v15 )
      {
        v16 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
        if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
          v16 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
        if ( v16 )
        {
          v17 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
          if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
            v17 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
          if ( v17 )
          {
            v18 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
            if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
              v18 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
            if ( v18 )
            {
              v21 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
              if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                v21 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
              if ( v21 )
              {
                v23 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
                if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                  v23 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
                if ( !v23 )
                {
                  *a1 = 144;
                  goto LABEL_25;
                }
                v24 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
                if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
                  v24 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
                if ( !v24 )
                  goto LABEL_58;
                v25 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
                if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
                  v25 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
                if ( !v25 )
                {
LABEL_58:
                  *a1 = 28;
                  goto LABEL_25;
                }
                if ( !a4 )
                  goto LABEL_54;
                v26 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
                if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                  v26 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
                if ( v26 )
                {
LABEL_54:
                  v27 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
                  if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
                    v27 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
                  if ( !v27 )
                  {
                    Length = a2->MiniportName.Length + 18;
                    goto LABEL_24;
                  }
LABEL_37:
                  v12 = -1073741811;
                  goto LABEL_25;
                }
                goto LABEL_62;
              }
            }
          }
        }
      }
      Length = 1;
LABEL_24:
      *a1 = Length;
      goto LABEL_25;
    }
    Length = a2->MiniportName.Length;
LABEL_39:
    Length += 2;
    goto LABEL_24;
  }
  if ( (Flags & 0x80u) != 0 )
  {
LABEL_62:
    *a1 = 0;
    goto LABEL_25;
  }
  if ( (Flags & 1) == 0 )
  {
    v12 = -1073741808;
    goto LABEL_25;
  }
  if ( (Flags & 0x10) == 0 && (Flags & 8) == 0 && (Flags & 4) == 0 )
  {
    Length = v6->Size;
    if ( Length != -1 )
    {
      v12 = 0;
      goto LABEL_24;
    }
  }
  memset(v37, 0, 0xF8uLL);
  *(_DWORD *)&v37[88] |= 8u;
  v12 = 0;
  *(_QWORD *)&v37[104] = &ndisIntReqWmi;
  *(_DWORD *)v37 = 15466902;
  *(_DWORD *)&v37[32] = v6->Oid;
  *(_QWORD *)&v37[4] = 2LL;
  *(_QWORD *)&v37[40] = 0LL;
  *(_DWORD *)&v37[48] = 0;
  if ( a4 || !a6 )
    v7 = a2;
  SetMiniport = ndisQuerySetMiniportEx((__int64)v7, a4, (__int64)v37, 0, 0LL, 0LL);
  v29 = SetMiniport;
  if ( SetMiniport == -1073676268 || SetMiniport == -1073676266 || !SetMiniport )
  {
    v31 = v6->Flags;
    Length = *(_DWORD *)&v37[56];
    if ( (v31 & 4) != 0 )
    {
      Length = 2 * *(_DWORD *)&v37[56] + 4;
      goto LABEL_24;
    }
    if ( (v31 & 8) == 0 )
    {
      if ( (v31 & 0x10) != 0 )
        Length = *(_DWORD *)&v37[56] + 4;
      goto LABEL_24;
    }
    goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLDDDDDDDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Guid->Data4[5],
      Guid->Data4[4],
      Guid->Data4[3],
      v32,
      (char)v36,
      Guid->Data1,
      Guid->Data2,
      Guid->Data3,
      Guid->Data4[0],
      Guid->Data4[1],
      Guid->Data4[2],
      Guid->Data4[3],
      Guid->Data4[4],
      Guid->Data4[5],
      Guid->Data4[6],
      Guid->Data4[7],
      SetMiniport);
  if ( (v6->Flags & 0x200) != 0 )
  {
    if ( (v29 & 0xC0010000) == 0xC0010000 )
      v29 = (unsigned __int16)v29 | 0xC0230000;
    goto LABEL_79;
  }
  if ( v29 == 259
    || v29 == -2147483643
    || (v30 = -1073741823, v29 == -1073741823)
    || v29 == -1073741670
    || v29 == -1073741637 )
  {
LABEL_79:
    v12 = v29;
    goto LABEL_25;
  }
  if ( v29 == -1073676267 )
    v30 = -1073741811;
  v12 = v30;
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLDDDDDDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Guid->Data4[5],
      Guid->Data4[4],
      Guid->Data4[3],
      v32,
      (char)v36,
      v12,
      Guid->Data1,
      Guid->Data2,
      Guid->Data3,
      Guid->Data4[0],
      Guid->Data4[1],
      Guid->Data4[2],
      Guid->Data4[3],
      Guid->Data4[4],
      Guid->Data4[5],
      Guid->Data4[6],
      Guid->Data4[7]);
  if ( v33 )
    RtlFreeUnicodeString(&GuidString);
  return v12;
}
