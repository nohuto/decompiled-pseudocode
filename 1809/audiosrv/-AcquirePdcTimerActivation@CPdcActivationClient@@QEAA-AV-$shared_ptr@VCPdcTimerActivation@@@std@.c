/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18002F900
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002E8A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAPEAPEAVCVADServer@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001CE24 (--$_Emplace_reallocate@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x180065E08 (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  _BYTE *v8; // rdx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  std::_Ref_count_base *v13; // rcx
  _QWORD *result; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  v18 = a2;
  try
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( *(_QWORD *)a1 )
    {
      v6 = (struct _Mtx_internal_imp_t *)(a1 + 32);
      v17 = a1 + 32;
      v7 = _Mtx_lock((_Mtx_t)(a1 + 32));
      if ( v7 )
        std::_Throw_C_error(v7);
      v8 = *(_BYTE **)(a1 + 16);
      if ( *(_BYTE **)(a1 + 24) == v8 )
      {
        std::vector<CVADServer *>::_Emplace_reallocate<CVADServer * const &>(a1 + 8, v8, &v19);
      }
      else
      {
        *(_QWORD *)v8 = a3;
        *(_QWORD *)(a1 + 16) += 8LL;
      }
      v9 = _Mtx_unlock(v6);
      if ( v9 )
        std::_Throw_C_error(v9);
      v17 = a1;
      v10 = (__int64 *)std::make_shared<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(v15, &v17, &v19);
      v11 = *v10;
      v12 = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      *a2 = v11;
      v13 = (std::_Ref_count_base *)a2[1];
      a2[1] = v12;
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
    }
    result = a2;
  }
  catch ( std::bad_alloc )
  {
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::AcquirePdcTimerActivation", 56, -2147024882);
    return v18;
  }
  return result;
}
