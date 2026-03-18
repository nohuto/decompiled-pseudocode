/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C004C398
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02A5540 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00357CC (McTemplateK0xq.c)
 */

ULONG __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, const GUID *a3)
{
  ULONG result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    return McTemplateK0xq(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
