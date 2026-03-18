/*
 * XREFs of ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C0207E24
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0208498 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02086A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::PromoteToMouse(int a1, __int16 a2)
{
  unsigned __int16 v2; // r9
  int v3; // r10d
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  __int16 *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+C0h] [rbp+67h] BYREF
  __int16 v17; // [rsp+C8h] [rbp+6Fh] BYREF

  v17 = a2;
  v16 = a1;
  if ( dword_1C03222C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x20uLL) )
    {
      v9 = v4;
      v8 = &v16;
      v10 = &v17;
      v12 = &v5;
      v6 = v2;
      v14 = &v6;
      v11 = 2LL;
      v5 = v3;
      v13 = v4;
      v15 = v4;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E82BB, 0LL, 0LL, 6u, &pData);
    }
  }
}
