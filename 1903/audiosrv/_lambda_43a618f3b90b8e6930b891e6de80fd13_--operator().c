/*
 * XREFs of _lambda_43a618f3b90b8e6930b891e6de80fd13_::operator() @ 0x1800ED83C
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180011B00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall lambda_43a618f3b90b8e6930b891e6de80fd13_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE *result; // rax
  __int64 v5; // rcx

  if ( **(_DWORD **)a1 != 1 )
  {
    if ( **(_BYTE **)(a1 + 8) )
    {
      v2 = **(_QWORD **)(a1 + 16);
      *(GUID *)(v2 + 16LL * (unsigned int)(*(_DWORD *)(v2 + 96))++ + 200) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    }
    if ( **(_BYTE **)(a1 + 24) || **(_BYTE **)(a1 + 32) )
    {
      v3 = **(_QWORD **)(a1 + 16);
      *(GUID *)(v3 + 16LL * (unsigned int)(*(_DWORD *)(v3 + 96))++ + 200) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
    }
  }
  result = *(_BYTE **)(a1 + 40);
  if ( *result )
  {
    v5 = **(_QWORD **)(a1 + 16);
    result = (_BYTE *)(2LL * *(unsigned int *)(v5 + 96));
    *(GUID *)(v5 + 16LL * (unsigned int)(*(_DWORD *)(v5 + 96))++ + 200) = GUID_0fa53099_5317_46af_9376_9a04a4b550f9;
  }
  return result;
}
