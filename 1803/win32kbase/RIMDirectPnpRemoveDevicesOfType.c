/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C00E11E0
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0123800 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimOnPnpRemoveComplete @ 0x1C00FD584 (rimOnPnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(char *a1, int a2)
{
  int v4; // ebp
  _QWORD *v5; // rdi
  __int64 i; // rbx
  int v7; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x64u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x65u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      for ( i = v5[51]; i; i = *(_QWORD *)(i + 40) )
      {
        v7 = *(_DWORD *)(i + 184);
        if ( (v7 & 0x1000) == 0 && (v7 & 0x200) == 0 && *(unsigned __int8 *)(i + 48) == a2 )
        {
          *(_DWORD *)(i + 184) = v7 | 8;
          rimOnPnpRemoveComplete(v5, i);
        }
      }
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x66u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v4);
  return (unsigned int)v4;
}
