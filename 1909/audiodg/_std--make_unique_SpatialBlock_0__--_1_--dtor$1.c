/*
 * XREFs of _std::make_unique_SpatialBlock_0__::_1_::dtor$1 @ 0x14005B034
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14005B1A4 (--1-$unique_ptr@VSpatialBlock@@U-$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_unique_SpatialBlock_0__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
