/*
 * XREFs of IoGetRelatedTargetDevice @ 0x1406911F8
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x140691240 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x1408ABA20 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1400ED9FC (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
