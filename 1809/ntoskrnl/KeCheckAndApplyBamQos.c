/*
 * XREFs of KeCheckAndApplyBamQos @ 0x140297E80
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     SwapContext @ 0x1401C4420 (SwapContext.c)
 *     KeSetThreadSchedulerAssist @ 0x140297F34 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KeUpdatePendingQosRequest @ 0x1402981E4 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x1402DB258 (PoSetProcessorQoS.c)
 */

__int64 __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ebp
  unsigned int v5; // esi
  int v6; // ebp
  unsigned int v7; // eax
  int v8; // ecx
  __int16 v9; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    _disable();
    v4 = *(_DWORD *)(a1 + 236);
    result = v4 & 3;
    v5 = *(_DWORD *)(a2 + 120) & 3;
    if ( v5 != (_DWORD)result )
    {
      v6 = v4 & 0xC;
      if ( (unsigned __int8)PoSetProcessorQoS(a1, v5) )
        v7 = *(_DWORD *)(a1 + 236) & 0xFFFFFFF3;
      else
        v7 = *(_DWORD *)(a1 + 236) & 0xFFFFFFF3 | (4 * v5);
      *(_DWORD *)(a1 + 236) = v7;
      v8 = (v7 & 0xC) != 0;
      result = v6 != 0;
      if ( (_DWORD)result != v8 )
        result = KeUpdatePendingQosRequest(a1);
    }
    if ( (v9 & 0x200) != 0 )
      _enable();
  }
  return result;
}
