/*
 * XREFs of MiInitializeSystemPteTracker @ 0x1409DA720
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  __int64 v0; // rcx
  _QWORD *result; // rax

  if ( ((unsigned __int8)&stru_14043AB80 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = 16LL;
  qword_14043AB90 = 0LL;
  stru_14043AB80 = 0uLL;
  result = &unk_14043B7B0;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v0;
  }
  while ( v0 );
  return result;
}
