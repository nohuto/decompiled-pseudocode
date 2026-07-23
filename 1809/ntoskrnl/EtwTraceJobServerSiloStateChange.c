/*
 * XREFs of EtwTraceJobServerSiloStateChange @ 0x1408B89FC
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspMarkServerSiloAsTerminating @ 0x14088CF1C (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14088CFC4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14088D0CC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloStateChange(__int64 a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  int *v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v2 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &JobServerSiloStateChange);
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 16LL;
    UserData.Ptr = a1 + 1224;
    v7 = 4LL;
    v6 = a1 + 1220;
    v9 = 4LL;
    v8 = &v10;
    return EtwWrite(v2, &JobServerSiloStateChange, 0LL, 3u, &UserData);
  }
  return result;
}
