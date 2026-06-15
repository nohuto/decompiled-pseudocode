/*
 * XREFs of _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x180107FF8
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1801054E8 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___ @ 0x1801058CC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc8406445.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x180105B54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180106EEC (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180107034 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18004D008 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x1800D1E8C (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800E2AB8 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180107AEC (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1801089E0 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x180108A54 (-AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x180109778 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall lambda_bc829bb10b63470994cc211668497c87_::operator()(
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a1,
        struct tWAVEFORMATEX *a2,
        bool *a3)
{
  __int64 v6; // rax
  int v7; // esi
  const struct tWAVEFORMATEX ***v8; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edx
  CEndpointCharacteristics *v10; // rcx
  int v11; // eax
  __int64 result; // rax
  int v13; // r9d
  CUnsupportedConnectorFormats *v14; // rcx
  struct PacketSizeConstraints *v15; // [rsp+20h] [rbp-60h]
  char v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  unsigned int v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v19[3]; // [rsp+64h] [rbp-1Ch] BYREF
  struct _GUID v20; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  if ( *(int *)(*(_QWORD *)a1 + 24LL) > 0 )
  {
    while ( 1 )
    {
      v8 = (const struct tWAVEFORMATEX ***)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                             v6 + 16,
                                             v7);
      if ( (unsigned int)CompareWaveFormat(a2, **v8) )
        break;
      v6 = *(_QWORD *)a1;
      if ( ++v7 >= *(_DWORD *)(*(_QWORD *)a1 + 24LL) )
        goto LABEL_6;
    }
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
LABEL_6:
  v9 = *((_DWORD *)a1 + 4);
  v10 = (CEndpointCharacteristics *)*((_QWORD *)a1 + 1);
  v17 = *((_QWORD *)a1 + 7);
  v16 = *((_BYTE *)a1 + 48);
  v15 = (struct PacketSizeConstraints *)*((_QWORD *)a1 + 5);
  v20 = *(struct _GUID *)(a1 + 5);
  v11 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
          v10,
          v9,
          &v20,
          a2,
          v15,
          v16,
          v17,
          v19,
          &v18,
          &v23,
          &v22,
          &v21);
  if ( v11 < 0 )
  {
    if ( AEError::DeviceInUse((AEError *)(unsigned int)v11) )
    {
      CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
        *(CConnectorProcessingModeCharacteristics **)a1,
        a2);
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 188LL) = 1;
    }
    else
    {
      v14 = (CUnsupportedConnectorFormats *)*((_QWORD *)a1 + 8);
      if ( v14 )
      {
        v20 = *(struct _GUID *)(a1 + 5);
        CUnsupportedConnectorFormats::AddUnsupportedFormat(v14, &v20, a2, v13);
      }
    }
    return 0LL;
  }
  result = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
             *(CConnectorProcessingModeCharacteristics **)a1,
             a2,
             v19[0],
             v18,
             v23,
             v22,
             v21);
  if ( a3 )
    *a3 = (int)result >= 0;
  return result;
}
