/*
 * XREFs of ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x1800803C4
 * Callers:
 *     _MPCVoiceProcessor::GetPoints_::_1_::dtor$0 @ 0x1800365C4 (_MPCVoiceProcessor--GetPoints_--_1_--dtor$0.c)
 *     __lambda_7acc6bf19e786374dd9408a671d7d8f6_::operator()_::_1_::dtor$0 @ 0x180080466 (__lambda_7acc6bf19e786374dd9408a671d7d8f6_--operator()_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::Process3DInput_::_1_::dtor$3 @ 0x180082E46 (_MPCHolographicInputManager--Process3DInput_--_1_--dtor$3.c)
 *     _MPCSixDofProcessor::GetPoints_::_1_::dtor$0 @ 0x180130162 (_MPCSixDofProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCGamepadProcessor::GetPoints_::_1_::dtor$0 @ 0x1801378D8 (_MPCGamepadProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCMouseProcessor::GetPoints_::_1_::dtor$0 @ 0x18013AEA0 (_MPCMouseProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCClickerProcessor::GetPoints_::_1_::dtor$0 @ 0x18013FB6C (_MPCClickerProcessor--GetPoints_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<PointData3D>::~vector<PointData3D>(__int64 a1)
{
  return std::vector<PointData3D>::_Tidy(a1);
}
