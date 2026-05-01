/*
 * XREFs of ??$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@QEAU12@0PEAU12@AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x18038B620
 * Callers:
 *     ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x18038B414 (--$_Emplace_reallocate@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHin.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x18038B3DC (--$_Destroy_range@V-$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0.c)
 *     ??$construct@UHint@ActivationHints@@U12@@?$_Default_allocator_traits@V?$allocator@UHint@ActivationHints@@@std@@@std@@SAXAEAV?$allocator@UHint@ActivationHints@@@1@QEAUHint@ActivationHints@@$$QEAU34@@Z @ 0x18038B664 (--$construct@UHint@ActivationHints@@U12@@-$_Default_allocator_traits@V-$allocator@UHint@Activati.c)
 */

ActivationHints::Hint *__fastcall std::_Uninitialized_move<ActivationHints::Hint *,ActivationHints::Hint *,std::allocator<ActivationHints::Hint>>(
        __int64 a1,
        __int64 a2,
        ActivationHints::Hint *a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 80 )
  {
    std::_Default_allocator_traits<std::allocator<ActivationHints::Hint>>::construct<ActivationHints::Hint,ActivationHints::Hint>(
      a1,
      a3,
      v4,
      i);
    a3 = (ActivationHints::Hint *)((char *)a3 + 80);
  }
  std::_Destroy_range<std::allocator<ActivationHints::Hint>>(a3, a3);
  return a3;
}
