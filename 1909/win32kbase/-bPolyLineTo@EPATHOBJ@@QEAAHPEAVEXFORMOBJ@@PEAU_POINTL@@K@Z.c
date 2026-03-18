/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0072A90
 * Callers:
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AD0E0 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     bPolyPolygon @ 0x1C00ADDC0 (bPolyPolygon.c)
 *     PATHOBJ_bPolyLineTo @ 0x1C00AE580 (PATHOBJ_bPolyLineTo.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C0072ADC (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bPolyLineTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3, int a4)
{
  __int64 result; // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  struct _POINTL *v8; // [rsp+28h] [rbp-10h]

  if ( !*((_QWORD *)this + 1) )
    return 0LL;
  v7[0] = 0;
  v8 = a3;
  v7[1] = a4;
  result = EPATHOBJ::addpoints(this, a2, (struct _PATHDATAL *)v7);
  if ( (_DWORD)result )
    *((_DWORD *)this + 1) += a4;
  return result;
}
