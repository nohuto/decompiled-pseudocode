/*
 * XREFs of ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x180072F1C
 * Callers:
 *     ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007BF60 (-HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampSystemNotificationClientAcknowledge(void *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  int v2; // r9d
  int v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+40h] [rbp-29h] BYREF
  void *v5; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  int *v7; // [rsp+80h] [rbp+17h]
  int v8; // [rsp+88h] [rbp+1Fh]
  int v9; // [rsp+8Ch] [rbp+23h]
  void **v10; // [rsp+90h] [rbp+27h]
  int v11; // [rsp+98h] [rbp+2Fh]
  int v12; // [rsp+9Ch] [rbp+33h]
  int *v13; // [rsp+A0h] [rbp+37h]
  int v14; // [rsp+A8h] [rbp+3Fh]
  int v15; // [rsp+ACh] [rbp+43h]

  v4 = 0;
  v5 = a1;
  v3 = PdcNotificationClientAcknowledge(a1, 0LL);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v7 = &v3;
      v10 = &v5;
      v13 = &v4;
      v8 = v2;
      v11 = 8;
      v14 = v2;
      TlgWrite(v1, &unk_180096DBE, 0LL, 0LL, 5u, &pData);
    }
  }
}
