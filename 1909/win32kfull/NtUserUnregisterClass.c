/*
 * XREFs of NtUserUnregisterClass @ 0x1C0026990
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0026ABC (_UnregisterClass.c)
 *     _W32ExceptionHandler @ 0x1C0259354 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterClass(unsigned int *a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rcx
  unsigned __int16 *v6; // rbx
  ULONG64 v7; // rdx
  _BYTE **v8; // rax
  ULONG64 v9; // rcx
  int v10; // ebx
  int v12; // [rsp+78h] [rbp+20h]

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v5 = *a1;
  v12 = *a1;
  v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  if ( ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (ULONG64)v6 + (unsigned __int16)v5 + 2;
    v8 = (_BYTE **)MmUserProbeAddress;
    if ( v7 < MmUserProbeAddress && (unsigned __int16)v5 <= HIWORD(v12) )
    {
      if ( (v5 & 1) != 0 )
        goto LABEL_11;
      if ( v7 > (unsigned __int64)v6 )
        goto LABEL_13;
    }
    if ( (v5 & 1) == 0 )
    {
LABEL_12:
      **v8 = 0;
      goto LABEL_13;
    }
LABEL_11:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    v8 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_12;
  }
LABEL_13:
  v10 = UnregisterClass(v6);
  if ( v10 )
  {
    v9 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = 0uLL;
    *(_QWORD *)(a3 + 16) = 0LL;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
