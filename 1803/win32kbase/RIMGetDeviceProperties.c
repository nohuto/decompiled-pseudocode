/*
 * XREFs of RIMGetDeviceProperties @ 0x1C00E20D0
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C00DF610 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C00E2200 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  _BYTE *v9; // rdi
  int v11; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x7Du,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v9[73] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x7Eu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v8 = RIMGetDevicePropertiesLockfree(a2, a3, a4);
    }
    *((_QWORD *)v9 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  v11 = v8;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x7Fu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v11);
  return (unsigned int)v8;
}
