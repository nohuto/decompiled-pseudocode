/*
 * XREFs of RtlWow64SuspendProcess @ 0x1800DB550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     RtlIsCurrentProcess @ 0x180072320 (RtlIsCurrentProcess.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800793D0 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryObject @ 0x18009C8E0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwSuspendProcess @ 0x18009FD70 (ZwSuspendProcess.c)
 */

__int64 __fastcall RtlWow64SuspendProcess(__int64 a1)
{
  int SharedInfoProcess; // ebx
  bool IsCurrentProcess; // al
  int v4; // eax
  __int64 v5; // rdi
  __int64 v7; // [rsp+30h] [rbp-E8h]
  _BYTE v8[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v10[40]; // [rsp+70h] [rbp-A8h] BYREF
  int v11; // [rsp+98h] [rbp-80h]
  int v12; // [rsp+CCh] [rbp-4Ch]

  v9 = 0LL;
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(a1, v8, (__int64)v10);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v8[0] && (v10[4] & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject();
      if ( SharedInfoProcess >= 0 )
      {
        if ( (v12 & 0x800) != 0 )
        {
          IsCurrentProcess = RtlIsCurrentProcess(a1);
          v4 = sub_180005760(a1, 0LL, 102, 0, 0LL, 0LL, v7, (__int64)sub_1800DB6C0, !IsCurrentProcess, &v9, 0LL);
          v5 = v9;
          SharedInfoProcess = v4;
          if ( v4 >= 0 )
          {
            ZwWaitForSingleObject();
            ZwQueryInformationThread();
            SharedInfoProcess = v11;
          }
          if ( v5 )
            ZwClose();
        }
        else
        {
          return (unsigned int)-1073741790;
        }
      }
    }
    else
    {
      return (unsigned int)ZwSuspendProcess();
    }
  }
  return (unsigned int)SharedInfoProcess;
}
