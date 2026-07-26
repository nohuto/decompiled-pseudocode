/*
 * XREFs of ndisGetMiniportInfo @ 0x1C00EF6C8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     McTemplateK0jqxb6 @ 0x1C006050C (McTemplateK0jqxb6.c)
 *     WPP_SF_qDDDDDD @ 0x1C0061614 (WPP_SF_qDDDDDD.c)
 *     ndisMDoMiniportOp @ 0x1C00BD33C (ndisMDoMiniportOp.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 *     ndisQueryOidList @ 0x1C00CC7F0 (ndisQueryOidList.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00CE0CC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisQueryDeviceOid @ 0x1C00D1060 (ndisQueryDeviceOid.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00EF050 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00F6F3C (ndisGetMiniportOffloadCapability.c)
 */

__int64 __fastcall ndisGetMiniportInfo(__int64 a1, __int64 a2, _DWORD *a3, char *a4, _DWORD *a5)
{
  char v5; // r13
  unsigned int v8; // r12d
  _DWORD *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char v25; // si
  unsigned int v26; // ecx
  __int16 v27; // ax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r14d
  PVOID PoolWithTag; // rax
  PVOID v34; // r15
  NDIS_STATUS v35; // eax
  PVOID v36; // r14
  unsigned __int16 Length; // cx
  __int64 ParameterType; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+38h] [rbp-C8h]
  __int64 v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  int Status[2]; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v48; // [rsp+70h] [rbp-90h]
  char *v49; // [rsp+78h] [rbp-88h]
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v52[4]; // [rsp+A8h] [rbp-58h] BYREF
  struct _NDIS_PNP_CAPABILITIES v53; // [rsp+C8h] [rbp-38h] BYREF
  SIZE_T v54[32]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)Status = a5;
  v5 = 0;
  Keyword.Buffer = L"*IfType";
  ConfigurationHandle = 0LL;
  v49 = a4;
  v48 = a3;
  v8 = -1073741823;
  *(_DWORD *)&Keyword.Length = 1048590;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xA6u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  *a5 = 1;
  v9 = (_DWORD *)(*(_QWORD *)(a1 + 3792) + 480LL);
  if ( !*v9 )
  {
    v10 = ndisMDoMiniportOp((void *)a1, 1, 65814, (__int64)v9, 4, 1u, 1);
    v11 = *(_QWORD *)(a1 + 3792);
    ndisWriteDriverNDISVersionToServiceKey(
      *(unsigned __int8 *)(v11 + 24),
      *(unsigned __int8 *)(v11 + 25),
      v10 == 0,
      HIWORD(*(_DWORD *)(v11 + 480)),
      (unsigned __int16)*(_DWORD *)(v11 + 480),
      v11 + 488);
  }
  v12 = *(_DWORD *)(a1 + 464);
  if ( !v12 )
  {
    *(_WORD *)(a2 + 180) = 6;
    *(_QWORD *)(a2 + 168) = 2LL;
LABEL_26:
    *(_DWORD *)(a2 + 84) = 47;
    goto LABEL_27;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    *(_WORD *)(a2 + 180) = 23;
    goto LABEL_24;
  }
  v14 = v13 - 5;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      *(_WORD *)(a2 + 180) = 1;
      *(_QWORD *)(a2 + 168) = 3LL;
      *(_DWORD *)(a2 + 176) = 3;
      *(_DWORD *)(a2 + 84) = 47;
      goto LABEL_28;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 3;
          if ( v19 )
          {
            *(_QWORD *)(a2 + 168) = 2LL;
            *(_DWORD *)(a2 + 176) = 1;
            *(_DWORD *)(a2 + 84) = 47;
            if ( v19 == 1 )
              *(_WORD *)(a2 + 180) = 71;
            else
              *(_WORD *)(a2 + 180) = 1;
            goto LABEL_28;
          }
          *(_QWORD *)(a2 + 168) = 3LL;
          *(_WORD *)(a2 + 180) = 131;
          goto LABEL_26;
        }
        *(_WORD *)(a2 + 180) = 1;
LABEL_24:
        *(_QWORD *)(a2 + 168) = 3LL;
        *(_DWORD *)(a2 + 176) = 3;
        *(_DWORD *)(a2 + 84) = 1;
        goto LABEL_28;
      }
      *(_DWORD *)(a2 + 168) = 3;
      *(_DWORD *)(a2 + 172) = 2;
    }
    else
    {
      *(_QWORD *)(a2 + 168) = 3LL;
    }
    *(_WORD *)(a2 + 180) = 1;
    *(_DWORD *)(a2 + 84) = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 168) = 4LL;
    *(_WORD *)(a2 + 180) = 37;
    *(_DWORD *)(a2 + 84) = 39;
  }
LABEL_27:
  *(_DWORD *)(a2 + 176) = 1;
