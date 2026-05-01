/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18009B458
 * Callers:
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x180291ACC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18003673C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 */

_QWORD *__fastcall std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  a2[1] = 0LL;
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
  {
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
