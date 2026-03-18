/*
 * XREFs of rimDoVirtRimDevChange @ 0x1C014F7A0
 * Callers:
 *     ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018AEE0 (-ivHandlePnpOtherPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C005766C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0057AD4 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_S @ 0x1C005836C (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011C630 (WPP_RECORDER_SF_qd.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C014E5F0 (RIMSignalOnPnpNotificationAndWait.c)
 */

_UNKNOWN **__fastcall rimDoVirtRimDevChange(_QWORD *Object, PCUNICODE_STRING String1, int a3)
{
  int v3; // r15d
  __int64 i; // rbx
  PCUNICODE_STRING v6; // r14
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // edx
  NTSTATUS v11; // eax
  int v12; // edx
  _UNKNOWN **result; // rax
  int v14; // r8d
  int v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  i = 0LL;
  v6 = String1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(String1) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)String1, 1, 74, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(String1) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        (_DWORD)String1,
        1,
        75,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        (__int64)v6->Buffer);
    }
  }
  if ( !*((_BYTE *)Object + 81) )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v16, 1, 1u);
    RIMLockExclusive((__int64)(Object + 13));
    if ( !*((_BYTE *)Object + 80) && !*((_BYTE *)Object + 81) )
    {
      for ( i = Object[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v8 = *(_DWORD *)(i + 184);
        if ( (v8 & 0x20) == 0 && (v8 & 0x2000) == 0 && RtlEqualUnicodeString(v6, (PCUNICODE_STRING)(i + 208), 0) )
        {
          v3 = 1;
          v9 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
          if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v10,
              1,
              76,
              (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
              (char)Object,
              v9);
          }
          v11 = ObReferenceObjectByPointer(*(PVOID *)(i + 32), 3u, ExRawInputManagerObjectType, 1);
          if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 4;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v12,
              1,
              77,
              (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
              (char)Object,
              v11);
          }
          break;
        }
      }
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v16);
  }
  if ( v3 )
  {
    RIMLockExclusive((__int64)(Object + 13));
    switch ( a3 )
    {
      case 2:
        *(_DWORD *)(i + 184) |= 0x20000u;
        v14 = 1;
        v15 = 0;
LABEL_30:
        RIMSignalOnPnpNotificationAndWait((__int64)Object, i, v14, 0, 0, v15);
        break;
      case 3:
        *(_DWORD *)(i + 184) |= 0x40000u;
        RIMSignalOnPnpNotificationAndWait((__int64)Object, i, 0, 1, 0, 0);
        break;
      case 4:
        *(_DWORD *)(i + 184) |= 0x40000u;
        v14 = 0;
        v15 = 1;
        goto LABEL_30;
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(*(PVOID *)(i + 32));
    return (_UNKNOWN **)ObfDereferenceObject(Object);
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(String1) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_S(
                          (_DWORD)gRimLog,
                          (_DWORD)String1,
                          1,
                          78,
                          (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                          (__int64)v6->Buffer);
  }
  return result;
}
