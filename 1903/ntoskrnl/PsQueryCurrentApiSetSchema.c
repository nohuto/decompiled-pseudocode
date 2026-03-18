/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x14070F570
 * Callers:
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x140788314 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x14015451C (MmQueryApiSetSchema.c)
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
