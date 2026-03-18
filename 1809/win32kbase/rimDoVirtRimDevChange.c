/*
 * XREFs of rimDoVirtRimDevChange @ 0x1C01256D8
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ApiSetIsRemoteConnection @ 0x1C00503D8 (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01245D0 (RIMSignalOnPnpNotificationAndWait.c)
 */

LONG_PTR __fastcall rimDoVirtRimDevChange(_BYTE *Object, PCUNICODE_STRING String1, int a3)
{
  int v4; // r15d
  __int64 i; // rbx
  int v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  __int64 v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+74h] [rbp+Ch]

  v4 = 0;
  i = 0LL;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x4Au, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  WPP_RECORDER_SF_S(
    gRimLog,
    3u,
    0x15u,
    0x4Bu,
    (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
    (const struct _MCGEN_TRACE_CONTEXT *)String1->Buffer);
  if ( Object[81] )
    return WPP_RECORDER_SF_S(
             gRimLog,
             3u,
             0x16u,
             0x4Eu,
             (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
             (const struct _MCGEN_TRACE_CONTEXT *)String1->Buffer);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v13, 1, 1u);
  if ( !(unsigned int)ApiSetIsRemoteConnection() )
  {
    RIMLockExclusive((__int64)(Object + 104));
    if ( !Object[80] && !Object[81] )
    {
      for ( i = *((_QWORD *)Object + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v8 = *(_DWORD *)(i + 184);
        if ( (v8 & 0x20) == 0 && (v8 & 0x2000) == 0 && RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 208), 0) )
        {
          v4 = 1;
          v9 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
          if ( v9 < 0 )
            WPP_RECORDER_SF_qd(
              gRimLog,
              3u,
              0x16u,
              0x4Cu,
              (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
              Object,
              v9);
          v10 = ObReferenceObjectByPointer(*(PVOID *)(i + 32), 3u, ExRawInputManagerObjectType, 1);
          if ( v10 < 0 )
          {
            LODWORD(v12) = v10;
            WPP_RECORDER_SF_qd(
              gRimLog,
              3u,
              0x16u,
              0x4Du,
              (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
              Object,
              v12);
          }
          break;
        }
      }
    }
    *((_QWORD *)Object + 14) = 0LL;
    ExReleasePushLockExclusiveEx(Object + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v13 && !v14 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  if ( !v4 )
    return WPP_RECORDER_SF_S(
             gRimLog,
             3u,
             0x16u,
             0x4Eu,
             (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
             (const struct _MCGEN_TRACE_CONTEXT *)String1->Buffer);
  RIMLockExclusive((__int64)(Object + 104));
  switch ( a3 )
  {
    case 2:
      *(_DWORD *)(i + 184) |= 0x20000u;
      RIMSignalOnPnpNotificationAndWait((__int64)Object, i, 1, 0, 0, 0);
      break;
    case 3:
      *(_DWORD *)(i + 184) |= 0x40000u;
      RIMSignalOnPnpNotificationAndWait((__int64)Object, i, 0, 1, 0, 0);
      break;
    case 4:
      *(_DWORD *)(i + 184) |= 0x40000u;
      RIMSignalOnPnpNotificationAndWait((__int64)Object, i, 0, 0, 0, 1);
      break;
  }
  *((_QWORD *)Object + 14) = 0LL;
  ExReleasePushLockExclusiveEx(Object + 104, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*(PVOID *)(i + 32));
  return ObfDereferenceObject(Object);
}
