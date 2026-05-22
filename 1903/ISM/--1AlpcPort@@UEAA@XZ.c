/*
 * XREFs of ??1AlpcPort@@UEAA@XZ @ 0x1800D4250
 * Callers:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800D4510 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800D4550 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 */

void __fastcall AlpcPort::~AlpcPort(AlpcPort *this)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &AlpcPort::`vftable';
  for ( i = (_QWORD *)((char *)this + 64); ; --i[2] )
  {
    v3 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *i = v4;
    *(_QWORD *)(v4 + 8) = i;
    if ( v3 == i )
      break;
    if ( v3 != (_QWORD *)8 )
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)(v3 - 1), 1u);
  }
  v5 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  SipcPort::~SipcPort(this);
}
