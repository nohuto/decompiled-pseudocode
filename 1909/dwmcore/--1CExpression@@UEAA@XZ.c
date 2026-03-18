/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x1800A48B8
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x1800A2DA0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A42E8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x1800A4950 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CExpression::~CExpression(void **this)
{
  __int64 i; // rdi

  *this = &CExpression::`vftable';
  ReleaseInterface<MoveOptimizationInfo>(this + 39);
  ReleaseInterface<MoveOptimizationInfo>(this + 41);
  CExpression::UnregisterSources((CExpression *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 100); i = (unsigned int)(i + 1) )
    ReleaseInterface<CDisplay>((__int64 *)this[49] + i);
  operator delete(this[49]);
  operator delete(this[51]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 45);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
