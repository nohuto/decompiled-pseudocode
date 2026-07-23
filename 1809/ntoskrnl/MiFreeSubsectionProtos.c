/*
 * XREFs of MiFreeSubsectionProtos @ 0x1406CA690
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
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
