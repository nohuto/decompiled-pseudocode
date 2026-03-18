/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C00E2840
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C00DF690 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, __int64 a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdi
  PVOID v8; // rsi
  char *v9; // rcx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x86u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v12);
  if ( v6 >= 0 )
  {
    v7 = v12;
    RIMLockExclusive((__int64)v12 + 96);
    if ( v7[73] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x88u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, Object);
      if ( v6 >= 0 )
      {
        v8 = Object[0];
        if ( Object[0] )
          v9 = (char *)Object[0] + 80;
        else
          v9 = 0LL;
        if ( (*((_DWORD *)v9 + 50) & 0x80u) == 0 )
        {
          v6 = -1073741637;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x87u,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
        }
        else
        {
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (_OWORD *)MmUserProbeAddress;
          *a3 = *(_OWORD *)(*((_QWORD *)v9 + 60) + 140LL);
        }
        ObfDereferenceObject(v8);
      }
    }
    *((_QWORD *)v7 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x89u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v6);
  return (unsigned int)v6;
}
