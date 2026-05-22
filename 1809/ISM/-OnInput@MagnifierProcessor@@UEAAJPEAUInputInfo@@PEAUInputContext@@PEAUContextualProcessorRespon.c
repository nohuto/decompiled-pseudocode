/*
 * XREFs of ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@@Z @ 0x1800CF494 (--$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagnifierClientPro.c)
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x1800CF5CC (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VBamoMagnifierClientPr.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1800D0004 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1800D013C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z @ 0x1800D01AC (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z.c)
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1800D0398 (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  _BYTE *v9; // rdi
  int v10; // ecx
  int v11; // ecx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 **v14; // rdx
  __int64 *j; // r8
  __int64 i; // rdx
  _QWORD *v17; // rcx
  unsigned __int8 v18; // al
  int v19; // ebp
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  const char *v28; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v7 = *((_QWORD *)a4 + 1);
  v31 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v7 + 8LL))(v7, a2, a3);
  *(_DWORD *)a4 = 0;
  v8 = *((_QWORD *)a4 + 2);
  if ( v8 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v8 + 16LL))(v8, a2, a3);
  }
  v9 = (_BYTE *)(v7 + 32);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v7 + 32, &v30, *((_QWORD *)a2 + 2));
  MagnifierRecognizer::UpdateContactState((MagnifierRecognizer *)(v7 + 32), a2);
  if ( *(_BYTE *)(v7 + 32) && !*(_BYTE *)(v7 + 33) )
  {
    v10 = *(_DWORD *)(v7 + 36);
    if ( !v10 )
    {
      if ( *(_DWORD *)(v7 + 40) == 2 )
        *(_BYTE *)(v7 + 33) = 1;
      goto LABEL_31;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v12 = *(_QWORD **)(v7 + 48);
        v13 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 == v12 )
          goto LABEL_32;
        while ( (int)((v13[6] - v13[5]) * (v13[6] - v13[5])
                    + (HIDWORD(v13[6]) - HIDWORD(v13[5])) * (HIDWORD(v13[6]) - HIDWORD(v13[5]))) < (unsigned __int64)(unsigned int)(*(_DWORD *)(v7 + 84) * *(_DWORD *)(v7 + 84)) )
        {
          if ( !*((_BYTE *)v13 + 25) )
          {
            v14 = (__int64 **)v13[2];
            if ( *((_BYTE *)v14 + 25) )
            {
              for ( i = v13[1]; !*(_BYTE *)(i + 25) && v13 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
                v13 = (_QWORD *)i;
              v13 = (_QWORD *)i;
            }
            else
            {
              v13 = (_QWORD *)v13[2];
              for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v13 = j;
            }
          }
          if ( v13 == v12 )
            goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    if ( *(_DWORD *)(v7 + 40) == 1 )
    {
      v17 = **(_QWORD ***)(v7 + 48);
      if ( 1000000LL * *(_QWORD *)(v7 + 72) < v17[8] - v17[7] )
        *v9 = 0;
      if ( (int)((v17[6] - v17[5]) * (v17[6] - v17[5])
               + (HIDWORD(v17[6]) - HIDWORD(v17[5])) * (HIDWORD(v17[6]) - HIDWORD(v17[5]))) >= (unsigned __int64)(unsigned int)(*(_DWORD *)(v7 + 80) * *(_DWORD *)(v7 + 80)) )
LABEL_31:
        *v9 = 0;
    }
  }
LABEL_32:
  MagnifierRecognizer::CheckForTwoFingerPan((MagnifierRecognizer *)(v7 + 32));
  v18 = *(_BYTE *)(v7 + 34);
  if ( *(_BYTE *)(v7 + 33) )
  {
    v19 = 3;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifierprocessor.cpp",
      (const char *)v18,
      (unsigned __int16 *)"Can't recognize both 2fTap and 2fPan",
      v28);
    if ( *(_BYTE *)(v7 + 18) && *(_BYTE *)(v7 + 16) )
    {
      MagnifierRecognizer::Reset((MagnifierRecognizer *)(v7 + 32), (MagnifierProcessor *)((char *)this + 104));
      v30 = 0LL;
      v20 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &>(
              &v30,
              v7 + 120);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v20);
        JUMPOUT(0x1800CF046LL);
      }
      v21 = *((_QWORD *)a4 + 2);
      v22 = v30;
      if ( v21 != v30 )
      {
        v23 = v30;
        if ( v30 )
        {
          (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
          v21 = *((_QWORD *)a4 + 2);
          v22 = v30;
        }
        *((_QWORD *)a4 + 2) = v23;
        if ( v21 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v22 = v30;
        }
      }
      v19 = 2;
      if ( v22 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    *(_DWORD *)a4 = v19;
  }
  else if ( v18 )
  {
    if ( !*(_QWORD *)(v7 + 112) )
    {
      LODWORD(v30) = *(_BYTE *)(v7 + 18) != 0;
      v24 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &,enum MagnifierGestureTarget::GestureType &>(
              v7 + 112,
              v7 + 120,
              &v30);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x90,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v24);
        __debugbreak();
      }
    }
    v25 = *((_QWORD *)a4 + 2);
    v26 = *(_QWORD *)(v7 + 112);
    if ( v25 != v26 )
    {
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        v25 = *((_QWORD *)a4 + 2);
      }
      *((_QWORD *)a4 + 2) = v26;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    *(_DWORD *)a4 = 2;
  }
  else if ( *v9 || *(_BYTE *)(v7 + 35) )
  {
    *(_DWORD *)a4 = 1;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
