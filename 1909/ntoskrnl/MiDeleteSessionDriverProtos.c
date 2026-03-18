/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x14072A290
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140711384 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x14089B424 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400960CC (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1)
{
  unsigned __int64 i; // rbx
  unsigned __int64 *SubsectionDriverProtos; // rax

  for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = (unsigned __int64 *)MiGetSubsectionDriverProtos((_QWORD *)i);
      if ( SubsectionDriverProtos )
      {
        *(_QWORD *)(i + 24) = 0LL;
        SubsectionDriverProtos[8] = i;
        MiDeletePerSessionProtos(SubsectionDriverProtos);
      }
    }
  }
}
