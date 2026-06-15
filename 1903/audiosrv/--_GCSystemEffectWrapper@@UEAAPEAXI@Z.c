/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x180139580
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemEffectWrapper@@UEAA@XZ @ 0x1801394BC (--1CSystemEffectWrapper@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x18013BE78 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x18013BF3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  void *v4; // rax

  CSystemEffectWrapper::~CSystemEffectWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = AERTGetDLLRTHeap();
    AERTFree(this, v4);
  }
  return this;
}
