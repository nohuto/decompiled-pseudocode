/*
 * XREFs of CrmRpcSrvRegister @ 0x180008070
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvRegister @ 0x1800080F8 (CrmSrvRegister.c)
 *     CempRpcQueryClientInformation @ 0x18000A4C4 (CempRpcQueryClientInformation.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-79h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-19h] BYREF
  UUID *v11; // [rsp+B0h] [rbp+7h]
  __int64 v12; // [rsp+B8h] [rbp+Fh]
  unsigned int *v13; // [rsp+C0h] [rbp+17h]
  __int64 v14; // [rsp+C8h] [rbp+1Fh]

  result = CempRpcQueryClientInformation(a1, DestinationSid, 0LL, 0LL, 0LL);
  v8 = result;
  if ( (int)result < 0 )
  {
    if ( dword_1800AB2F8 > 5u )
    {
      v12 = 16LL;
      v11 = &Uuid;
      v14 = 4LL;
      v13 = &v8;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009B5C9, 0LL, 0LL, 4u, &pData);
      return v8;
    }
  }
  else
  {
    result = CrmSrvRegister(a2, a3, a4, DestinationSid);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
