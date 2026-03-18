/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x14072DEB0
 * Callers:
 *     RawCleanup @ 0x1406B6E6C (RawCleanup.c)
 *     RawUserFsCtrl @ 0x14072DCB8 (RawUserFsCtrl.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140691240 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION v3; // [rsp+20h] [rbp-38h] BYREF

  memset(&v3.Event, 0, 28);
  *(_DWORD *)v3.CustomDataBuffer = 0;
  *(_DWORD *)&v3.Version = 2359297;
  v3.NameBufferOffset = -1;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &v3);
}
