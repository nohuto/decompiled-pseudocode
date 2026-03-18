/*
 * XREFs of xxxSetCapture @ 0x1C001D290
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     NtUserSetCapture @ 0x1C001D1C0 (NtUserSetCapture.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 * Callees:
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v1 + 396) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == v1)
    && ((v2 = *(__int64 **)(v1 + 112)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2LL), v3) && (LOBYTE(v4) = 1, HMValidateHandleNoSecure(v3, v4))) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
