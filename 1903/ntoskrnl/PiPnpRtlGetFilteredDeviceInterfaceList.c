/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406F0C04
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1406F0D2C (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetCmObjectListFromCache @ 0x14071C2BC (PiDmGetCmObjectListFromCache.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  __int64 v2; // rcx
  const WCHAR *v3; // rdx
  char v4; // al
  int v5; // ecx
  __int64 v6; // r9
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v9[5]; // [rsp+50h] [rbp+17h] BYREF
  GUID Guid; // [rsp+78h] [rbp+3Fh] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(const WCHAR **)(a1 + 16);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = v9[2];
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    v4 = 1;
  LOBYTE(v9[2]) = v4;
  v9[3] = *(_QWORD *)(a1 + 40);
  v9[4] = *(_QWORD *)(a1 + 48);
  if ( !v2 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v3 )
      return PiDmGetCmObjectConstraintListFromCache(
               0,
               (_DWORD)v3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v9,
               v6,
               v5,
               *(_QWORD *)(a1 + 72));
    else
      return PiDmGetCmObjectListFromCache(
               3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v9,
               v6,
               v5,
               *(_QWORD *)(a1 + 72));
  }
  if ( !v3 )
    return PiDmGetCmObjectConstraintListFromCache(
             1,
             v2,
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)v9,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             *(_QWORD *)(a1 + 72));
  result = RtlInitUnicodeStringEx(&DestinationString, v3);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v9[0] = &Guid;
      return PiDmGetCmObjectConstraintListFromCache(
               1,
               v2,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v9,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    }
  }
  return result;
}
