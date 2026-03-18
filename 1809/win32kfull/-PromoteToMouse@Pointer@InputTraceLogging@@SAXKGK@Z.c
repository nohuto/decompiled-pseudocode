/*
 * XREFs of ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGK@Z @ 0x1C01F1B60
 * Callers:
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F2390 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::PromoteToMouse(int a1, __int16 a2)
{
  int v2; // r9d
  __int64 v3; // r10
  int v4; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  __int16 *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B0h] [rbp+67h] BYREF
  __int16 v13; // [rsp+B8h] [rbp+6Fh] BYREF

  v13 = a2;
  v12 = a1;
  if ( (unsigned int)dword_1C030D340 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x20uLL) )
    {
      v7 = v3;
      v6 = &v12;
      v8 = &v13;
      v10 = &v4;
      v9 = 2LL;
      v4 = v2;
      v11 = v3;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5718, 0LL, 0LL, 5u, &pData);
    }
  }
}
