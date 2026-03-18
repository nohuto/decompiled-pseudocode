/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C0045888
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00471B8 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C0269D30 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 */

ULONG __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, const GUID *a3)
{
  ULONG result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    return McTemplateK0xq(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
