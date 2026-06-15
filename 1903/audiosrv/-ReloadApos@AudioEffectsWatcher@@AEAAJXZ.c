/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800CC5B4
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800CC280 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180010080 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180119288 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int SystemEffect; // edi
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rax
  bool v6; // r14
  unsigned int v7; // esi
  struct IAudioSystemEffects2 **v8; // rbx
  struct IAudioSystemEffects2 *v9; // rcx
  GUID *v10; // rax
  struct _GUID v11; // xmm0
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // [rsp+20h] [rbp-69h]
  struct ICompositeSystemEffect **v14; // [rsp+28h] [rbp-61h]
  struct IAudioProcessingObject **v15; // [rsp+30h] [rbp-59h]
  CEndpointCharacteristics *v16; // [rsp+70h] [rbp-19h] BYREF
  struct _tagpropertykey v17; // [rsp+80h] [rbp-9h] BYREF
  struct _GUID v18; // [rsp+A0h] [rbp+17h] BYREF
  struct _GUID v19; // [rsp+B0h] [rbp+27h] BYREF

  v16 = 0LL;
  SystemEffect = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                   g_pEndpointCharacteristicsCache,
                   *((_QWORD *)this + 3),
                   0LL,
                   0LL,
                   &v16);
  if ( SystemEffect >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v16 + 56LL))(v16);
    SystemEffect = DeriveAudioProcessingModeConfiguration(
                     *((_DWORD *)this + 8),
                     *((_DWORD *)this + 9),
                     0,
                     v16,
                     v3 != 0,
                     0,
                     eHostProcessConnector,
                     1,
                     0,
                     0LL,
                     &v19,
                     0LL,
                     0LL);
    if ( SystemEffect >= 0 )
    {
      v5 = *(_QWORD *)&v19.Data1 - *((_QWORD *)this + 5);
      if ( *(_QWORD *)&v19.Data1 == *((_QWORD *)this + 5) )
        v5 = *(_QWORD *)v19.Data4 - *((_QWORD *)this + 6);
      v6 = v5 == 0;
      v7 = 0;
      v8 = (struct IAudioSystemEffects2 **)((char *)this + 128);
      while ( 1 )
      {
        if ( !v6 )
        {
          v9 = *v8;
          if ( *v8 )
          {
            *v8 = 0LL;
            ((void (__fastcall *)(struct IAudioSystemEffects2 *))v9->lpVtbl->Release)(v9);
          }
        }
        if ( !*v8 )
        {
          v10 = &v19;
          if ( *((_BYTE *)v8 - 4) )
            v10 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v17.fmtid = *(GUID *)(v8 - 3);
          v11 = *v10;
          v17.pid = *((_DWORD *)v8 - 2);
          v18 = v11;
          SystemEffect = CEndpointCharacteristics::GetSystemEffect(v16, &v17, &v18, v4, v13, v14, v15, v8);
          if ( SystemEffect < 0 )
            break;
        }
        ++v7;
        v8 += 4;
        if ( v7 >= 3 )
        {
          SystemEffect = 0;
          break;
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)SystemEffect;
}
