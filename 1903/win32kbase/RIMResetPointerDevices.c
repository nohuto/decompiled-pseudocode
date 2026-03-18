/*
 * XREFs of RIMResetPointerDevices @ 0x1C0069F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(__int64 a1)
{
  int v2; // edx
  int v3; // esi
  _QWORD *v4; // rdi
  __int64 i; // rbx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 150, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v4 + 81) || *((_BYTE *)v4 + 82) )
    {
      v3 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 151, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v4 + 71));
      for ( i = v4[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(v4, *(_QWORD *)(i + 480), 0LL);
      }
      v4[72] = 0LL;
      ExReleasePushLockExclusiveEx(v4 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v4[14] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v2, 1, 152, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v3);
  }
  return (unsigned int)v3;
}
