/*
 * XREFs of FilterEval @ 0x140596454
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14059652C (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x1406A438C (ValidFilter.c)
 *     ConstraintEval @ 0x1406BF030 (ConstraintEval.c)
 * Callees:
 *     FilterEvalImpliedAnd @ 0x140592608 (FilterEvalImpliedAnd.c)
 *     FilterEvalStrict @ 0x140592808 (FilterEvalStrict.c)
 */

__int64 __fastcall FilterEval(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (__int64)a4, a5);
  return FilterEvalImpliedAnd(
           (__int64 (__fastcall *)(__int64, __int64, unsigned int *, unsigned int *, _QWORD *))a1,
           a2,
           a3,
           (__int64)a4,
           a5);
}
