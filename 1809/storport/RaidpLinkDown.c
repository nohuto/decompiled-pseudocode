/*
 * XREFs of RaidpLinkDown @ 0x1C003DFF8
 * Callers:
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C003D8DC (McTemplateK0pqq.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 */

__int64 __fastcall RaidpLinkDown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]

  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 2216);
    v5 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq((struct _MCGEN_TRACE_CONTEXT *)a1, &EventLinkDown, a3, *(_QWORD *)(a1 + 552) + 16LL, v5, v6);
  }
  result = StorPortPause(*(_QWORD *)(a1 + 552) + 16LL, *(unsigned int *)(a1 + 2216));
  if ( (_BYTE)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2220), 0);
  return result;
}
