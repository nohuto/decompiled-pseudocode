/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x1C014E470
 * Callers:
 *     RIMDeviceNotify @ 0x1C014E2E0 (RIMDeviceNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_LLLD @ 0x1C014F1F8 (WPP_RECORDER_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(char a1, int a2, __int64 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  _DWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // [rsp+30h] [rbp-28h]
  char v12; // [rsp+30h] [rbp-28h]
  char v13; // [rsp+30h] [rbp-28h]

  v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v7 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = a2;
      LOBYTE(a2) = 4;
      result = (_DWORD *)WPP_RECORDER_SF_qq(
                           (_DWORD)gRimLog,
                           a2,
                           1,
                           10,
                           (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                           a1,
                           v11);
    }
    *a4 = 1;
    return result;
  }
  v9 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
    v9 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq((_DWORD)gRimLog, a2, 1, 11, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, a1, v12);
    }
    result = a5;
LABEL_19:
    *result = 1;
    return result;
  }
  v10 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
    v10 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq((_DWORD)gRimLog, a2, 1, 12, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, a1, v13);
    }
    result = a6;
    goto LABEL_19;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_DWORD *)WPP_RECORDER_SF_LLLD(*(unsigned __int16 *)(a3 + 6), *(unsigned __int16 *)(a3 + 4), a3, (_DWORD)a4);
  return result;
}
