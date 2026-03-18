/*
 * XREFs of KiIntSteerLogProc @ 0x1400BE998
 * Callers:
 *     KiIntSteerLogStatus @ 0x1402B1CA8 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogProc(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  int v4; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int16 *v5[2]; // [rsp+48h] [rbp+Fh] BYREF
  __int16 v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ah] [rbp+21h]
  __int16 v8; // [rsp+5Eh] [rbp+25h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+27h] BYREF
  __int64 v10; // [rsp+70h] [rbp+37h]
  __int64 v11; // [rsp+78h] [rbp+3Fh]

  v1 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  v7 = 0;
  v2 = &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v2 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  v8 = 0;
  if ( KiIntSteerEtwHandle )
  {
    LOBYTE(v1) = EtwEventEnabled(KiIntSteerEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      v5[1] = (unsigned __int16 *)qword_140572748[0];
      v5[0] = (unsigned __int16 *)KeActiveProcessors;
      v6 = 0;
      while ( 1 )
      {
        LODWORD(v1) = KeEnumerateNextProcessor(&v4, v5);
        if ( (_DWORD)v1 )
          break;
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v4;
        v11 = 4LL;
        v10 = KiProcessorBlock[v4] + 11672;
        EtwWriteEx(KiIntSteerEtwHandle, v2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
    }
  }
  return (char)v1;
}
