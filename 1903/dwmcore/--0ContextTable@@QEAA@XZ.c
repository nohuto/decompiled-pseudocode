/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800D90C0
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003380 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_180340460) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_180340468);
  return (ContextTable *)&Block;
}
