/*
 * XREFs of ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180006460
 * Callers:
 *     ?HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KW4_AudioStreamState@@3@Z @ 0x180007124 (-HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MI.c)
 * Callees:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180009150 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStreamStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v11; // rcx

  v6 = *(_QWORD *)(a1 + 32);
  result = 0LL;
  if ( !v6 || (result = CDuckingManager::OnStreamStateChanged(v6 + 16), (int)result >= 0) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v11 )
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(v11 + 16) + 80LL))(
               v11 + 16,
               a2,
               a3,
               a4,
               a5);
  }
  return result;
}
