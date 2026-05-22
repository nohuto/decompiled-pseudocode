/*
 * XREFs of ?PushBack@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z @ 0x1800D65C8
 * Callers:
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800D558C (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800D5800 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<AlpcPort::AlpcSectionListEntry>::PushBack(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)((a2 + 8) & -(__int64)(a2 != 0));
  result = *(_QWORD **)(a1 + 8);
  if ( *result != a1 )
    __fastfail(3u);
  *v2 = a1;
  *(_QWORD *)(((a2 + 8) & -(__int64)(a2 != 0)) + 8) = result;
  *result = v2;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v2;
  return result;
}
