/*
 * XREFs of ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140016B70
 * Callers:
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400045F4 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140005F90 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140016AE0 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 * Callees:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140016BE4 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGra.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateStreamingResourceManager(struct IAudioStreamingResourceRegistration **a1)
{
  int v2; // edi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IAudioStreamingResourceRegistration **); // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IAudioStreamingResourceRegistration **); // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v5 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager,>(&v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    v2 = (**v5)(v5, &GUID_be7a4789_2891_49b3_923e_dc97de058472, a1);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioStreamingResourceRegistration **)))(*v3)[2])(v3);
  }
  return (unsigned int)v2;
}
