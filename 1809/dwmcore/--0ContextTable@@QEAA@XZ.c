/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x18007BEF0
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180002C70 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_18030BE10) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_18030BE18);
  return (ContextTable *)&Block;
}