LABEL_28:
  v20 = *(int *)(a1 + 464);
  if ( (int)v20 >= 0 && ((int)v20 >= 20 || (_DWORD)v20 != 3 && ndisMediaTypeCl[v20]) )
  {
    v21 = ndisMDoMiniportOp((void *)a1, 1, 65797, a2 + 64, 4, 1u, 1);
    if ( v21 )
    {
      if ( *(int *)(a1 + 464) < 20 )
      {
        if ( (unsigned __int8)byte_1C00A025C >= 3u )
          WPP_SF_(0xA7u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids);
        if ( (byte_1C00A2083 & 0x10) != 0 )
          McTemplateK0jqxqdq(
            16LL,
            &OidQueryFailed,
            (const GUID *)(a1 + 4040),
            a1 + 4040,
            *(_DWORD *)(a1 + 4088),
            *(_QWORD *)(a1 + 4056),
            5,
            v21,
            222);
        goto LABEL_110;
      }
      *(_DWORD *)(a2 + 64) = 0;
    }
  }
  ndisMDoMiniportOp((void *)a1, 1, 65798, a2 + 16, 4, 1u, 1);
  v22 = *(int *)(a1 + 464);
  if ( (unsigned int)v22 <= 0x13 && ndisMediaTypeCl[v22] || (_DWORD)v22 == 3 )
  {
    v21 = ndisMDoMiniportOp((void *)a1, 1, 65811, a2 + 80, 4, 3u, 1);
    if ( v21 )
    {
      if ( (unsigned __int8)byte_1C00A025C >= 3u )
        WPP_SF_q(0xA8u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
      if ( (byte_1C00A2083 & 0x10) != 0 )
        McTemplateK0jqxqdq(
          16LL,
          &OidQueryFailed,
          (const GUID *)(a1 + 4040),
          a1 + 4040,
          *(_DWORD *)(a1 + 4088),
          *(_QWORD *)(a1 + 4056),
          19,
          v21,
          47);
      goto LABEL_110;
    }
  }
  if ( (*(_BYTE *)(a1 + 928) & 1) != 0 )
  {
    v44 = 16;
    v23 = ndisMDoMiniportOp((void *)a1, 1, 65813, (__int64)&v44, 4, 2u, 1);
    v25 = v23;
    if ( v23 )
    {
      if ( (unsigned __int8)byte_1C00A025C >= 3u )
        WPP_SF_q(0xA9u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
      if ( (byte_1C00A2083 & 0x10) != 0 )
        McTemplateK0jqxqdq(
          v24,
          &OidQueryFailed,
          (const GUID *)(a1 + 4040),
          a1 + 4040,
          *(_DWORD *)(a1 + 4088),
          *(_QWORD *)(a1 + 4056),
          21,
          v25,
          82);
      v26 = 16;
      v44 = 16;
    }
    else
    {
      v26 = v44;
    }
    v27 = 16;
    if ( v26 < 0x10 )
      v27 = v26;
    *(_WORD *)(a1 + 538) = v27;
  }
  v28 = *(_DWORD *)(a1 + 464);
  if ( !v28 )
  {
    v21 = ndisMDoMiniportOp((void *)a1, 1, 16843012, a2 + 88, 4, 7u, 1);
    if ( v21 )
    {
      v5 = 1;
      if ( (unsigned __int8)byte_1C00A025C >= 3u )
        WPP_SF_q(0xAAu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
      if ( (byte_1C00A2083 & 0x10) != 0 )
        McTemplateK0jqxqdq(
          16LL,
          &OidQueryFailed,
          (const GUID *)(a1 + 4040),
          a1 + 4040,
          *(_DWORD *)(a1 + 4088),
          *(_QWORD *)(a1 + 4056),
          4,
          v21,
          129);
    }
    else
    {
      *(_WORD *)(a2 + 92) = 6;
      v21 = ndisMDoMiniportOp((void *)a1, 1, 16843010, a2 + 126, 6, 9u, 1);
      if ( v21 )
      {
        if ( (unsigned __int8)byte_1C00A025C >= 3u )
          WPP_SF_q(0xABu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
        if ( (byte_1C00A2083 & 0x10) != 0 )
          McTemplateK0jqxqdq(
            16LL,
            &OidQueryFailed,
            (const GUID *)(a1 + 4040),
            a1 + 4040,
            *(_DWORD *)(a1 + 4088),
            *(_QWORD *)(a1 + 4056),
            2,
            v21,
            157);
        v5 = 1;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A025C >= 4u )
        {
          LODWORD(v43) = *(unsigned __int8 *)(a2 + 131);
          LODWORD(v42) = *(unsigned __int8 *)(a2 + 130);
          LODWORD(v41) = *(unsigned __int8 *)(a2 + 129);
          LODWORD(v40) = *(unsigned __int8 *)(a2 + 128);
          LODWORD(ParameterType) = *(unsigned __int8 *)(a2 + 127);
          WPP_SF_qDDDDDD(
            *(unsigned __int8 *)(a2 + 130),
            *(unsigned __int8 *)(a2 + 129),
            a1,
            *(unsigned __int8 *)(a2 + 126),
            ParameterType,
            v40,
            v41,
            v42,
            v43);
        }
        if ( Microsoft_Windows_NDISEnableBits < 0 )
          McTemplateK0jqxb6(
            v30,
            v29,
            (const GUID *)(a1 + 4040),
            a1 + 4040,
            *(_DWORD *)(a1 + 4088),
            *(_QWORD *)(a1 + 4056),
            a2 + 126);
        v21 = ndisMDoMiniportOp((void *)a1, 1, 16843009, a2 + 94, *(unsigned __int16 *)(a2 + 92), 9u, 1);
        if ( v21 )
        {
          if ( (unsigned __int8)byte_1C00A025C >= 3u )
            WPP_SF_q(0xADu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
          if ( (byte_1C00A2083 & 0x10) != 0 )
            McTemplateK0jqxqdq(
              16LL,
              &OidQueryFailed,
              (const GUID *)(a1 + 4040),
              a1 + 4040,
              *(_DWORD *)(a1 + 4088),
              *(_QWORD *)(a1 + 4056),
              1,
              v21,
              200);
LABEL_87:
          v5 = 1;
          goto LABEL_93;
        }
        v21 = ndisMDoMiniportOp((void *)a1, 1, 66050, a2 + 12, 4, 0xAu, 1);
        if ( v21 )
        {
          v21 = 0;
          *(_DWORD *)(a2 + 12) = 0;
        }
        else if ( *(_DWORD *)(a2 + 12) == 1 )
        {
          *(_WORD *)(a2 + 180) = 71;
        }
        ndisGetMiniportOffloadCapability(a1);
      }
    }
LABEL_93:
    if ( v21 )
      goto LABEL_110;
    goto LABEL_94;
  }
  if ( v28 == 3 )
  {
    *(_WORD *)(a2 + 92) = 6;
    v21 = ndisMDoMiniportOp((void *)a1, 1, 67174658, a2 + 126, 6, 0x17u, 1);
    if ( !v21 )
    {
      *(_DWORD *)(a2 + 94) = *(_DWORD *)(a2 + 126);
      *(_WORD *)(a2 + 98) = *(_WORD *)(a2 + 130);
      goto LABEL_94;
    }
    if ( (unsigned __int8)byte_1C00A025C >= 3u )
      WPP_SF_q(0xAEu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
    if ( (byte_1C00A2083 & 0x10) != 0 )
      McTemplateK0jqxqdq(
        16LL,
        &OidQueryFailed,
        (const GUID *)(a1 + 4040),
        a1 + 4040,
        *(_DWORD *)(a1 + 4088),
        *(_QWORD *)(a1 + 4056),
        2,
        v21,
        1);
    goto LABEL_87;
  }
  v21 = 0;
LABEL_94:
  if ( ((*(_DWORD *)(a1 + 124) & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 3792) + 26LL) & 1) != 0)
    && *(_DWORD *)(a1 + 464) <= 0x13u )
  {
    *(_QWORD *)&v53.Flags = 0LL;
    *(_QWORD *)&v53.WakeUpCapabilities.MinPatternWakeUp = 0LL;
    v31 = ndisMDoMiniportOp((void *)a1, 1, -50265856, (__int64)&v53, 16, 0x19u, 0);
    **(_DWORD **)Status = v31;
    if ( !v31 )
      ndisConvertPnpCapabilitiesToPM(&v53, *(struct _NDIS_PM_CAPABILITIES **)(a2 + 216));
  }
  *(_BYTE *)(a2 + 182) = (*(_DWORD *)(a1 + 124) & 0x200000) != 0;
  *(_QWORD *)(a2 + 24) = 0x40000000LL;
  *(_QWORD *)(a2 + 32) = 0x40000000LL;
  *(_QWORD *)(a2 + 40) = 0x40000000LL;
  *(_QWORD *)(a2 + 48) = 0x40000000LL;
  *(_QWORD *)(a2 + 56) = 1LL;
  memset(v52, 0, sizeof(v52));
  v52[1] = a1;
  memset(v54, 0, 0xF8uLL);
  if ( (((unsigned int)ndisQueryDeviceOid((__int64)v52, v54, 65793, 0LL, 0) + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    v32 = v54[7];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(v54[7]), 0x2020444Eu);
    v34 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned int)ndisQueryDeviceOid((__int64)v52, v54, 65793, (__int64)PoolWithTag, v32) )
      {
        *(_QWORD *)(a1 + 496) = v34;
        *(_DWORD *)(a1 + 200) = v32;
      }
    }
  }
  ndisQueryOidList((__int64)v52);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  ConfigObject.Flags = 0;
  v35 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v36 = ConfigurationHandle;
  v8 = v35;
  Status[0] = v35;
  if ( !v35 )
  {
    NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    v8 = Status[0];
    if ( !Status[0] )
    {
      Length = ParameterValue->ParameterData.StringData.Length;
      if ( Length != 1 )
        *(_WORD *)(a2 + 180) = Length;
      v8 = 0;
    }
  }
  if ( v36 )
    NdisCloseConfiguration(v36);
LABEL_110:
  *v48 = v21;
  *v49 = v5;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0xAFu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v8);
  return v8;
}
