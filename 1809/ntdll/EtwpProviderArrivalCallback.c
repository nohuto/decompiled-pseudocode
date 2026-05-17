/*
 * XREFs of EtwpProviderArrivalCallback @ 0x18010FE08
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x18010F5A0 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrGetDllFullName @ 0x18003F4B0 (LdrGetDllFullName.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     EtwpFindDebugId @ 0x18010FD30 (EtwpFindDebugId.c)
 *     EtwpTrackBinaryForSession @ 0x18010FF48 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDebugIdForSession @ 0x180110124 (EtwpTrackDebugIdForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned int DebugId; // ebx
  __int64 v6; // rcx
  NTSTATUS DllFullName; // eax
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  DebugId = 0;
  if ( v3 < *((_QWORD *)&xmmword_180178500 + 1)
    || v3 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
  {
    RtlpxLookupFunctionTable(v3, (__int64 *)&v11);
  }
  else
  {
    v11 = xmmword_180178500;
    v12 = qword_180178510;
  }
  v6 = *((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
    {
      DebugId = EtwpFindDebugId(*((unsigned __int64 *)&v11 + 1), 0x3FFFLL, &v11, &v10);
      if ( DebugId )
        return DebugId;
      return (unsigned int)EtwpTrackDebugIdForSession(a1, v11, v10);
    }
    else
    {
      if ( *(__int16 *)(a2 + 98) >= 0 )
        return DebugId;
      *((_QWORD *)&v11 + 1) = &v13;
      WORD1(v11) = 260;
      DllFullName = LdrGetDllFullName(v6, (__int64)&v11);
      if ( DllFullName < 0 )
        return RtlNtStatusToDosError(DllFullName);
      else
        return (unsigned int)EtwpTrackBinaryForSession(a1, &v11, a2 + 32);
    }
  }
  return 87;
}
