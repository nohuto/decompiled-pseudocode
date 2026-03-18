/*
 * XREFs of HUBPDO_AssignPDOIds @ 0x1C006F6FC
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C006F900 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBID_BuildUxdPnpId @ 0x1C0019020 (HUBID_BuildUxdPnpId.c)
 *     HUBID_BuildDeviceID @ 0x1C00191A8 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C00193BC (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C0019B98 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C0019C80 (HUBID_BuildContainerID.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C00761A8 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBPDO_AssignPDOIds(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  _BYTE *v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  NTSTATUS v12; // [rsp+28h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-68h] BYREF
  char v14; // [rsp+40h] [rbp-58h] BYREF

  *(_DWORD *)&DestinationString.Length = 3670016;
  DestinationString.Buffer = (wchar_t *)&v14;
  HUBREG_UpdateUxdSettings(*(_QWORD *)a1, a1, 0LL);
  if ( (*(_DWORD *)(a1 + 1632) & 1) != 0 )
    HUBID_BuildUxdPnpId(a1, (const void **)(a1 + 2120));
  v4 = HUBID_BuildDeviceID(a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = HUBID_BuildHardwareID(a1, a2, 0LL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = HUBID_BuildCompatibleID(a1, a2, 0LL, v7);
      v5 = v4;
      if ( v4 >= 0 )
      {
        HUBID_BuildContainerID(a1, a2);
        v8 = *(_DWORD *)(a1 + 1632);
        if ( (v8 & 0x40) != 0 )
        {
          if ( (v8 & 2) == 0 )
            DestinationString.MaximumLength = 32;
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 2152));
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015
                                                                                                 + 1704))(
                 WdfDriverGlobals,
                 a2,
                 &DestinationString);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 102;
            goto LABEL_5;
          }
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 8);
          if ( (*(_DWORD *)(v9 + 204) & 0x200) == 0
            || (v10 = *(_WORD *)(v9 + 236)) == 0
            || (*(_DWORD *)(a1 + 1636) & 2) == 0 )
          {
            v10 = *(_WORD *)(v9 + 200);
          }
          v4 = RtlIntegerToUnicodeString(v10, 0xAu, &DestinationString);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 103;
            goto LABEL_5;
          }
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015
                                                                                                 + 1704))(
                 WdfDriverGlobals,
                 a2,
                 &DestinationString);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 104;
            goto LABEL_5;
          }
        }
        return 0;
      }
      v6 = 101;
    }
    else
    {
      v6 = 100;
    }
  }
  else
  {
    v6 = 99;
  }
LABEL_5:
  v12 = v4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v6,
    (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
    v12,
    *(_QWORD *)&DestinationString.Length,
    DestinationString.Buffer);
  return v5;
}
