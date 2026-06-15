/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D0C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004970 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000C070 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3C0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     _lambda_d6c91c141caa9023ad6869a8fc78e301_::operator() @ 0x140017AF4 (_lambda_d6c91c141caa9023ad6869a8fc78e301_--operator().c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x140042A50 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140043810 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140008DFC (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5, int a6)
{
  HRESULT Instance; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  LPVOID ppv[4]; // [rsp+38h] [rbp-20h] BYREF

  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  v14 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId() == 3 )
  {
    Instance = 0;
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv[0] + 40LL))(ppv[0], a1, &v14);
      if ( Instance >= 0 )
      {
        LOBYTE(v12) = a4;
        LOBYTE(v11) = a3;
        Instance = TrackSystemEffectBehavior(v14, a2, v11, v12, a5, a6);
      }
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
