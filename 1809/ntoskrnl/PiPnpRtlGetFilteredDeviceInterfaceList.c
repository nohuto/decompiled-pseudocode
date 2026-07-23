/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406D3510
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1406D361C (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetCmObjectListFromCache @ 0x140701DE0 (PiDmGetCmObjectListFromCache.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  __int64 v2; // rcx
  const WCHAR *v3; // rdx
  int v4; // ecx
  __int64 v5; // r9
  NTSTATUS result; // eax
  _QWORD v7[5]; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+78h] [rbp+3Fh] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(const WCHAR **)(a1 + 16);
  LOBYTE(v7[2]) = *(_BYTE *)(a1 + 32) & 1;
  v7[3] = *(_QWORD *)(a1 + 40);
  v7[4] = *(_QWORD *)(a1 + 48);
  if ( !v2 )
  {
    v4 = *(_DWORD *)(a1 + 64);
    v5 = *(_QWORD *)(a1 + 56);
    if ( v3 )
      return PiDmGetCmObjectConstraintListFromCache(
               0,
               (_DWORD)v3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v7,
               v5,
               v4,
               *(_QWORD *)(a1 + 72));
    else
      return PiDmGetCmObjectListFromCache(
               3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v7,
               v5,
               v4,
               *(_QWORD *)(a1 + 72));
  }
  if ( !v3 )
    return PiDmGetCmObjectConstraintListFromCache(
             1,
             v2,
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)v7,
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
      v7[0] = &Guid;
      return PiDmGetCmObjectConstraintListFromCache(
               1,
               v2,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v7,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    }
  }
  return result;
}
