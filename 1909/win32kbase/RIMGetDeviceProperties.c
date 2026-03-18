/*
 * XREFs of RIMGetDeviceProperties @ 0x1C01364D0
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C0134170 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C0136630 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r15
  int v8; // edx
  int v9; // ebx
  _BYTE *v10; // rdi
  int v11; // edx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 127, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v10[81] )
    {
      v9 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 128, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v9 = RIMGetDevicePropertiesLockfree(v6, a3, a4);
    }
    *((_QWORD *)v10 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v8, 1, 129, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v9);
  }
  return (unsigned int)v9;
}
