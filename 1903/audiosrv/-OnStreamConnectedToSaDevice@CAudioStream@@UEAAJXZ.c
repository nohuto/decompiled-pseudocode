/*
 * XREFs of ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x180043320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::OnStreamConnectedToSaDevice(CAudioStream *this)
{
  return (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, char *, _QWORD, char *, char *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL))(
           g_SpatialAudioResourceManager,
           (char *)this + 8,
           *((unsigned int *)this + 90),
           (char *)this + 344,
           (char *)this + 368);
}
