/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C0139C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(char *a1, int *a2)
{
  int *v2; // r14
  int v4; // edx
  int v5; // edi
  _QWORD *v6; // rbx
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 109, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v6 + 81) || *((_BYTE *)v6 + 82) )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 110, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v6 + 71));
      v8 = v6[60];
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 960);
        if ( v9 )
          *v2 = (*(_DWORD *)(v9 + 2660) >> 2) & 1;
      }
      v6[72] = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v4, 1, 111, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v5);
  }
  return (unsigned int)v5;
}
