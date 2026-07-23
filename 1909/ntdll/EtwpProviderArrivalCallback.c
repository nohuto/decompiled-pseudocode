/*
 * XREFs of EtwpProviderArrivalCallback @ 0x18010E134
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x18010D670 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     EtwpFindDebugId @ 0x18010E060 (EtwpFindDebugId.c)
 *     EtwpTrackBinaryForSession @ 0x18010E274 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDebugIdForSession @ 0x18010E450 (EtwpTrackDebugIdForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2, char *a3, char *a4)
{
  unsigned __int64 v5; // rcx
  unsigned int DebugId; // ebx
  wchar_t *Buffer; // rcx
  int DllFullName; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING FullDllName; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  char v15; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  DebugId = 0;
  if ( v5 < *((_QWORD *)&xmmword_18017A500 + 1)
    || v5 >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
  {
    RtlpxLookupFunctionTable(v5, (signed __int64)&FullDllName, a3, a4);
  }
  else
  {
    FullDllName = (_UNICODE_STRING)xmmword_18017A500;
    v14 = qword_18017A510;
  }
  Buffer = FullDllName.Buffer;
  if ( FullDllName.Buffer )
  {
    if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
    {
      DebugId = EtwpFindDebugId((unsigned __int64)FullDllName.Buffer, 0x3FFFLL, &FullDllName, &v12);
      if ( DebugId )
        return DebugId;
      return (unsigned int)EtwpTrackDebugIdForSession(a1, *(_QWORD *)&FullDllName.Length, v12);
    }
    else
    {
      if ( *(__int16 *)(a2 + 98) >= 0 )
        return DebugId;
      FullDllName.Buffer = (wchar_t *)&v15;
      FullDllName.MaximumLength = 260;
      DllFullName = LdrGetDllFullName(Buffer, &FullDllName);
      if ( DllFullName < 0 )
        return RtlNtStatusToDosError(DllFullName);
      else
        return (unsigned int)EtwpTrackBinaryForSession(a1, &FullDllName, a2 + 32);
    }
  }
  return 87;
}
