/*
 * XREFs of NtUserGetWOWClass @ 0x1C01F0290
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01B2990 (_GetWOWClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rdi
  __int64 v6; // rcx
  const wchar_t *v7; // rbx
  ULONG64 v8; // rdx
  _BYTE **v9; // rax
  _QWORD *WOWClass; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  int v17; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v6 = *a2;
  v17 = *a2;
  v7 = (const wchar_t *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (ULONG64)v7 + (unsigned __int16)v6 + 2;
  v9 = (_BYTE **)MmUserProbeAddress;
  if ( v8 < MmUserProbeAddress && (unsigned __int16)v6 <= HIWORD(v17) )
  {
    if ( (v6 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      v9 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v8 > (unsigned __int64)v7 )
      goto LABEL_12;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v9 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v7);
  v15 = WOWClass;
  if ( WOWClass )
    v15 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 464));
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
