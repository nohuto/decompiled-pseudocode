/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180021D80
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180020750 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180020C00 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180021050 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180021350 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1ADC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800FAAAC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800FB5F8 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800FB7EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  int v6; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  volatile signed __int32 **v15; // rax
  _QWORD *v16; // r8
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  const char *v21; // r9
  volatile signed __int32 **v22; // rax
  __int64 v23; // r8
  volatile signed __int32 *v24; // rcx
  volatile signed __int32 *v25; // rdx
  std::_Ref_count_base *v26; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  std::_Ref_count_base *v32; // rcx
  volatile signed __int32 *v33; // rcx
  int ActivationFactory; // eax
  volatile signed __int32 *v35; // rsi
  __int64 v36; // r14
  int v37; // eax
  __int64 v38; // r14
  _QWORD *v39; // rsi
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // [rsp+20h] [rbp-148h]
  __int64 v44; // [rsp+30h] [rbp-138h] BYREF
  volatile signed __int32 *v45; // [rsp+38h] [rbp-130h] BYREF
  std::_Ref_count_base *v46; // [rsp+40h] [rbp-128h]
  int v47; // [rsp+48h] [rbp-120h]
  _QWORD *v48; // [rsp+50h] [rbp-118h]
  __int64 v49; // [rsp+58h] [rbp-110h]
  __int128 v50; // [rsp+60h] [rbp-108h]
  __int128 v51; // [rsp+70h] [rbp-F8h]
  __int128 v52; // [rsp+80h] [rbp-E8h]
  __int128 v53; // [rsp+90h] [rbp-D8h]
  __int128 v54; // [rsp+A0h] [rbp-C8h]
  _OWORD v55[5]; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+100h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+110h] [rbp-58h] BYREF
  __int64 v58; // [rsp+128h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v49 = -2LL;
  v4 = a2;
  v48 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = 1;
  v47 = 1;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  try
  {
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
      *((_QWORD *)v8 + 10) = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    *v4 = v8 + 4;
    v9 = (std::_Ref_count_base *)v4[1];
    v4[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    v50 = 0LL;
    if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(a3 + 64) )
    {
      if ( *(_DWORD *)(a3 + 264) || (*(_BYTE *)(a3 + 268) & 1) == 0 )
        v6 = 0;
      if ( !v6 || *(_DWORD *)(a3 + 272) )
      {
        v10 = CPdcActivationClient::AcquirePdcTimerActivation(a1, &v45, a3);
        v11 = (_QWORD *)*v4;
        v12 = *v10;
        v13 = v10[1];
        *v10 = 0LL;
        v10[1] = 0LL;
        *v11 = v12;
        v14 = (std::_Ref_count_base *)v11[1];
        v11[1] = v13;
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        if ( v46 )
          std::_Ref_count_base::_Decref(v46);
      }
    }
    v15 = CSebNotifier::AcquireSebReference(a1 + 112, &v45);
    v16 = (_QWORD *)*v4;
    v17 = *v15;
    v18 = v15[1];
    *v15 = 0LL;
    v15[1] = 0LL;
    v16[2] = v17;
    v19 = (std::_Ref_count_base *)v16[3];
    v16[3] = v18;
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v46 )
      std::_Ref_count_base::_Decref(v46);
    v20 = *(_QWORD *)(a3 + 192);
    if ( v20 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v20 + 8) + 64LL))(v20 + 8) )
    {
      if ( (*(_DWORD *)(a3 + 268) & 0x20000) == 0 )
      {
        v51 = *(_OWORD *)(a3 + 280);
        v52 = *(_OWORD *)(a3 + 296);
        v53 = *(_OWORD *)(a3 + 312);
        v54 = *(_OWORD *)(a3 + 328);
        v55[0] = *(_OWORD *)(a3 + 344);
        v55[1] = *(_OWORD *)(a3 + 360);
        v55[2] = *(_OWORD *)(a3 + 376);
        v55[3] = *(_OWORD *)(a3 + 392);
        v55[4] = *(_OWORD *)(a3 + 408);
        v56 = *(_OWORD *)(a3 + 424);
        memset_0((char *)v55 + 8, 0, 0x38uLL);
        v28 = (__int64 *)CCaptureNotifier::AcquireReference((_Mtx_t)(a1 + 312), *((_QWORD *)&v56 + 1) > 0LL);
        v29 = (_QWORD *)*v4;
        v30 = *v28;
        v31 = v28[1];
        *v28 = 0LL;
        v28[1] = 0LL;
        v29[6] = v30;
        v32 = (std::_Ref_count_base *)v29[7];
        v29[7] = v31;
        if ( v32 )
          std::_Ref_count_base::_Decref(v32);
        if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
          std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader.Reserved.Reserved2[8]);
        v45 = 0LL;
        v58 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"Windows.Internal.CapabilityAccess.Management.CapabilityUsage",
          0x3Du,
          0x3Cu);
        v33 = v45;
        v45 = 0LL;
        if ( v33 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        ActivationFactory = RoGetActivationFactory(v58, &GUID_42947746_4ea0_48c2_9274_062ed61f8daa, &v45);
        if ( ActivationFactory < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x4C,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)ActivationFactory,
            v43);
        v35 = v45;
        v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader);
        v44 = 0LL;
        v37 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, __int64 *))(*(_QWORD *)v35 + 48LL))(
                v35,
                *(_QWORD *)(v36 + 24),
                &v44);
        if ( v37 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x50,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v37,
            v43);
        v38 = v44;
        v39 = (_QWORD *)*v4;
        v40 = *(_QWORD *)(*v4 + 64LL);
        *(_QWORD *)(*v4 + 64LL) = 0LL;
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v38 + 48LL))(
                v38,
                *(unsigned int *)(a3 + 64),
                0LL,
                v39 + 8);
        if ( v41 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x54,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v41,
            v43);
        v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v4 + 64LL) + 48LL))(*(_QWORD *)(*v4 + 64LL));
        if ( v42 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x55,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v42,
            v43);
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        if ( v45 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    else
    {
      v22 = CPlaybackNotifier::AcquireReference(
              (_Mtx_t)(a1 + 216),
              (volatile signed __int32 **)&hstringHeader,
              *(_QWORD *)(a3 + 208));
      v23 = *v4;
      v24 = *v22;
      v25 = v22[1];
      *v22 = 0LL;
      v22[1] = 0LL;
      *(_QWORD *)(v23 + 32) = v24;
      v26 = *(std::_Ref_count_base **)(v23 + 40);
      *(_QWORD *)(v23 + 40) = v25;
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader.Reserved.Reserved2[8]);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x59,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v21);
    return v48;
  }
  return v4;
}
