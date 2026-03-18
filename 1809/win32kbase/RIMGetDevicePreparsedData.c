/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C010DAE0
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C010C1D0 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C010DC20 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v9; // ebx
  _BYTE *v10; // rdi
  int v12; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x7Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v10[81] )
    {
      v9 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x7Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v9 = RIMGetDevicePreparsedDataLockfree(a2, a3, a4, a5);
    }
    *((_QWORD *)v10 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  v12 = v9;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x80u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v12);
  return (unsigned int)v9;
}
