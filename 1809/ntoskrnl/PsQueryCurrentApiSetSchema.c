/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1406CB438
 * Callers:
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1407613D4 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x14013907C (MmQueryApiSetSchema.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 129);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
