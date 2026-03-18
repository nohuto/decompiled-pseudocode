/*
 * XREFs of RootHub_DetectPortsInComplianceMode @ 0x1C0003BD8
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890 (Controller_WdfEvtWatchdogTimerFunc.c)
 * Callees:
 *     Etw_ReportControllerHealthWithPortError @ 0x1C0006820 (Etw_ReportControllerHealthWithPortError.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_DetectPortsInComplianceMode(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  unsigned int v3; // r15d
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbx
  char v9; // r12
  __int64 v10; // r14
  int Ulong; // eax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 8);
  v2 = 1;
  v3 = *(_DWORD *)(a1 + 16);
  v5 = *(_QWORD *)(result + 88);
  if ( v3 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 48);
      v7 = v2 - 1;
      v8 = 88 * v7;
      if ( *(_BYTE *)(88 * v7 + v6 + 13) != 2 )
      {
        v9 = 0;
        v10 = *(_QWORD *)(a1 + 40) + 16 * v7;
        DynamicLock_Acquire(*(_QWORD *)(v8 + v6 + 24));
        Ulong = XilRegister_ReadUlong(v5, v10);
        v14 = Ulong;
        if ( (Ulong & 0x1E0) == 0x140 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v12,
              11,
              259,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              Ulong);
          }
          v9 = 1;
        }
        else if ( *(_DWORD *)(v8 + v6 + 80) )
        {
          *(_DWORD *)(v8 + v6 + 80) = 0;
          *(_BYTE *)(v8 + v6 + 84) = 0;
        }
        result = DynamicLock_Release(*(_QWORD *)(v8 + *(_QWORD *)(a1 + 48) + 24));
        if ( v9 )
        {
          if ( ++*(_DWORD *)(v8 + v6 + 80) == 3 && !*(_BYTE *)(v8 + v6 + 84) )
          {
            result = Etw_ReportControllerHealthWithPortError(v13, *(_QWORD *)(a1 + 8), v2, &v14);
            *(_BYTE *)(v8 + v6 + 84) = 1;
          }
        }
      }
      ++v2;
    }
    while ( v2 <= v3 );
  }
  return result;
}
