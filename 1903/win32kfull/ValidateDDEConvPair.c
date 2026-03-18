/*
 * XREFs of ValidateDDEConvPair @ 0x1C020B6AC
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C0087700 (_PostTransformableMessageIL.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     NtUserPostMessage @ 0x1C00A5560 (NtUserPostMessage.c)
 *     _PostMessageCheckIL @ 0x1C01E40C4 (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0209868 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
