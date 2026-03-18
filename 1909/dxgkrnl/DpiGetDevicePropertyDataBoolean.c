/*
 * XREFs of DpiGetDevicePropertyDataBoolean @ 0x1C00C5FBC
 * Callers:
 *     DpiIsDriverUpdateInProgress @ 0x1C00C5F20 (DpiIsDriverUpdateInProgress.c)
 *     DpiFdoInitializeFdo @ 0x1C0167414 (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDevicePropertyDataBoolean(struct _DEVICE_OBJECT *a1, const DEVPROPKEY *a2, char *a3)
{
  char v4; // di
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v11; // rax
  ULONG v12[6]; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF
  ULONG v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  if ( a1 && a2 && a3 )
  {
    v4 = 1;
    DevicePropertyData = IoGetDevicePropertyData(a1, a2, 0, 0, 1u, &v13, v12, &v14);
    v9 = DevicePropertyData;
    if ( DevicePropertyData == -1073741772 )
    {
      LODWORD(v9) = 0;
LABEL_6:
      v4 = 0;
LABEL_7:
      *a3 = v4;
      return (unsigned int)v9;
    }
    if ( DevicePropertyData >= 0 )
    {
      if ( v14 == 17 )
      {
        if ( v13 == -1 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v9 = -1073741788LL;
    }
    v11 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v11 + 24) = v9;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v9;
  }
  return 3221225485LL;
}
