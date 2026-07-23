/*
 * XREFs of MiAllocateProcessVads @ 0x14067B3DC
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140761810 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocateVad @ 0x14067B484 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x14084D370 (MiReturnProcessVads.c)
 */

_QWORD *__fastcall MiAllocateProcessVads(__int64 a1, __int64 a2)
{
  void *Vad; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // rax

  Vad = (void *)MiAllocateVad(2147352576LL, 2147356671LL, 1LL);
  if ( !Vad )
    return 0LL;
  if ( !qword_14043B0C8 )
    goto LABEL_5;
  v5 = (_QWORD *)MiAllocateVad(qword_14043B0C8, qword_14043B0C8 + 4095, 1LL);
  if ( v5 )
  {
    *v5 = Vad;
    Vad = v5;
LABEL_5:
    if ( !a2 )
      return Vad;
    v7 = (_QWORD *)MiAllocateVad(*(_QWORD *)(a1 + 1152), a2 - 1, 0LL);
    if ( v7 )
    {
      *v7 = Vad;
      return v7;
    }
  }
  MiReturnProcessVads(Vad);
  return 0LL;
}
