/*
 * XREFs of RIMResetPointerDevices @ 0x1C00E58E0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(char *a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 i; // rdi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x94u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 75) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x95u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 69));
      for ( i = v3[51]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts((__int64)v3, *(_QWORD *)(i + 480), 0LL);
      }
      v3[70] = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 69, 0LL);
      KeLeaveCriticalRegion();
    }
    v3[13] = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x96u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v2);
  return (unsigned int)v2;
}
