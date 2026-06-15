/*
 * XREFs of ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004F7D8
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18004E4CC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004ECF4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18004E468 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
        CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        char a4,
        struct CAudioSignalProcessingModeArray *a5)
{
  HRESULT v6; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx
  PROPVARIANT pvar; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  GUID pclsid; // [rsp+38h] [rbp-18h] BYREF

  pvar = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v6 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a2->lpVtbl->GetValue)(
         a2,
         a3,
         &pvar) >= 0
    && (_WORD)pvar == 4127
    && (_DWORD)v11 )
  {
    v8 = 0LL;
    do
    {
      v6 = CLSIDFromString(*(LPCOLESTR *)(v12 + 8 * v8), &pclsid);
      if ( v6 < 0 )
        break;
      if ( a4 )
        goto LABEL_16;
      v9 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v9 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v9 )
      {
LABEL_16:
        v6 = CAudioSignalProcessingModeArray::AddMultiple(a5, 1u, &pclsid);
        if ( v6 < 0 )
          break;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < (unsigned int)v11 );
  }
  PropVariantClear(&pvar);
  return (unsigned int)v6;
}
