/*
 * XREFs of ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000D584
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180005ED0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180009150 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x1800281C0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028710 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPBMRelatedAudioStreamCategory(struct IAudioProcess *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v5; // ebx

  *a3 = a2;
  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 96LL))(a1) && dword_18003D540[*a3] )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 136LL))(a1)
      || (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 376LL))(a1) )
    {
      v5 = *a3;
    }
    *a3 = v5;
  }
  return 0LL;
}
