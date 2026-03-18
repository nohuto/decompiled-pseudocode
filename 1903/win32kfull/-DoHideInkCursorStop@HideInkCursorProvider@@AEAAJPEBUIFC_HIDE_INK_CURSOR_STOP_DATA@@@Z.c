/*
 * XREFs of ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C024FA80
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024FEA0 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C02507C0 (-TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01DD620 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2)
{
  char *v2; // rbx
  const CHAR *v5; // rdx
  __int64 v6; // r10
  LPCGUID v7; // r9
  int v9; // [rsp+30h] [rbp-39h] BYREF
  HideInkCursorProvider *v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  const char *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  HideInkCursorProvider **v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  char *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  v2 = (char *)this + 56;
  if ( (*((_DWORD *)this + 14))-- == 1 )
    Feedback::ForceHidePenCursor(0LL);
  if ( dword_1C0321298 > 4u )
  {
    v5 = (const CHAR *)*((_QWORD *)this + 6);
    v12 = &v9;
    v13 = 4LL;
    v14 = "Removed hide cursor request";
    v9 = 0;
    v15 = 28LL;
    TlgCreateSz(&pDesc, v5);
    v10 = this;
    v17 = &v10;
    v18 = 8LL;
    v19 = v2;
    v20 = v6;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E929A, 0LL, v7, 7u, &pData);
  }
  return 0LL;
}
