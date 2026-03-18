/*
 * XREFs of RIMGetDownContactCount @ 0x1C010E2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetDownContactCount(char *a1, _DWORD *a2)
{
  int v4; // ebp
  _DWORD *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x72u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  *a2 = 0;
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x73u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 142));
      *a2 = v5[118];
      *((_QWORD *)v5 + 72) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 142, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)v5 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 26, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x74u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v7);
  return (unsigned int)v4;
}
