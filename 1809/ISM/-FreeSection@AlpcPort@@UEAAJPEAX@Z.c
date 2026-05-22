/*
 * XREFs of ?FreeSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall AlpcPort::FreeSection(AlpcPort *this, void *a2)
{
  void **i; // rdx

  for ( i = (void **)*((_QWORD *)this + 3); i != (void **)((char *)this + 24); i = (void **)*i )
  {
    if ( i[3] == a2 )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  if ( i )
    return AlpcPort::FreeSectionListEntry(this, (struct AlpcPort::SectionListEntry *)i);
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL);
  return 2147942487LL;
}
