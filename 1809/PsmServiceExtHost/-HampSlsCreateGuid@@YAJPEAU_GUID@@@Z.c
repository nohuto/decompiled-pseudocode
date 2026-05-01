/*
 * XREFs of ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x18006E810
 * Callers:
 *     ?HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E6B0 (-HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampSlsCreateGuid(struct _GUID *a1)
{
  RPC_STATUS v1; // eax
  unsigned int v2; // ebx
  RPC_STATUS v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  RPC_STATUS *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = UuidCreate(a1);
  v2 = v1;
  if ( v1 && hProvider > 4u )
  {
    v8 = 0;
    v4 = v1;
    v6 = &v4;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C167, 0LL, 0LL, 3u, &pData);
  }
  return v2;
}
