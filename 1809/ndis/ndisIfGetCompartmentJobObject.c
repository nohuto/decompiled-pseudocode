/*
 * XREFs of ndisIfGetCompartmentJobObject @ 0x1C004287C
 * Callers:
 *     NdisGetAndReferenceCompartmentJobObject @ 0x1C006C0B0 (NdisGetAndReferenceCompartmentJobObject.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C001FB00 (ndisIfFindCompartmentBlock.c)
 */

__int64 __fastcall ndisIfGetCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  KIRQL v6; // bp
  _LIST_ENTRY *CompartmentBlock; // rax
  unsigned int v8; // ebx
  unsigned int Blink; // ecx
  _LIST_ENTRY *v10; // r14
  _LIST_ENTRY *i; // rsi

  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v8 = 0;
  if ( CompartmentBlock )
  {
    Blink = (unsigned int)CompartmentBlock[107].Blink;
    if ( Blink <= *a2 )
    {
      v10 = CompartmentBlock + 108;
      *a2 = 0;
      for ( i = CompartmentBlock[108].Flink; i != v10; i = i->Flink )
      {
        ObfReferenceObject(i[1].Flink);
        *(_QWORD *)(a3 + 8LL * (*a2)++) = i[1].Flink;
      }
    }
    else
    {
      *a2 = Blink;
      v8 = 261;
    }
  }
  else
  {
    *a2 = 0;
    v8 = -1073741275;
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  return v8;
}
