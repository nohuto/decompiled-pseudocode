/*
 * XREFs of RIMGetDeviceProperties @ 0x1C010DD80
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C010C260 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C010DEB0 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  _BYTE *v9; // rdi
  int v11; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x81u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v9[81] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x82u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v8 = RIMGetDevicePropertiesLockfree(a2, a3, a4);
    }
    *((_QWORD *)v9 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  v11 = v8;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x83u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v11);
  return (unsigned int)v8;
}
