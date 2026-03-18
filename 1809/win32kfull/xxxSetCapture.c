/*
 * XREFs of xxxSetCapture @ 0x1C00D1A24
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     NtUserSetCapture @ 0x1C00D0F80 (NtUserSetCapture.c)
 *     xxxIsDragging @ 0x1C0157238 (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 */

unsigned __int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v1 + 388) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) == v1)
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
