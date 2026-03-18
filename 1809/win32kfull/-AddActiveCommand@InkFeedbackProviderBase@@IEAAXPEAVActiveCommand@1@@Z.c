/*
 * XREFs of ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C0236C04
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0237210 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0239040 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InkFeedbackProviderBase::AddActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  char *v3; // rax
  char **v5; // rcx
  const CHAR *v6; // rdx
  __int64 v7; // r9
  char v8; // cl
  __int64 v9; // r10
  char v10; // [rsp+30h] [rbp-59h] BYREF
  int v11; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v13; // [rsp+60h] [rbp-29h]
  __int64 v14; // [rsp+68h] [rbp-21h]
  const char *v15; // [rsp+70h] [rbp-19h]
  __int64 v16; // [rsp+78h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  char *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  __int64 v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  ++*((_DWORD *)this + 10);
  v3 = (char *)this + 24;
  v5 = (char **)*((_QWORD *)this + 4);
  if ( *v5 != v3 )
    __fastfail(3u);
  *(_QWORD *)a2 = v3;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = (char *)a2;
  *((_QWORD *)v3 + 1) = a2;
  if ( dword_1C030C390 > 4u )
  {
    v6 = (const CHAR *)*((_QWORD *)this + 6);
    v13 = &v11;
    v14 = 4LL;
    v15 = "Added active command";
    v11 = 0;
    v16 = 21LL;
    TlgCreateSz(&pDesc, v6);
    v8 = *(_BYTE *)(v7 + 16);
    v18 = &v10;
    v20 = v7 + 20;
    v22 = v7 + 24;
    v10 = v8;
    v19 = 1LL;
    v21 = 4LL;
    v23 = 8LL;
    v24 = v9;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D673C, 0LL, 0LL, 9u, &pData);
  }
}
