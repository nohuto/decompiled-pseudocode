/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C006A0B0
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0068E30 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimOnPnpRemoveComplete @ 0x1C0069434 (rimOnPnpRemoveComplete.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(__int64 a1, int a2)
{
  int v2; // r14d
  int v4; // edx
  int v5; // esi
  _QWORD *v6; // rdi
  int v7; // edx
  __int64 v8; // r8
  __int64 i; // rbx
  int v11; // ecx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 95, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v6 + 81) )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 96, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      for ( i = v6[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v11 = *(_DWORD *)(i + 184);
        if ( (v11 & 0x2000) == 0 && (v11 & 0x400) == 0 && *(unsigned __int8 *)(i + 48) == v2 )
        {
          *(_DWORD *)(i + 184) = v11 | 8;
          rimOnPnpRemoveComplete((__int64)v6, i, v8);
        }
      }
    }
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v4, 1, 97, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v5);
  }
  return (unsigned int)v5;
}
