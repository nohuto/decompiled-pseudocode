/*
 * XREFs of NtUserGetWOWClass @ 0x1C022F420
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01EA8D0 (_GetWOWClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 ThreadWin32Thread; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  char *v11; // rbx
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  _QWORD *WOWClass; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  int v18; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v10 = *a2;
  v18 = *a2;
  v11 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (ULONG64)&v11[(unsigned __int16)v10 + 2];
  v13 = (_BYTE **)MmUserProbeAddress;
  if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v18) )
  {
    if ( (v10 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
      v13 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v12 > (unsigned __int64)v11 )
      goto LABEL_12;
  }
  if ( (v10 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v13 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v11, v8, v9);
  v16 = WOWClass;
  if ( WOWClass )
    v16 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 464));
  UserSessionSwitchLeaveCrit(v15);
  return v16;
}
