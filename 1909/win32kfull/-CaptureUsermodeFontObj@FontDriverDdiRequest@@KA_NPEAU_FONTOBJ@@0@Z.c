/*
 * XREFs of ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C01207C8
 * Callers:
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C01205A0 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0120640 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C0149AA0 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C0167C00 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02D4020 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02D4120 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FontDriverDdiRequest::CaptureUsermodeFontObj(struct _FONTOBJ *a1, struct _FONTOBJ *a2)
{
  a1->pvProducer = a2->pvProducer;
  a1->flFontType = a2->flFontType;
  return 1;
}
