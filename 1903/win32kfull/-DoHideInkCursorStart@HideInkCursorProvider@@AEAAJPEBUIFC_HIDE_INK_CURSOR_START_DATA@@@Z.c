/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C024F97C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024FEA0 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01DD620 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2)
{
  _DWORD *v2; // rdi
  int v4; // eax
  const CHAR *v5; // rdx
  int v6; // r9d
  int v8; // [rsp+30h] [rbp-39h] BYREF
  HideInkCursorProvider *v9; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  const char *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  HideInkCursorProvider **v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  _DWORD *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  v2 = (_DWORD *)((char *)this + 56);
  v4 = *((_DWORD *)this + 14);
  if ( !v4 )
  {
    Feedback::ForceHidePenCursor((Feedback *)1);
    v4 = *((_DWORD *)this + 14);
  }
  *v2 = v4 + 1;
  if ( dword_1C0321298 > 4u )
  {
    v5 = (const CHAR *)*((_QWORD *)this + 6);
    v8 = 0;
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v14 = "Added hide cursor request";
    v12 = 4;
    v15 = 26;
    TlgCreateSz(&pDesc, v5);
    v20 = 0;
    v23 = 0;
    v18 = &v9;
    v9 = this;
    v19 = 8;
    v21 = v2;
    v22 = v6;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E929A, 0LL, 0LL, 7u, &pData);
  }
  return 0LL;
}
