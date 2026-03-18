/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x18008086C
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x18007EDF0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18007EE30 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18007EF74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x180080904 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
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
