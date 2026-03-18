/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140711350
 * Callers:
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x14078A774 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x140154BBC (MmQueryApiSetSchema.c)
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
