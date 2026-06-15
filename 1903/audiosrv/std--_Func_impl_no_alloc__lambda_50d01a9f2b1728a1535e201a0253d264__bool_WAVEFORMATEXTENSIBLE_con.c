/*
 * XREFs of std::_Func_impl_no_alloc__lambda_50d01a9f2b1728a1535e201a0253d264__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180038290
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x180004F80 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800383C0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180038694 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180038730 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x1800387D4 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_50d01a9f2b1728a1535e201a0253d264__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call(
        __int64 a1,
        const struct tWAVEFORMATEX **a2)
{
  const struct tWAVEFORMATEX *v2; // r15
  __int64 v4; // r13
  int v5; // ebp
  char v6; // bl
  __int64 v7; // rcx
  int **v8; // rax
  int *v9; // rdi
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // r14
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  if ( IsDolbyMatFormat(*a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(
         *(CEndpointCharacteristics **)(a1 + 8),
         (const struct _GUID *)((char *)&v2[1].nSamplesPerSec + 2)) )
  {
    return 1;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v14 = *(_OWORD *)(a1 + 16);
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v4, v15, 0LL, &v14, 0);
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 192);
    if ( v5 >= *(_DWORD *)(v7 + 8) )
      return 0;
    v8 = (int **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                   v7,
                   v5);
    v9 = *v8;
    v10 = *(_QWORD *)*v8 - v15[0];
    if ( !v10 )
      v10 = *((_QWORD *)v9 + 1) - v15[1];
    if ( !v10 )
    {
      v11 = 0;
      if ( v9[6] > 0 )
        break;
    }
LABEL_7:
    ++v5;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 < 0 || v11 >= v9[6] )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18009F47DLL);
    }
    if ( (unsigned int)CompareWaveFormat(v2, **(const struct tWAVEFORMATEX ***)(v12 + *((_QWORD *)v9 + 2))) )
      return v6;
    ++v11;
    v12 += 8LL;
    if ( v11 >= v9[6] )
      goto LABEL_7;
  }
}
