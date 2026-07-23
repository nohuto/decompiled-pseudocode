/*
 * XREFs of RtlInitializeCorrelationVector @ 0x1800845A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180084618 @ 0x180084618 (sub_180084618.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

DWORD __cdecl RtlInitializeCorrelationVector(PCORRELATION_VECTOR CorrelationVector, int Version, const GUID *Guid)
{
  CHAR v4; // di
  __int64 v6; // rdx
  DWORD result; // eax

  v4 = Version;
  if ( (unsigned __int8)(Version - 1) > 1u || !Guid )
    return -1073741811;
  memset(CorrelationVector->Vector, 0, sizeof(CorrelationVector->Vector));
  CorrelationVector->Version = v4;
  result = sub_180084618(Guid, v6, CorrelationVector->Vector);
  if ( (result & 0x80000000) == 0 )
  {
    if ( v4 == 1 )
      strcpy(&CorrelationVector->Vector[16], ".0");
    else
      strcpy(&CorrelationVector->Vector[22], ".0");
  }
  return result;
}
