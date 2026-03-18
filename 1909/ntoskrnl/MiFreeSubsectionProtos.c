/*
 * XREFs of MiFreeSubsectionProtos @ 0x1406E9F54
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x1406E9B08 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E9C20 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 */

unsigned __int64 __fastcall MiFreeSubsectionProtos(unsigned __int64 **a1)
{
  unsigned __int64 *v2; // rcx
  unsigned __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = (unsigned __int64 *)*v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
