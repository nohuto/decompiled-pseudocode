/*
 * XREFs of MiInitializeSystemPteTracker @ 0x1409DB720
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  __int64 v0; // rcx
  _QWORD *result; // rax

  if ( ((unsigned __int8)&stru_14043BC40 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = 16LL;
  qword_14043BC50 = 0LL;
  stru_14043BC40 = 0uLL;
  result = &unk_14043C870;
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
