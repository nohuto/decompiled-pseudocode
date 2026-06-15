/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x1801305D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemEffectWrapper@@UEAA@XZ @ 0x180130510 (--1CSystemEffectWrapper@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x180133100 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x1801331C0 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
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
