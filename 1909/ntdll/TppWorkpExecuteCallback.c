/*
 * XREFs of TppWorkpExecuteCallback @ 0x180030770
 * Callers:
 *     <none>
 * Callees:
 *     TppStartThreadData @ 0x180030888 (TppStartThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x18010F258 (TppETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x18010F390 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18010F42C (RtlpTpETWCallbackStop.c)
 */

int __fastcall TppWorkpExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  struct _PEB *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  LODWORD(v7) = TppWorkCallbackPrologRelease(Instance);
  if ( (_DWORD)v7 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(v3[18], v2, v3[10], v3[11], v3[13]);
    TppStartThreadData(&v10, v3[10], v3[11], v3[13]);
    *((_QWORD *)Instance + 11) = v3[10];
    *((_QWORD *)Instance + 12) = v3[11];
    ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, _QWORD, _QWORD *))v3[10])(Instance, v3[11], v3);
    LODWORD(v7) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v7 )
    {
      v7 = NtCurrentPeb();
      v5 = (__int64)v7->SharedData + 556;
    }
    if ( *(_BYTE *)v5 )
      LODWORD(v7) = RtlpTpETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    if ( v10 )
    {
      v7 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(v10 + 24) )
      {
        v7 = (struct _PEB *)((char *)v7 - *(_QWORD *)(v10 + 24));
        *(_QWORD *)(v10 + 24) = v7;
      }
    }
  }
  return (int)v7;
}
