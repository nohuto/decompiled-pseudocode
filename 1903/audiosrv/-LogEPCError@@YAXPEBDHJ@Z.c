/*
 * XREFs of ?LogEPCError@@YAXPEBDHJ@Z @ 0x180005344
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005060 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114014 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114570 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114B44 (CEndpointCharacteristics--GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114C5C (CEndpointCharacteristics--GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1801182FC (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1801186D8 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

void __fastcall LogEPCError(const char *a1, unsigned int a2, int a3)
{
  const CHAR *v3; // r9
  int v4; // r10d
  LPCGUID v5; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+17h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  unsigned __int8 *Data4; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]
  GUID pRelatedActivityId; // [rsp+A8h] [rbp+6Fh] BYREF

  if ( a3 < 0 )
  {
    *(_DWORD *)pRelatedActivityId.Data4 = a3;
    pRelatedActivityId.Data1 = a2;
    if ( (unsigned int)hProvider > 3 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
      {
        TlgCreateSz(&pDesc, v3);
        v10 = 0;
        v13 = 0;
        Data4 = pRelatedActivityId.Data4;
        p_pRelatedActivityId = &pRelatedActivityId;
        v9 = v4;
        v12 = v4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A3E3, v5, &pRelatedActivityId, 5u, &pData);
      }
    }
  }
}
