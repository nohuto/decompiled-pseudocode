/*
 * XREFs of RIMFreeInputBuffer @ 0x1C00E1D00
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1C00DF540 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMFreeUserMem @ 0x1C00E8510 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  int v4; // ebp
  _QWORD *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x5Cu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x5Du,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 69));
      RIMFreeUserMem(v5, a2);
      v5[70] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 69, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x5Eu,
           (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
           v7);
}
