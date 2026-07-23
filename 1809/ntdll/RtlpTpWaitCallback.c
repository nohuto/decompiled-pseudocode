/*
 * XREFs of RtlpTpWaitCallback @ 0x180030240
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x18002EBE8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18002EC24 (TppStartThreadData.c)
 *     RtlpTpWaitCheckReset @ 0x18003035C (RtlpTpWaitCheckReset.c)
 *     RtlpTpImpersonate @ 0x1800891B0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A04A0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, _QWORD *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (a2[1] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *a2 )
    RtlpTpImpersonate(*a2, a2, a3);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(0, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppStartThreadData(v13, a2[4], a2[5], (__int64)v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  ((void (__fastcall *)(_QWORD, __int64))a2[4])(a2[5], v9);
  v11 = *((_DWORD *)a2 + 2);
  if ( (v11 & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v11 = *((_DWORD *)a2 + 2);
  }
  if ( (v11 & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v13[0]);
}
