/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C004EA00
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C004B010 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimOnPnpRemoveComplete @ 0x1C004DB18 (rimOnPnpRemoveComplete.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(__int64 a1, int a2)
{
  int v4; // ebp
  _QWORD *v5; // rdi
  __int64 v6; // r8
  __int64 i; // rbx
  int v9; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x61u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x62u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      for ( i = v5[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v9 = *(_DWORD *)(i + 184);
        if ( (v9 & 0x2000) == 0 && (v9 & 0x400) == 0 && *(unsigned __int8 *)(i + 48) == a2 )
        {
          *(_DWORD *)(i + 184) = v9 | 8;
          rimOnPnpRemoveComplete((__int64)v5, i, v6);
        }
      }
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x63u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v4);
  return (unsigned int)v4;
}
