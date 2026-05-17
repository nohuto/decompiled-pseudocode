/*
 * XREFs of TpStartAsyncIoOperation @ 0x180031190
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800311F0 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = TppIopValidateIo(a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    TppBarrierAdjust(a1 + 56, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v3 = *(_QWORD *)(a1 + 144);
    result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v3 + 424) != MEMORY[0x7FFE03C0] )
      return TppAdjustRunningThreadGoal(v3);
  }
  return result;
}
