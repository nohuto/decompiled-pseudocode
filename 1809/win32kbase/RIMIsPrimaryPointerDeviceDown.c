/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C010ED80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(char *a1, int *a2)
{
  int v4; // ebp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x6Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x70u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 71));
      v6 = v5[60];
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 952);
        if ( v7 )
          *a2 = (*(_DWORD *)(v7 + 2636) >> 2) & 1;
      }
      v5[72] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v9 = v4;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x71u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v9);
  return (unsigned int)v4;
}
