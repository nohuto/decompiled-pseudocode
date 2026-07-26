/*
 * XREFs of ndisPowerStateCallback @ 0x1C00327F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 */

__int64 __fastcall ndisPowerStateCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v7; // rax
  int v8; // ecx
  char v10[4]; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = Value;
  if ( Value && ValueLength >= 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v10 = *Value;
      LOBYTE(Value) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Value,
        14,
        54,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        v10[0]);
    }
    v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
      v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    if ( !v7 )
    {
      LODWORD(Value) = 1;
      v8 = (_BYTE)ndisAcOnLine == 1;
      if ( *v5 && (unsigned int)(*v5 - 1) <= 1 )
      {
        ndisAcOnLine = 0;
      }
      else
      {
        v4 = 1;
        ndisAcOnLine = 1;
      }
      if ( v4 != v8 )
        ndisNotifyMiniports(0LL);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Value) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Value,
        14,
        55,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        *v5);
    }
  }
  return 0LL;
}
