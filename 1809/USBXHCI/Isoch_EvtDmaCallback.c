/*
 * XREFs of Isoch_EvtDmaCallback @ 0x1C0029760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C0029E90 (Isoch_MapTransfers.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002C518 (Isoch_Stage_MapIntoRing.c)
 */

__int64 __fastcall Isoch_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[9] = a3;
  result = Isoch_Stage_MapIntoRing(a4, 0LL);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 340), 1u) )
  {
    if ( *(_DWORD *)(v4 + 352) )
    {
      result = TR_AttemptStateChange(v4, 3, 4);
      if ( (_DWORD)result == 3 )
        return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 *(_QWORD *)(v4 + 320),
                 -100000000LL);
    }
    else
    {
      result = TR_AttemptStateChange(v4, 3, 3);
      if ( (_DWORD)result == 3 )
        return Isoch_MapTransfers(v4, 0LL);
    }
  }
  return result;
}
