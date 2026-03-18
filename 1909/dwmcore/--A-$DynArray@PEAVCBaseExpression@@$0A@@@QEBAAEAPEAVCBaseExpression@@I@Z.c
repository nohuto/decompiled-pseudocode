/*
 * XREFs of ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x18016A4FC
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A23BC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A4BB8 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBaseExpression *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
