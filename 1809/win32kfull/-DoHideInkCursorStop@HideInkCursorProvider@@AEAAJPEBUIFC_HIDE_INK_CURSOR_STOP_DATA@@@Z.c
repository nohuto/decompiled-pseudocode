/*
 * XREFs of ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C0236E00
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0237210 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C0237B30 (-TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01C9B80 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2)
{
  HideInkCursorProvider *v2; // r10
  const CHAR *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r9
  int v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  const char *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]
  __int64 v18; // [rsp+A0h] [rbp+37h]
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  v2 = this;
  if ( (*((_DWORD *)this + 14))-- == 1 )
    Feedback::ForceHidePenCursor(0LL);
  if ( dword_1C030C390 > 4u )
  {
    v4 = (const CHAR *)*((_QWORD *)v2 + 6);
    v11 = &v8;
    v12 = 4LL;
    v13 = "Removed hide cursor request";
    v8 = 0;
    v14 = 28LL;
    TlgCreateSz(&pDesc, v4);
    v9 = v5;
    v16 = &v9;
    v17 = 8LL;
    v18 = v6;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D65BF, 0LL, 0LL, 7u, &pData);
  }
  return 0LL;
}
