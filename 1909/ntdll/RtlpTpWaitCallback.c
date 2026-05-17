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

__int64 __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 UniqueThread_low; // rcx
  struct _TEB *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  UniqueThread_low = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate();
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
  {
    UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    *(_DWORD *)(a2 + 88) = UniqueThread_low;
  }
  v7 = NtCurrentTeb();
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(UniqueThread_low) )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(
      0,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v7->SubProcessTag);
  TppStartThreadData(v14, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v7->SubProcessTag);
  LOBYTE(v10) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v10);
  v11 = *(unsigned int *)(a2 + 8);
  if ( (v11 & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v13 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v13);
    v11 = *(unsigned int *)(a2 + 8);
  }
  if ( (v11 & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v11) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(
      0,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v7->SubProcessTag);
  return TppCompleteThreadData(v14[0]);
}
