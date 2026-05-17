/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x18002ECB4
 * Callers:
 *     TppExecuteWaitCallback @ 0x18002BDF8 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18002EA60 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180031DC0 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180015920 (RtlSetThreadSubProcessTag.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x1800304C0 (TpCallbackMayRunLong.c)
 */

__int64 __fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
  return RtlSetThreadWorkOnBehalfTicket(a2 + 128);
}
