/*
 * XREFs of ?PowerStartingChild@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartingChild(FxPkgPnp *This)
{
  int _a3; // r10d
  FxDeviceBase *m_DeviceBase; // r8
  __int64 v4; // rdx
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 _a2; // r8
  __int16 v7; // ax
  const void *_a1; // rdx
  unsigned __int8 waitForParentOn; // [rsp+50h] [rbp+8h] BYREF

  _a3 = This->PowerCheckParentOverload(This, &waitForParentOn);
  if ( _a3 >= 0 )
    return waitForParentOn != 0 ? 867 : 783;
  m_DeviceBase = This->m_DeviceBase;
  v4 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 96LL);
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a2 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  v7 = *(_WORD *)(v4 + 10);
  if ( !m_ObjectSize )
    _a2 = 0LL;
  _a1 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7 )
    _a1 = 0LL;
  WPP_IFR_SF_qid(This->m_Globals, 2u, 0xCu, 0x12u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3);
  return 837LL;
}
