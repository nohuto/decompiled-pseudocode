/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C004C32C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02A4CA8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 */

ULONG __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, const GUID *a3)
{
  ULONG result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    return McTemplateK0xq(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
