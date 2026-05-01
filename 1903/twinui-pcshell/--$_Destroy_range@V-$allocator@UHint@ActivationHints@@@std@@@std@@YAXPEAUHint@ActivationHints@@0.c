/*
 * XREFs of ??$_Destroy_range@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x18038B3DC
 * Callers:
 *     ??$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@QEAU12@0PEAU12@AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x18038B620 (--$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V-$allocator@UHint@ActivationHints@@@std.c)
 * Callees:
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x18038B814 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ActivationHints::Hint>>(
        ActivationHints::Hint *this,
        ActivationHints::Hint *a2)
{
  ActivationHints::Hint *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ActivationHints::Hint::~Hint(v3);
      v3 = (ActivationHints::Hint *)((char *)v3 + 80);
    }
    while ( v3 != a2 );
  }
}
