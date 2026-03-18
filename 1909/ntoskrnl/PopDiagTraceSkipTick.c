/*
 * XREFs of PopDiagTraceSkipTick @ 0x1408B02F4
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSkipTick(unsigned __int8 a1, unsigned __int8 a2)
{
  REGHANDLE v4; // rbx
  int v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+34h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SKIP_TICK) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v5 = a1;
      v6 = a2;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = &v6;
      v9 = 4;
      EtwWrite(v4, &POP_ETW_EVENT_SKIP_TICK, 0LL, 2u, &UserData);
    }
  }
}
