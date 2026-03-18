/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140728F20
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x14089BC04 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400A8B4C (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
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
