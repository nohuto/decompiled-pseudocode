/*
 * XREFs of _MPCProcessor::GetPoints_::_1_::dtor$0 @ 0x1801350E5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180043600 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall MPCProcessor::GetPoints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::vector<PointData3D>::~vector<PointData3D>(*(_QWORD *)(a2 + 2248));
  }
}
