/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140016AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140016B70 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct IAudioStreamingResourceRegistration **v4; // rdi
  int StreamingResourceManager; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  v4 = (struct IAudioStreamingResourceRegistration **)((char *)this + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  *a2 = 0LL;
  if ( *v4 || (StreamingResourceManager = CreateStreamingResourceManager(v4), StreamingResourceManager >= 0) )
  {
    *a2 = *v4;
    if ( *v4 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)*v4 + 8LL))(*v4);
    StreamingResourceManager = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)StreamingResourceManager;
}
