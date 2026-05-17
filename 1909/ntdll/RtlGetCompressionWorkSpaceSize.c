/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x180080D90
 * Callers:
 *     EtwpInitializeCompression @ 0x18010E534 (EtwpInitializeCompression.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCompressionWorkSpaceSize(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  LOWORD(a1) = a1 & 0xFF00;
  return ((__int64 (__fastcall *)(__int64))RtlWorkSpaceProcs[v1])(a1);
}
