/*
 * XREFs of ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801081E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180053458 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     memcpy_s_0 @ 0x1800C1878 (memcpy_s_0.c)
 *     ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x180107B2C (-CreateKeyboardEvent@InputServiceProcessor@@SA-AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x180107C98 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x180107EE0 (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180108170 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801084DC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@wil@@C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceProcessor::OnInput(
        InputServiceProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  unsigned int v6; // r14d
  _OWORD *KeyboardEvent; // rax
  rsize_t v8; // r9
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  char ContainerIdFromInputTarget; // al
  int v13; // eax
  _KEYBOARD_INPUT_DATA v15; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v17[74]; // [rsp+58h] [rbp-B0h] BYREF
  _KEYBOARD_INPUT_DATA v18; // [rsp+180h] [rbp+78h] BYREF
  __int128 v19; // [rsp+18Ch] [rbp+84h]
  __int64 v20; // [rsp+19Ch] [rbp+94h]
  int v21; // [rsp+1A4h] [rbp+9Ch]
  _BYTE v22[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  BOOL v23; // [rsp+1ACh] [rbp+A4h]
  unsigned __int16 v24; // [rsp+1BAh] [rbp+B2h]
  _BYTE Destination[268]; // [rsp+1CCh] [rbp+C4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v16[1] = -2LL;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *(_DWORD *)a4 = 3;
    v6 = 1;
    if ( !*((_BYTE *)a2 + 344) )
    {
      KeyboardEvent = InputServiceProcessor::CreateKeyboardEvent(v17, (__int64)a2);
      v9 = v22;
      v10 = 2LL;
      do
      {
        *v9 = *KeyboardEvent;
        v9[1] = KeyboardEvent[1];
        v9[2] = KeyboardEvent[2];
        v9[3] = KeyboardEvent[3];
        v9[4] = KeyboardEvent[4];
        v9[5] = KeyboardEvent[5];
        v9[6] = KeyboardEvent[6];
        v9 += 8;
        *(v9 - 1) = KeyboardEvent[7];
        KeyboardEvent += 8;
        --v10;
      }
      while ( v10 );
      *v9 = *KeyboardEvent;
      v9[1] = KeyboardEvent[1];
      *((_QWORD *)v9 + 4) = *((_QWORD *)KeyboardEvent + 4);
      memcpy_s_0(Destination, 0LL, (char *)a2 + 72, v8);
      if ( IsEdition(8778LL) )
      {
        LODWORD(v16[0]) = 0;
        *(_QWORD *)&v15.UnitId = 0LL;
        if ( *(_QWORD *)a3 )
        {
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3,
                      (__int64 *)&v15) >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)&v15.UnitId + 40LL))(
                    *(_QWORD *)&v15.UnitId,
                    v16);
            if ( v11 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                157LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\syste"
                         "m\\lib\\inputserviceprocessor.cpp",
                (const char *)(unsigned int)v11);
              __debugbreak();
            }
          }
          if ( LODWORD(v16[0]) )
            MITSetLastInputRecipient();
        }
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v15);
      }
      if ( *(_QWORD *)a3 )
      {
        wil::Feature<__WilFeatureTraits_Feature_KeyboardInputVirtualization>::ReportUsageToService();
        *(_QWORD *)&v15.UnitId = *(_QWORD *)a3;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
        ContainerIdFromInputTarget = GetContainerIdFromInputTarget(&v15, (struct InputInfo *)((char *)a2 + 346));
        v23 = ContainerIdFromInputTarget != 0;
        if ( ContainerIdFromInputTarget )
        {
          if ( v24 == 3 || !v24 || v24 >= 7u )
            v6 = 3;
        }
      }
      InputTraceLogging::Keyboard::DeliverToInputService((*((_WORD *)a2 + 35) & 1) == 0, *((_DWORD *)a2 + 1));
      v13 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, _BYTE *))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                              + 32LL))(
              NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
              v22);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          178LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib"
                   "\\inputserviceprocessor.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
    }
    KeyboardInputInfo::GetKeyboardInputData(a2, &v15);
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v18 = v15;
    NtMITSynthesizeKeyboardInput(v6, &v18, *((unsigned int *)a2 + 1));
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
