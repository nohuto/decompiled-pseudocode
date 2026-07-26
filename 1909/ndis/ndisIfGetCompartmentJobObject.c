/*
 * XREFs of ndisIfGetCompartmentJobObject @ 0x1C0067C44
 * Callers:
 *     NdisGetAndReferenceCompartmentJobObject @ 0x1C00ABCE0 (NdisGetAndReferenceCompartmentJobObject.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

__int64 __fastcall ndisIfGetCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  KIRQL v6; // bp
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  unsigned int v8; // ebx
  unsigned int JobCount; // ecx
  _LIST_ENTRY *p_JobLink; // r14
  _LIST_ENTRY *i; // rsi

  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v8 = 0;
  if ( CompartmentBlock )
  {
    JobCount = CompartmentBlock->JobCount;
    if ( JobCount <= *a2 )
    {
      p_JobLink = &CompartmentBlock->JobLink;
      *a2 = 0;
      for ( i = CompartmentBlock->JobLink.Flink; i != p_JobLink; i = i->Flink )
      {
        ObfReferenceObject(i[1].Flink);
        *(_QWORD *)(a3 + 8LL * (*a2)++) = i[1].Flink;
      }
    }
    else
    {
      *a2 = JobCount;
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
