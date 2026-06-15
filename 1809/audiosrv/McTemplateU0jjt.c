/*
 * XREFs of McTemplateU0jjt @ 0x180132D78
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180132AC0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     McGenEventWrite @ 0x180011F2C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0jjt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v6[4] = a4;
  v6[6] = &a5;
  v6[2] = a3;
  v6[3] = 16LL;
  v6[5] = 16LL;
  v6[7] = 4LL;
  return McGenEventWrite(AUDIO_EVENT_PROVIDER_Context, (__int64)&EVT_SYSTEM_EFFECT_APO_INITIALIZED, a3, 4, (__int64)v6);
}
