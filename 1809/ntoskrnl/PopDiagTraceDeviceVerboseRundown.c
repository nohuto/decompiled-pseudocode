/*
 * XREFs of PopDiagTraceDeviceVerboseRundown @ 0x1406DB41C
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140141764 (PopDiagTraceFxRundown.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14014184C (PopPepGetDevicePlatformStateDependents.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceVerboseRundown(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int16 v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int16 *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  __int64 v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  int v22; // [rsp+94h] [rbp-74h]
  int *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int64 v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B4h] [rbp-54h]
  int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(a1 + 48);
      v4 = *(_QWORD *)(a1 + 56);
      v12 = 0;
      v14 = v3;
      v9 = *(_WORD *)(v3 + 280) >> 1;
      LOWORD(v10) = *(_WORD *)(v3 + 40) >> 1;
      LOWORD(v11) = *(_WORD *)(v3 + 56) >> 1;
      PopPepGetDevicePlatformStateDependents(v4, &v12);
      v16 = *(_QWORD *)(v14 + 16);
      v15 = *(_QWORD *)(v14 + 32);
      UserData.Ptr = (ULONGLONG)&v14;
      v18 = &v9;
      *(_QWORD *)&UserData.Size = 8LL;
      v19 = 2LL;
      v5 = *(unsigned __int16 *)(v3 + 280);
      v20 = *(_QWORD *)(v3 + 288);
      v23 = &v10;
      v21 = v5;
      v22 = 0;
      v24 = 2LL;
      v6 = *(unsigned __int16 *)(v3 + 40);
      v25 = *(_QWORD *)(v3 + 48);
      v28 = &v11;
      v26 = v6;
      v27 = 0;
      v29 = 2LL;
      v7 = *(unsigned __int16 *)(v3 + 56);
      v30 = *(_QWORD *)(v3 + 64);
      v33 = &v12;
      v35 = &v15;
      v37 = &v16;
      v31 = v7;
      v32 = 0;
      v34 = 4LL;
      v36 = 8LL;
      v38 = 8LL;
      LODWORD(v13) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 808), 0, 0);
      v40 = 4LL;
      v39 = &v13;
      LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN, &PopDiagActivityId, 0xBu, &UserData);
    }
  }
  return (char)v1;
}
