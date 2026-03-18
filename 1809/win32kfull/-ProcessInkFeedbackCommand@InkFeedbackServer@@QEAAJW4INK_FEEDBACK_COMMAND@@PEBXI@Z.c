/*
 * XREFs of ?ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0237848
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C022D580 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InkFeedbackServer::ProcessInkFeedbackCommand(
        _QWORD **a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  _QWORD *i; // rbx
  _BYTE v10[4]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  const char *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  _BYTE *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]

  if ( dword_1C030C390 > 4u )
  {
    v11[0] = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v13 = v11;
    v16 = "Processing ink feedback command...";
    v19 = v10;
    v14 = 4;
    v17 = 35;
    v10[0] = a2;
    v20 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D64F2, 0LL, 0LL, 5u, &pData);
  }
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))*(i - 1))(i - 1, a2, a3, a4) >= 0 )
      return 0LL;
  }
  if ( a2 == 2 || a2 == 4 )
    return 0LL;
  if ( dword_1C030C390 > 2u )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v13 = v11;
    v16 = "Command not serviced";
    v11[0] = -1073741823;
    v14 = 4;
    v17 = 21;
    v10[0] = a2;
    v19 = v10;
    v20 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D64B7, 0LL, 0LL, 5u, &pData);
  }
  return 3221225473LL;
}
