/*
 * XREFs of ?_Destroy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXPEAUHint@ActivationHints@@0@Z @ 0x18032C0B4
 * Callers:
 *     _std::vector_ActivationHints::Hint_std::allocator_ActivationHints::Hint___::_Emplace_reallocate_ActivationHints::Hint__::_1_::catch$128 @ 0x18032B19D (_std--vector_ActivationHints--Hint_std--allocator_ActivationHints--Hint___--_Emplace_reallocate_.c)
 * Callees:
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x18032B3E4 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

void __fastcall std::vector<ActivationHints::Hint>::_Destroy(
        __int64 a1,
        ActivationHints::Hint *a2,
        ActivationHints::Hint *a3)
{
  ActivationHints::Hint *v4; // rbx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      ActivationHints::Hint::~Hint(v4);
      v4 = (ActivationHints::Hint *)((char *)v4 + 80);
    }
    while ( v4 != a3 );
  }
}
