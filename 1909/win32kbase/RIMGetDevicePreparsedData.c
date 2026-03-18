/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C0136200
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C01340E0 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0136370 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // r15
  int v9; // edx
  int v10; // ebx
  _BYTE *v11; // rdi
  int v12; // edx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 124, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v11[81] )
    {
      v10 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 125, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v10 = RIMGetDevicePreparsedDataLockfree(v7, a3, a4, a5);
    }
    *((_QWORD *)v11 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v11);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v9, 1, 126, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v10);
  }
  return (unsigned int)v10;
}
