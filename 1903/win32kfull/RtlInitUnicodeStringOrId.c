/*
 * XREFs of RtlInitUnicodeStringOrId @ 0x1C00E2FE4
 * Callers:
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B6714 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B834C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E2E38 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DDBD4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02417CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitUnicodeStringOrId(struct _UNICODE_STRING *a1, WCHAR *a2)
{
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(a1, a2);
  }
  else
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 0;
  }
}
