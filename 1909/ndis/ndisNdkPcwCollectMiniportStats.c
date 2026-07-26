/*
 * XREFs of ndisNdkPcwCollectMiniportStats @ 0x1C010041C
 * Callers:
 *     ndisNdkPcwCollectData @ 0x1C010037C (ndisNdkPcwCollectData.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

NTSTATUS __fastcall ndisNdkPcwCollectMiniportStats(__int64 a1, struct _PCW_BUFFER *a2)
{
  __int64 v4; // rbx
  const UNICODE_STRING *v5; // rdx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v8[32]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v9[2]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v10[248]; // [rsp+148h] [rbp+48h] BYREF

  memset(v10, 0, 0xF0uLL);
  v4 = *(_QWORD *)(a1 + 8);
  v9[1] = 0;
  v9[0] = 16253312;
  memset(v8, 0, 0xF8uLL);
  LODWORD(v8[11]) |= 8u;
  LODWORD(v8[1]) = 0;
  v8[13] = &ndisIntReqGeneric;
  v8[0] = 0x200EC0196LL;
  v8[5] = v9;
  LODWORD(v8[4]) = -66846206;
  LODWORD(v8[6]) = 248;
  if ( (unsigned int)ndisQuerySetMiniport(v4, 0LL, (__int64)v8, 0, 0LL) )
    return -1073741823;
  v5 = *(const UNICODE_STRING **)(v4 + 4408);
  Data.Data = v10;
  Data.Size = 240;
  if ( !v5 )
    v5 = *(const UNICODE_STRING **)(v4 + 3856);
  return PcwAddInstance(a2, v5, *(_DWORD *)(a1 + 20), 1u, &Data);
}
