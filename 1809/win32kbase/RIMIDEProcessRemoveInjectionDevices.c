/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C010B214
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  __int64 v2; // r8
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *result; // rax
  _QWORD *v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-8h]

  RIMLockExclusive((__int64)&gObListLock);
  v3 = (__int64 *)gObRimDevList;
  v4 = (__int64 *)&v15;
  v16 = (__int64 *)&v15;
  v15 = &v15;
  while ( v3 != &gObRimDevList )
  {
    v5 = (__int64)(v3 + 57);
    if ( v3 == (__int64 *)16 )
      v5 = 384LL;
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 && *(_DWORD *)(v6 + 84) == *(_DWORD *)(a1 + 56) )
    {
      v7 = (__int64)(v3 + 26);
      if ( v3 == (__int64 *)16 )
        v7 = 136LL;
      if ( *(_QWORD *)v7 != v7 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v4, v2);
        v4 = v16;
      }
      if ( (_QWORD **)*v4 != &v15 )
LABEL_23:
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = v4;
      *(_QWORD *)v7 = &v15;
      *v4 = v7;
      v8 = (__int64)(v3 + 34);
      v16 = (__int64 *)v7;
      if ( v3 == (__int64 *)16 )
        v8 = 200LL;
      *(_DWORD *)v8 |= 4u;
      v4 = v16;
    }
    v3 = (__int64 *)*v3;
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v9 = v15;
  while ( 1 )
  {
    result = &v15;
    if ( v9 == &v15 )
      break;
    v10 = *v9;
    v11 = v9;
    v12 = v9;
    v9 = (_QWORD *)v10;
    if ( *(_QWORD **)(v10 + 8) != v11 )
      goto LABEL_23;
    v13 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v13 != v11 )
      goto LABEL_23;
    *v13 = v10;
    *(_QWORD *)(v10 + 8) = v13;
    v11[1] = v11;
    *v11 = v11;
    if ( (int)RIMIDERemoveInjectionDevice(*(v12 - 13)) < 0 )
    {
      RIMLockExclusive((__int64)&gObListLock);
      *((_DWORD *)v12 + 16) &= ~4u;
      qword_1C01D0F90 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x10u, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids);
    }
  }
  *(_DWORD *)(a1 + 820) &= ~0x100000u;
  return result;
}
