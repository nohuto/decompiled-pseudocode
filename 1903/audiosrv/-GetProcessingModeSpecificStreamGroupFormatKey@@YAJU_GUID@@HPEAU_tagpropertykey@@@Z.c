/*
 * XREFs of ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180137FB0
 * Callers:
 *     ?CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18011615C (-CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessingModeSpecificStreamGroupFormatKey(struct _GUID *a1, int a2, struct _tagpropertykey *a3)
{
  unsigned int v3; // r9d
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 result; // rax

  v3 = 0;
  while ( 1 )
  {
    v4 = &qword_1801B75F0[2 * v3];
    v5 = *v4 - *(_QWORD *)&a1->Data1;
    if ( *v4 == *(_QWORD *)&a1->Data1 )
      v5 = v4[1] - *(_QWORD *)a1->Data4;
    if ( !v5 )
      break;
    if ( ++v3 >= 9 )
      return 2147943568LL;
  }
  a3->pid = v3 + (a2 != 0 ? 602 : 2);
  result = 0LL;
  a3->fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
  return result;
}
