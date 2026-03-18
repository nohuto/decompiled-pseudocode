/*
 * XREFs of ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x180175DE4
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18004EA00 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C2418 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBaseExpression *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
