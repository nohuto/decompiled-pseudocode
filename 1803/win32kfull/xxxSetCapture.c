/*
 * XREFs of xxxSetCapture @ 0x1C0060550
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserSetCapture @ 0x1C00604B0 (NtUserSetCapture.c)
 *     xxxIsDragging @ 0x1C0135D78 (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 */

unsigned __int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v1 + 388) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == v1)
    && ((v2 = *(unsigned __int64 **)(v1 + 104)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2LL), v3) && (LOBYTE(v4) = 1, HMValidateHandleNoSecure(v3, v4))) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
