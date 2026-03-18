/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x1C00FAE34
 * Callers:
 *     RIMDeviceNotify @ 0x1C00FAB00 (RIMDeviceNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_LLLD @ 0x1C00FBDD4 (WPP_RECORDER_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  _DWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v7 )
  {
    result = (_DWORD *)WPP_RECORDER_SF_qq(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         3u,
                         0x14u,
                         0xAu,
                         (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
                         a1,
                         a2);
    *a4 = 1;
    return result;
  }
  v9 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
    v9 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v9 )
  {
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xBu,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a1,
      a2);
    result = a5;
LABEL_13:
    *result = 1;
    return result;
  }
  v10 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
    v10 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v10 )
  {
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xCu,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a1,
      a2);
    result = a6;
    goto LABEL_13;
  }
  return (_DWORD *)WPP_RECORDER_SF_LLLD(
                     WPP_GLOBAL_Control->DeviceExtension,
                     *(unsigned __int16 *)(a3 + 4),
                     a3,
                     (_DWORD)a4);
}
