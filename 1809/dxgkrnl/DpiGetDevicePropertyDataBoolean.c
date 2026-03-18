/*
 * XREFs of DpiGetDevicePropertyDataBoolean @ 0x1C00F01C8
 * Callers:
 *     DpiIsDriverUpdateInProgress @ 0x1C00F012C (DpiIsDriverUpdateInProgress.c)
 *     DpiFdoInitializeFdo @ 0x1C014B840 (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDevicePropertyDataBoolean(struct _DEVICE_OBJECT *a1, const DEVPROPKEY *a2, char *a3)
{
  char v4; // di
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  ULONG v10[6]; // [rsp+40h] [rbp-18h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF
  ULONG v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  if ( a1 && a2 && a3 )
  {
    v4 = 1;
    DevicePropertyData = IoGetDevicePropertyData(a1, a2, 0, 0, 1u, &v11, v10, &v12);
    v7 = DevicePropertyData;
    if ( DevicePropertyData == -1073741772 )
    {
      LODWORD(v7) = 0;
LABEL_6:
      v4 = 0;
LABEL_7:
      *a3 = v4;
      return (unsigned int)v7;
    }
    if ( DevicePropertyData >= 0 )
    {
      if ( v12 == 17 )
      {
        if ( v11 == -1 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v7 = -1073741788LL;
    }
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdError(v9);
    return (unsigned int)v7;
  }
  return 3221225485LL;
}
