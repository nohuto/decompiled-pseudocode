/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x14069A3D8
 * Callers:
 *     CmpTransInitializeTransaction @ 0x140699834 (CmpTransInitializeTransaction.c)
 *     CmpTransSearchAddTransFromHive @ 0x14069A384 (CmpTransSearchAddTransFromHive.c)
 *     CmpRecoverEnlistment @ 0x140831DE8 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x1408324AC (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x1408326E0 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1406331E8 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(_QWORD *a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  struct _EX_RUNDOWN_REF *v6; // r9
  __int64 result; // rax

  if ( !a1 || a1 != CmRmSystem && !a1[10] )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  v6 = (struct _EX_RUNDOWN_REF *)qword_140424FF0;
  if ( a1 != CmRmSystem )
    v6 = (struct _EX_RUNDOWN_REF *)a1[10];
  result = CmpTransSearchAddTrans(a2, a3, (__int64)a1, v6, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
