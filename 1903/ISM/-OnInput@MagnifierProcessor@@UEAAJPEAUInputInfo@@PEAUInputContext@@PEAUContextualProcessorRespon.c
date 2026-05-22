/*
 * XREFs of ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800DC3E0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x180104C54 (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagn_ea_180104C54.c)
 *     ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@@Z @ 0x180104CA8 (--$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagnifierClientPro.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801064A8 (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801064BC (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ @ 0x180106650 (-CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x180106810 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801068E8 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18010693C (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierProcessor::OnInput(
        MagnifierProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  const char *v14; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v7 = *((_QWORD *)a4 + 1);
  v17 = v7;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v17);
  *(_DWORD *)a4 = 0;
  v8 = *((_QWORD *)a4 + 2);
  if ( v8 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)(v7 + 24) = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v7 + 32, &v16, *((_QWORD *)a2 + 2));
  MagnifierRecognizer::UpdateContactState((MagnifierRecognizer *)(v7 + 32), a2);
  MagnifierRecognizer::CheckForTwoFingerTap((MagnifierRecognizer *)(v7 + 32));
  MagnifierRecognizer::CheckForTwoFingerPan((MagnifierRecognizer *)(v7 + 32));
  if ( *(_BYTE *)(v7 + 33) )
  {
    v9 = 3;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x73,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\ma"
                    "gnifierprocessor.cpp",
      (const char *)*(unsigned __int8 *)(v7 + 34),
      (void *)"Can't recognize both 2fTap and 2fPan",
      v14);
    if ( *(_BYTE *)(v7 + 18) && *(_BYTE *)(v7 + 16) )
    {
      MagnifierRecognizer::Reset((MagnifierRecognizer *)(v7 + 32), (MagnifierProcessor *)((char *)this + 104));
      v16 = 0LL;
      v10 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &>(
              &v16,
              (__int64 (__fastcall ****)(_QWORD))(v7 + 120));
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          125LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)a4 + 2, &v16);
      v9 = 2;
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
LABEL_15:
    *(_DWORD *)a4 = v9;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(v7 + 34) )
  {
    if ( !*(_QWORD *)(v7 + 112) )
    {
      LODWORD(v16) = *(_BYTE *)(v7 + 18) != 0;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &,enum MagnifierGestureTarget::GestureType &>(
              (__int64 *)(v7 + 112),
              (__int64 (__fastcall ****)(_QWORD))(v7 + 120),
              (int *)&v16);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          144LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
    }
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)a4 + 2, (__int64 *)(v7 + 112));
    v9 = 2;
    goto LABEL_15;
  }
  if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v7 + 32)) )
    *(_DWORD *)a4 = 1;
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v17);
  return 0LL;
}
