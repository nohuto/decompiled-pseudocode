/*
 * XREFs of ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1801182FC
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800DF320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800015C0 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180005344 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007820 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180007C1C (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDevicePipeFormat(
        LPCWSTR *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int ProcessingModeSpecificDevicePipeFormatKey; // ebx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp-19h]
  struct _GUID v14; // [rsp+50h] [rbp-9h] BYREF
  struct _tagpropertykey v15; // [rsp+60h] [rbp+7h] BYREF

  v12 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 1068);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 1068));
  v13 = v8;
  memset(&pvar, 0, sizeof(pvar));
  *a4 = 0LL;
  v14 = *a3;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v14,
                                                a2 == eKeywordDetectorConnector,
                                                &v15);
  if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
  {
    if ( (*(int (__fastcall **)(LPCWSTR, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)this[5] + 40LL))(
           this[5],
           &v15,
           &pvar) < 0
      || pvar.vt != 65
      || !IsValidWfxBlob(&pvar) )
    {
      PropVariantClear((PROPVARIANT *)&pvar);
      ProcessingModeSpecificDevicePipeFormatKey = CEndpointCharacteristics::RefreshDeviceFormat(this, a2);
      if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
        goto LABEL_12;
      if ( (*(int (__fastcall **)(LPCWSTR, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)this[5] + 40LL))(
             this[5],
             &v15,
             &pvar) < 0
        || pvar.vt != 65
        || !IsValidWfxBlob(&pvar) )
      {
        goto LABEL_11;
      }
    }
    if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
      ProcessingModeSpecificDevicePipeFormatKey = CloneWaveFormat(
                                                    (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                    a4);
    else
LABEL_11:
      ProcessingModeSpecificDevicePipeFormatKey = -2004287480;
  }
LABEL_12:
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDevicePipeFormat", 0x1AA4u, ProcessingModeSpecificDevicePipeFormatKey);
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}
