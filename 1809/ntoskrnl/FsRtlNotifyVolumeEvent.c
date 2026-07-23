/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x140701940
 * Callers:
 *     RawCleanup @ 0x14069094C (RawCleanup.c)
 *     RawUserFsCtrl @ 0x140701740 (RawUserFsCtrl.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x1405A3BD0 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION Event; // [rsp+20h] [rbp-38h] BYREF

  Event.FileObject = 0LL;
  Event.NameBufferOffset = -1;
  *(_DWORD *)&Event.Version = 2359297;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &Event);
}
