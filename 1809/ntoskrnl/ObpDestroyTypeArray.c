/*
 * XREFs of ObpDestroyTypeArray @ 0x1408623E8
 * Callers:
 *     ObEnumerateObjectsByType @ 0x140861BB4 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x140861C80 (ObGetObjectInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDestroyTypeArray(_QWORD *P)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    {
      v3 = P[i + 1];
      if ( v3 )
        ObfDereferenceObject((PVOID)(v3 + 80));
    }
    ExFreePoolWithTag(P, 0x7241624Fu);
  }
}
