/*
 * XREFs of ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18002FC0C
 * Callers:
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FDB0 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ?Provider@InputETW@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A12C (-Provider@InputETW@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006C218 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::SystemButtonEventController::ContinueProcessing(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  int *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int *v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]
  __int64 v24; // [rsp+C8h] [rbp+67h] BYREF
  int v25; // [rsp+D0h] [rbp+6Fh] BYREF

  v25 = a2;
  v24 = a1;
  if ( InputETW::IsEnabled(a1, a2) )
  {
    v7 = InputETW::Provider(v6);
    if ( *(_DWORD *)v7 > 5u )
    {
      if ( TlgKeywordOn(v7, 1uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v12 = &v24;
        v15 = &v25;
        v9 = a3;
        v18 = &v9;
        v10 = a4;
        v21 = &v10;
        v13 = 8;
        v16 = 4;
        v19 = 4;
        v22 = 4;
        TlgWrite(v8, &unk_18019AF36, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
