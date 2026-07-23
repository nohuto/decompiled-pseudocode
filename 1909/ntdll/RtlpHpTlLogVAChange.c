/*
 * XREFs of RtlpHpTlLogVAChange @ 0x180107504
 * Callers:
 *     RtlpHpAllocVA @ 0x1800479C8 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x180048170 (RtlpHpFreeVA.c)
 * Callees:
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall RtlpHpTlLogVAChange(int a1, const GUID *a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  int v5; // [rsp+30h] [rbp-29h] BYREF
  const GUID *v6; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const GUID **v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  const GUID **v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  switch ( a1 )
  {
    case 0x1000:
      if ( (unsigned int)dword_18015F5C8 > 5 )
      {
        v7[0] = a2;
        v6 = a3;
        v11 = &v6;
        v5 = (int)a4;
        v9 = (const GUID **)v7;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return TlgWrite((TraceLoggingHProvider)&dword_18015F5C8, &unk_18012BF09, a3, a4, 5u, &pData);
      }
      break;
    case 0x2000:
      if ( (unsigned int)dword_18015F5C8 > 5 )
      {
        v7[0] = a2;
        v6 = a3;
        v11 = &v6;
        v5 = (int)a4;
        v9 = (const GUID **)v7;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return TlgWrite((TraceLoggingHProvider)&dword_18015F5C8, &unk_18012BEAE, a3, a4, 5u, &pData);
      }
      break;
    case 0x4000:
      if ( (unsigned int)dword_18015F5C8 > 5 )
      {
        v7[0] = a2;
        v6 = a3;
        v11 = &v6;
        v5 = (int)a4;
        v9 = (const GUID **)v7;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return TlgWrite((TraceLoggingHProvider)&dword_18015F5C8, &unk_18012BFCD, a3, a4, 5u, &pData);
      }
      break;
    default:
      if ( a1 == 0x8000 && (unsigned int)dword_18015F5C8 > 5 )
      {
        v6 = a2;
        v7[0] = a3;
        v11 = (const GUID **)v7;
        v5 = (int)a4;
        v9 = &v6;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return TlgWrite((TraceLoggingHProvider)&dword_18015F5C8, &unk_18012BE78, a3, a4, 5u, &pData);
      }
      break;
  }
  return result;
}
