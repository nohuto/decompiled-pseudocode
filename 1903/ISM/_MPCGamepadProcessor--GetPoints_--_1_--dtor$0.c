/*
 * XREFs of _MPCGamepadProcessor::GetPoints_::_1_::dtor$0 @ 0x1801378D8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180080604 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall MPCGamepadProcessor::GetPoints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<PointData3D>::~vector<PointData3D>(*(_QWORD *)(a2 + 48));
  }
  return result;
}
