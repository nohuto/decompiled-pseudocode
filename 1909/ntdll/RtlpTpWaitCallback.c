/*
 * XREFs of RtlpTpWaitCallback @ 0x18002EA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpWaitCheckReset @ 0x18002E988 (RtlpTpWaitCheckReset.c)
 *     TppStartThreadData @ 0x180030888 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180030918 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180085538 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x18010F390 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18010F42C (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, _BYTE *a2, PTP_WAIT a3, int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (a2[8] & 4) == 0 )
    RtlpTpWaitCheckReset((__int64)a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2, a2, a3);
  if ( (a2[8] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  TppStartThreadData(v12, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*((void (__fastcall **)(_QWORD, __int64))a2 + 4))(*((_QWORD *)a2 + 5), v9);
  v10 = *((_DWORD *)a2 + 2);
  if ( (v10 & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v10 = *((_DWORD *)a2 + 2);
  }
  if ( (v10 & 4) != 0 )
    RtlpTpWaitCheckReset((__int64)a2, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v12[0]);
}
