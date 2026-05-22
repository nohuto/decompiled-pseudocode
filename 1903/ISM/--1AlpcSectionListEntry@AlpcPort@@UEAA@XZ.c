/*
 * XREFs of ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800D42D8
 * Callers:
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800D4550 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3FCC (-FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800D52C0 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 */

void __fastcall AlpcPort::AlpcSectionListEntry::~AlpcSectionListEntry(AlpcPort::AlpcSectionListEntry *this)
{
  int v2; // eax

  *(_QWORD *)this = &AlpcPort::AlpcSectionListEntry::`vftable';
  v2 = AlpcPort::AlpcSectionListEntry::DestroySection(this);
  if ( v2 < 0 )
  {
    wil::details::in1diag0::FailFast_Hr((wil::details::in1diag0 *)(unsigned int)v2);
    __debugbreak();
  }
  *(_QWORD *)this = &SipcPort::SectionListEntry::`vftable';
}
