/*
 * XREFs of ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002CCC
 * Callers:
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000E980 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010120 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C80 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140003010 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManagerInternal(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (_QWORD *)((char *)this + 368);
  if ( *((_QWORD *)this + 46)
    || (result = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46),
        (int)result >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*v2;
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
    return 0LL;
  }
  return result;
}
