/*
 * XREFs of sub_1800DC32C @ 0x1800DC32C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 *     RtlWerpReportException_0 @ 0x1800DB7E4 (RtlWerpReportException_0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     ZwAlpcConnectPort @ 0x18009D5B0 (ZwAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009D810 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DC538 @ 0x1800DC538 (sub_1800DC538.c)
 *     sub_1800DC5E8 @ 0x1800DC5E8 (sub_1800DC5E8.c)
 *     sub_1800DC748 @ 0x1800DC748 (sub_1800DC748.c)
 *     sub_1800DCA58 @ 0x1800DCA58 (sub_1800DCA58.c)
 */

__int64 __fastcall sub_1800DC32C(__int64 a1, __int64 a2)
{
  int SystemInformation; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v14; // [rsp+64h] [rbp-9Ch]
  unsigned int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  __int64 v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  __int128 v26; // [rsp+C0h] [rbp-40h]
  _QWORD v27[9]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = 1280;
  v17 = 0LL;
  v18 = 0LL;
  v13 = 0;
  SystemInformation = sub_1800DC538();
  if ( SystemInformation >= 0 )
  {
    SystemInformation = ZwQuerySystemInformation();
    if ( SystemInformation >= 0 )
    {
      v4 = sub_1800DC5E8(v15);
      SystemInformation = v4;
      if ( v4 >= 0 && v4 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v27, 0, sizeof(v27));
        v27[2] = 1400LL;
        v8 = sub_1800DC748((unsigned int)&v13, v5, v6, v7);
        v9 = v18;
        SystemInformation = v8;
        if ( v8 >= 0 )
        {
          v26 = 0LL;
          v22 = 48;
          v23 = 0LL;
          v25 = 0;
          v24 = 0LL;
          if ( v16 != -1 )
            v19 = -10000LL * v16;
          v10 = ZwAlpcConnectPort();
          SystemInformation = v10;
          if ( v10 >= 0 && v10 != 258 )
          {
            v20 = 1400LL;
            v11 = ZwAlpcSendWaitReceivePort();
            SystemInformation = v11;
            if ( v11 >= 0 && v11 != 258 )
            {
              SystemInformation = 0;
              if ( *(int *)(a2 + 44) < 0 )
                SystemInformation = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v9 )
          sub_1800DCA58(v9);
      }
    }
  }
  if ( v17 )
    ZwClose();
  return (unsigned int)SystemInformation;
}
