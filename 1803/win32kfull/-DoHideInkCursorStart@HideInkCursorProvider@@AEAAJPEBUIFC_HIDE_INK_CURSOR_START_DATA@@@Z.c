/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C020D884
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C020DD60 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00BC8A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01A7A50 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2)
{
  _DWORD *v2; // r10
  int v3; // r11d
  int v4; // eax
  HideInkCursorProvider *v5; // r9
  const CHAR *v6; // rdx
  const GUID *v7; // r9
  __int64 v8; // r10
  LPCGUID v9; // r8
  int v11; // [rsp+30h] [rbp-39h] BYREF
  const GUID *v12; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  const char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  const GUID **v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  __int64 v21; // [rsp+A0h] [rbp+37h]
  __int64 v22; // [rsp+A8h] [rbp+3Fh]

  v2 = (_DWORD *)((char *)this + 56);
  v3 = 0;
  v4 = *((_DWORD *)this + 14);
  v5 = this;
  if ( !v4 )
  {
    Feedback::ForceHidePenCursor((Feedback *)1);
    v4 = *((_DWORD *)v5 + 14);
  }
  *v2 = v4 + 1;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v6 = (const CHAR *)*((_QWORD *)v5 + 6);
    v14 = &v11;
    v11 = v3;
    v16 = "Added hide cursor request";
    v15 = 4LL;
    v17 = 26LL;
    TlgCreateSz(&pDesc, v6);
    v12 = v7;
    v19 = &v12;
    v20 = 8LL;
    v21 = v8;
    v22 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3BB8, v9, v7, 7u, &pData);
  }
  return 0LL;
}
