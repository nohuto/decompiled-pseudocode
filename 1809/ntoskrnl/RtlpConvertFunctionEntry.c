/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1401850A0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14019F9A8 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      a1 = v2 + a2 - 1;
      if ( a2 <= 0x7FFFFFFEFFFFLL && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return a1;
}
