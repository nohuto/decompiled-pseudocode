/*
 * XREFs of ??$construct@UHint@ActivationHints@@U12@@?$_Default_allocator_traits@V?$allocator@UHint@ActivationHints@@@std@@@std@@SAXAEAV?$allocator@UHint@ActivationHints@@@1@QEAUHint@ActivationHints@@$$QEAU34@@Z @ 0x1803AAFB4
 * Callers:
 *     ??$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@QEAU12@0PEAU12@AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x1803AAF70 (--$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V-$allocator@UHint@ActivationHints@@@std.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803AB290 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<ActivationHints::Hint>>::construct<ActivationHints::Hint,ActivationHints::Hint>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a3 + 56) = 7LL;
  *(_WORD *)(a3 + 32) = 0;
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a3 + 64);
  result = *(_QWORD *)(a3 + 72);
  *(_QWORD *)(a3 + 72) = 0LL;
  *(_QWORD *)(a2 + 72) = result;
  return result;
}
