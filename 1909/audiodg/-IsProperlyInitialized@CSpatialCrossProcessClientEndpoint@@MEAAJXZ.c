/*
 * XREFs of ?IsProperlyInitialized@CSpatialCrossProcessClientEndpoint@@MEAAJXZ @ 0x140058860
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058DB4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::IsProperlyInitialized(
        CSpatialCrossProcessClientEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // r9d

  if ( (CSpatialCrossProcessBaseEndpoint::ReadCPFlags(this, a2, a3, 2289827918LL) & 0x20) != 0 || *(_BYTE *)(v3 + 976) )
    return 0;
  return v4;
}
