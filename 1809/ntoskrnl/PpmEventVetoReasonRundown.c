/*
 * XREFs of PpmEventVetoReasonRundown @ 0x140879D88
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PpmEventVetoReasonRundown()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN) )
    {
      v0 = PpmIdleVetoList;
      if ( PpmIdleVetoList )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v6;
        v1 = 0LL;
        UserData.Size = 4;
        if ( *(_DWORD *)PpmIdleVetoList )
        {
          do
          {
            v2 = v1 + 1;
            v3 = 2 * v1;
            v6 = v2;
            v4 = *(unsigned __int16 *)(v0 + 8 * v3 + 10);
            v5 = *(_QWORD *)(v0 + 8 * v3 + 16);
            v10 = 0;
            v8 = v5;
            v9 = v4;
            EtwWrite(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN, 0LL, 2u, &UserData);
            v0 = PpmIdleVetoList;
            v1 = v2;
          }
          while ( v2 < *(_DWORD *)PpmIdleVetoList );
        }
      }
    }
  }
}
