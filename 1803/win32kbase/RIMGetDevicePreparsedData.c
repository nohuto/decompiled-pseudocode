/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C00E1E40
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C00DF580 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00E1F70 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v9; // ebx
  _BYTE *v10; // rdi
  int v12; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x7Au,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v10[73] )
    {
      v9 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x7Bu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v9 = RIMGetDevicePreparsedDataLockfree(a2, a3, a4, a5);
    }
    *((_QWORD *)v10 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  v12 = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x7Cu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v12);
  return (unsigned int)v9;
}
