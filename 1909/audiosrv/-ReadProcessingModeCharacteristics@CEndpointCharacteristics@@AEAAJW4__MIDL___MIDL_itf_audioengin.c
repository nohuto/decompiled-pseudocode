/*
 * XREFs of ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180052F80
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180053434 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180053034 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::ReadProcessingModeCharacteristics(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  int v5; // ebx
  PROPVARIANT pvar; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 40);
  pvar = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = PKEY_AudioEngine_ConnectorSignalProcessingMode_Specific_Characteristics;
  v11 = 200 * a2 + 2;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(v3, &v10, &pvar);
  if ( v5 >= 0 )
  {
    if ( (_WORD)pvar == 65 )
      v5 = DeserializeProcessingModeCharacteristics((unsigned int)v8, v9, a3);
    else
      v5 = -2147023728;
  }
  PropVariantClear(&pvar);
  return (unsigned int)v5;
}
