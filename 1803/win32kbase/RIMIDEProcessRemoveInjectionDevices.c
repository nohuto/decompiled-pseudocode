/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C00DDEA4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00E2B70 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD **v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *result; // rax
  _QWORD *v13; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-8h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v3 = &v13;
  v14 = &v13;
  v13 = &v13;
  while ( v2 != &gObRimDevList )
  {
    v4 = (unsigned __int64)(v2 + 8) & -(__int64)(v2 != (__int64 *)16);
    v5 = *(_QWORD *)(v4 + 0x180);
    if ( v5 && *(_DWORD *)(v5 + 84) == *(_DWORD *)(a1 + 56) )
    {
      v6 = (_QWORD *)(v4 + 136);
      if ( (_QWORD *)*v6 != v6 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3);
        v3 = (_QWORD **)v14;
      }
      if ( *v3 != &v13 )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)(v2 + 8) & -(__int64)(v2 != (__int64 *)16)) + 0x90) = v3;
      *v6 = &v13;
      *v3 = v6;
      v14 = (_QWORD *)(v4 + 136);
      *(_DWORD *)(v4 + 200) |= 4u;
      v3 = (_QWORD **)v14;
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v13;
  while ( 1 )
  {
    result = &v13;
    if ( v7 == &v13 )
      break;
    v8 = *v7;
    v9 = v7 - 17;
    v10 = v7;
    v7 = (_QWORD *)v8;
    if ( *(_QWORD **)(v8 + 8) != v10 || (v11 = (_QWORD *)v10[1], (_QWORD *)*v11 != v10) )
      __fastfail(3u);
    *v11 = v8;
    *(_QWORD *)(v8 + 8) = v11;
    v10[1] = v10;
    *v10 = v10;
    if ( (int)RIMIDERemoveInjectionDevice(v9[4]) < 0 )
    {
      RIMLockExclusive((__int64)&gObListLock);
      *((_DWORD *)v9 + 50) &= ~4u;
      qword_1C01A1640 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xFu,
        (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids);
    }
  }
  *(_DWORD *)(a1 + 812) &= ~0x100000u;
  return result;
}
