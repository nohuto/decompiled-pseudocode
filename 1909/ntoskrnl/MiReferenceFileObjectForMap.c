/*
 * XREFs of MiReferenceFileObjectForMap @ 0x1405EB544
 * Callers:
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 */

void *__fastcall MiReferenceFileObjectForMap(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) == 0 )
    return 0LL;
  v2 = (void *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  ObfReferenceObject(v2);
  return v2;
}
