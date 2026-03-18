/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800D9860
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003360 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_18033D540) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_18033D548);
  return (ContextTable *)&Block;
}
