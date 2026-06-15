/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000E970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002CBC (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int StreamingResourceManagerInternal; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  StreamingResourceManagerInternal = CAudioDeviceGraph::GetStreamingResourceManagerInternal(
                                       (CAudioDeviceGraph *)((char *)this - 16),
                                       a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return StreamingResourceManagerInternal;
}
