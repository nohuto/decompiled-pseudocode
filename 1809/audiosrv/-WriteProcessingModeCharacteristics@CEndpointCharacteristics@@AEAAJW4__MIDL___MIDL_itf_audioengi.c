/*
 * XREFs of ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18010DF3C
 * Callers:
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180108DA8 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x18010CD58 (-SerializeProcessingModeCharacteristics@@YAJPEAV-$CSimpleArray@PEAVCConnectorProcessingModeChara.c)
 */

__int64 __fastcall CEndpointCharacteristics::WriteProcessingModeCharacteristics(__int64 a1, int a2, int *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  PROPVARIANT pvar; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-20h]

  pvar = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = PKEY_AudioEngine_ConnectorSignalProcessingMode_Specific_Characteristics;
  v11 = 200 * a2 + 2;
  v4 = SerializeProcessingModeCharacteristics(a3, (unsigned int *)&v8, &v9);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    LOWORD(pvar) = 65;
    v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v5 + 48LL))(v5, &v10, &pvar);
  }
  PropVariantClear(&pvar);
  return (unsigned int)v4;
}
