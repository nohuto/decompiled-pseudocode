/*
 * XREFs of ??_GComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel *__fastcall Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::`scalar deleting destructor'(
        Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
