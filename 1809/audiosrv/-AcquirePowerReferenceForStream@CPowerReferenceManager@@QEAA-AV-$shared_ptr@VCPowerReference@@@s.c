/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002E8A0
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x18002E400 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18002EC50 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18002F610 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18002F900 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x1800EFA58 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  __int64 *v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rax
  _QWORD *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  std::_Ref_count_base *v25; // rcx
  std::_Ref_count_base *v26; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  std::_Ref_count_base *v32; // rcx
  _BYTE v33[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v34; // [rsp+38h] [rbp-30h]
  __int128 v35; // [rsp+40h] [rbp-28h]

  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = 1;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CPowerReference>::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8 + 4;
  v9 = (std::_Ref_count_base *)a2[1];
  a2[1] = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v35 = 0LL;
  if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(a3 + 64) )
  {
    if ( *(_DWORD *)(a3 + 264) || (*(_BYTE *)(a3 + 268) & 1) == 0 )
      v6 = 0;
    if ( !v6 || *(_DWORD *)(a3 + 272) )
    {
      v10 = (__int64 *)CPdcActivationClient::AcquirePdcTimerActivation(a1, v33, a3);
      v11 = (_QWORD *)*a2;
      v12 = *v10;
      v13 = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      *v11 = v12;
      v14 = (std::_Ref_count_base *)v11[1];
      v11[1] = v13;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
    }
  }
  v15 = (__int64 *)CSebNotifier::AcquireSebReference(a1 + 112, v33);
  v16 = (_QWORD *)*a2;
  v17 = *v15;
  v18 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v16[2] = v17;
  v19 = (std::_Ref_count_base *)v16[3];
  v16[3] = v18;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  v20 = *(_QWORD *)(a3 + 192);
  if ( !v20 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v20 + 8) + 64LL))(v20 + 8) )
  {
    v21 = (__int64 *)CPlaybackNotifier::AcquireReference((_Mtx_t)(a1 + 216));
    v22 = (_QWORD *)*a2;
    v23 = *v21;
    v24 = v21[1];
    *v21 = 0LL;
    v21[1] = 0LL;
    v22[4] = v23;
    v25 = (std::_Ref_count_base *)v22[5];
    v22[5] = v24;
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    v26 = v34;
    if ( !v34 )
      return a2;
LABEL_25:
    std::_Ref_count_base::_Decref(v26);
    return a2;
  }
  v28 = (__int64 *)CCaptureNotifier::AcquireReference((_Mtx_t)(a1 + 312));
  v29 = (_QWORD *)*a2;
  v30 = *v28;
  v31 = v28[1];
  *v28 = 0LL;
  v28[1] = 0LL;
  v29[6] = v30;
  v32 = (std::_Ref_count_base *)v29[7];
  v29[7] = v31;
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  v26 = v34;
  if ( v34 )
    goto LABEL_25;
  return a2;
}
