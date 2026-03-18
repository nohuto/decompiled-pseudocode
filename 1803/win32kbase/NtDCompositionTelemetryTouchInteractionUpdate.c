/*
 * XREFs of NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0143BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014B84 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C014784C (-AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionUpdate(unsigned int a1, size_t Size, char *Src)
{
  int updated; // ebx
  struct DirectComposition::CApplicationChannel *v8; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-78h] BYREF

  updated = 0;
  v8 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( !Src || Size != 64 )
    updated = -1073741811;
  if ( updated >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9, Src, Size);
    updated = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
    if ( updated >= 0 )
    {
      updated = DirectComposition::CTelemetryInfo::AddInteractionUpdateInfo(
                  (struct DirectComposition::CApplicationChannel *)((char *)v8 + 528),
                  (struct TOUCH_TELEMETRY_UPDATE_INFO *)v9);
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)updated;
}
