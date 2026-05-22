/*
 * XREFs of _MPCVoiceProcessor::GetPoints_::_1_::dtor$0 @ 0x180036AB4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180080604 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall MPCVoiceProcessor::GetPoints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<PointData3D>::~vector<PointData3D>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
