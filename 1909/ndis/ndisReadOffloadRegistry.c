/*
 * XREFs of ndisReadOffloadRegistry @ 0x1C002B2B4
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00306A4 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  PVOID v3; // rsi
  unsigned int v4; // edi
  unsigned int Value; // ecx
  unsigned int IntegerData; // edx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  PNDIS_CONFIGURATION_PARAMETER v48; // rcx
  int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+90h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+A0h] [rbp+40h] BYREF

  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      66,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v3 = ConfigurationHandle;
  v4 = v2;
  Status = v2;
  if ( !v2 )
  {
    a1->OffloadRegistry.Value |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      Value = a1->OffloadRegistry.Value;
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        v7 = IntegerData - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            v8 = Value & 0xFFFFFFFC | 1;
          else
            v8 = Value & 0xFFFFFFFC;
        }
        else
        {
          v8 = Value & 0xFFFFFFFC | 2;
        }
      }
      else
      {
        v8 = Value | 3;
      }
      a1->OffloadRegistry.Value = v8;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v9 = a1->OffloadRegistry.Value;
      v10 = ParameterValue->ParameterData.IntegerData;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v12 = v9 & 0xFFFFFFF3 | 4;
          else
            v12 = v9 & 0xFFFFFFF3;
        }
        else
        {
          v12 = v9 & 0xFFFFFFF3 | 8;
        }
      }
      else
      {
        v12 = v9 | 0xC;
      }
      a1->OffloadRegistry.Value = v12;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v13 = a1->OffloadRegistry.Value;
      v14 = ParameterValue->ParameterData.IntegerData;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            v16 = v13 & 0xFFFFFFCF | 0x10;
          else
            v16 = v13 & 0xFFFFFFCF;
        }
        else
        {
          v16 = v13 & 0xFFFFFFCF | 0x20;
        }
      }
      else
      {
        v16 = v13 | 0x30;
      }
      a1->OffloadRegistry.Value = v16;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v17 = a1->OffloadRegistry.Value;
      v18 = ParameterValue->ParameterData.IntegerData;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
            v20 = v17 & 0xFFFFFF3F | 0x40;
          else
            v20 = v17 & 0xFFFFFF3F;
        }
        else
        {
          v20 = v17 & 0xFFFFFF3F | 0x80;
        }
      }
      else
      {
        v20 = v17 | 0xC0;
      }
      a1->OffloadRegistry.Value = v20;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v21 = a1->OffloadRegistry.Value;
      v22 = ParameterValue->ParameterData.IntegerData;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 == 1 )
            v24 = v21 & 0xFFFFFCFF | 0x100;
          else
            v24 = v21 & 0xFFFFFCFF;
        }
        else
        {
          v24 = v21 & 0xFFFFFCFF | 0x200;
        }
      }
      else
      {
        v24 = v21 | 0x300;
      }
      a1->OffloadRegistry.Value = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v25 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v26 = v25 & 0xFFFFEFFF;
      else
        v26 = v25 | 0x1000;
      a1->OffloadRegistry.Value = v26;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v27 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v28 = v27 & 0xFFFFF7FF;
      else
        v28 = v27 | 0x800;
      a1->OffloadRegistry.Value = v28;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v34 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v35 = v34 & 0xFFFFFBFF;
      else
        v35 = v34 | 0x400;
      a1->OffloadRegistry.Value = v35;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v36 = a1->OffloadRegistry.Value;
      v37 = ParameterValue->ParameterData.IntegerData;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 == 1 )
            v39 = v36 & 0xFFFF9FFF | 0x2000;
          else
            v39 = v36 & 0xFFFF9FFF;
        }
        else
        {
          v39 = v36 & 0xFFFF9FFF | 0x4000;
        }
      }
      else
      {
        v39 = v36 | 0x6000;
      }
      a1->OffloadRegistry.Value = v39;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v40 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v41 = v40 & 0xFFFF7FFF;
      else
        v41 = v40 | 0x8000;
      a1->OffloadRegistry.Value = v41;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v42 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v43 = v42 & 0xFFFEFFFF;
      else
        v43 = v42 | 0x10000;
      a1->OffloadRegistry.Value = v43;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v48 = ParameterValue;
        v49 = a1->OffloadRegistry.Value | 0x400000;
        a1->OffloadRegistry.Value = v49;
        v50 = v48->ParameterData.IntegerData;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( v51 )
          {
            if ( v51 == 1 )
              v52 = v49 & 0xFFCFFFFF | 0x100000;
            else
              v52 = v49 & 0xFFCFFFFF;
          }
          else
          {
            v52 = v49 & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v52 = v49 | 0x300000;
        }
        a1->OffloadRegistry.Value = v52;
      }
    }
    else
    {
      v44 = a1->OffloadRegistry.Value;
      v45 = ParameterValue->ParameterData.IntegerData;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 == 1 )
            v47 = v44 & 0xFFF3FFFF | 0x40000;
          else
            v47 = v44 & 0xFFF3FFFF;
        }
        else
        {
          v47 = v44 & 0xFFF3FFFF | 0x80000;
        }
      }
      else
      {
        v47 = v44 | 0xC0000;
      }
      a1->OffloadRegistry.Value = v47;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v30 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v31 = v30 & 0xFF7FFFFF;
      else
        v31 = v30 | 0x800000;
      a1->OffloadRegistry.Value = v31;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v32 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v33 = v32 & 0xFEFFFFFF;
      else
        v33 = v32 | 0x1000000;
      a1->OffloadRegistry.Value = v33;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
    if ( !Status )
    {
      v53 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v54 = v53 & 0xFDFFFFFF;
      else
        v54 = v53 | 0x2000000;
      a1->OffloadRegistry.Value = v54;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadNvgreStr, NdisParameterInteger);
    if ( !Status )
    {
      v55 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v56 = v55 & 0xFBFFFFFF;
      else
        v56 = v55 | 0x4000000;
      a1->OffloadRegistry.Value = v56;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadVxlanStr, NdisParameterInteger);
    if ( !Status )
    {
      v57 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v58 = v57 & 0xF7FFFFFF;
      else
        v58 = v57 | 0x8000000;
      a1->OffloadRegistry.Value = v58;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UsoIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v59 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v60 = v59 & 0xEFFFFFFF;
      else
        v60 = v59 | 0x10000000;
      a1->OffloadRegistry.Value = v60;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UsoIPv6Str, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v61 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v62 = v61 & 0xDFFFFFFF;
      else
        v62 = v61 | 0x20000000;
      a1->OffloadRegistry.Value = v62;
    }
  }
  if ( v3 )
    NdisCloseConfiguration(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x43u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      v4,
      a1->OffloadRegistry.Value);
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v4;
}
