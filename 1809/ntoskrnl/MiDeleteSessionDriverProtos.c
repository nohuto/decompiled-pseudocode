/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x1406E1A78
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140682104 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x14085F13C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x140136F84 (MiDeletePerSessionProtos.c)
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
