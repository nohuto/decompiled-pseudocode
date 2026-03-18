/*
 * XREFs of NtUserGetWOWClass @ 0x1C022EE00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01EA750 (_GetWOWClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // rbx
  ULONG64 v10; // rdx
  _BYTE **v11; // rax
  _QWORD *WOWClass; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  int v16; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v8 = *a2;
  v16 = *a2;
  v9 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v9 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (ULONG64)&v9[(unsigned __int16)v8 + 2];
  v11 = (_BYTE **)MmUserProbeAddress;
  if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v16) )
  {
    if ( (v8 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v11 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v10 > (unsigned __int64)v9 )
      goto LABEL_12;
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v11 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v9, v7);
  v14 = WOWClass;
  if ( WOWClass )
    v14 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 464));
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
