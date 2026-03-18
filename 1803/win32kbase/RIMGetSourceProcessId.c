/*
 * XREFs of RIMGetSourceProcessId @ 0x1C00E29F0
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C00DF6E0 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, __int64 a2, _DWORD *a3)
{
  int v6; // r15d
  int v7; // edi
  _BYTE *v8; // rbx
  PVOID v9; // rdx
  char *v10; // rax
  __int64 v11; // rcx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x8Au,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v14);
  if ( v7 >= 0 )
  {
    v8 = v14;
    RIMLockExclusive((__int64)v14 + 96);
    if ( v8[73] )
    {
      v7 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x8Bu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, Object);
      if ( v7 >= 0 )
      {
        v9 = Object[0];
        if ( Object[0] )
          v10 = (char *)Object[0] + 80;
        else
          v10 = 0LL;
        v11 = *((_QWORD *)v10 + 48);
        if ( v11 )
          v6 = *(_DWORD *)(v11 + 84);
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (_DWORD *)MmUserProbeAddress;
        *a3 = v6;
        ObfDereferenceObject(v9);
      }
    }
    *((_QWORD *)v8 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x8Cu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v7);
  return (unsigned int)v7;
}
