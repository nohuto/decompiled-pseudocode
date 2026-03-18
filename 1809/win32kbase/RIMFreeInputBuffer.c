/*
 * XREFs of RIMFreeInputBuffer @ 0x1C010D990
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1C010C190 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMFreeUserMem @ 0x1C0111CB0 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  int v4; // ebp
  _QWORD *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x58u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x59u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 71));
      RIMFreeUserMem(v5, a2);
      v5[72] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  return WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x5Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v7);
}
