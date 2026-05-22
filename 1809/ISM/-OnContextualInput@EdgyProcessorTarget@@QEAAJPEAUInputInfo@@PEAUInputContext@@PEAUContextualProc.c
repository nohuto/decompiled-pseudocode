/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CD2A0
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CACA0 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1800CBB94 (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800CE230 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800CE334 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1800CE618 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x18010517C (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801051FC (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        EdgyProcessorTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  int v10; // ecx
  int v11; // edx
  SessionBasedPointerDeviceArbitration *v12; // rcx
  int v13; // eax
  const char *v14; // r9
  unsigned int v15; // r14d
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  EdgyImpl *v20; // rcx
  EdgyImpl *v21; // rcx
  bool CandidateEdgyDetectedInfo; // al
  const char *v23; // r9
  __int128 v24; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+40h] [rbp-C0h]
  __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  char v30[40]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  _BYTE v32[1600]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+628h]

  if ( !a2 )
  {
    v7 = 224LL;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( !a4 )
  {
    v7 = 225LL;
    goto LABEL_3;
  }
  v10 = *((_DWORD *)a3 + 8);
  if ( (unsigned int)(v10 - 2) <= 1 )
  {
    *(_DWORD *)a4 = v10;
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != 1 )
      goto LABEL_30;
    if ( *((_DWORD *)this + 12) == -1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xC9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)a4);
      JUMPOUT(0x1800CD622LL);
    }
    v11 = *((_DWORD *)a2 + 14);
    if ( v11 == *((_DWORD *)this + 12) )
    {
      *((_QWORD *)&v25 + 1) = *((unsigned int *)a2 + 2);
      DWORD2(v24) = *((_DWORD *)a2 + 15);
      DWORD1(v24) = *((_DWORD *)a2 + 1);
      HIDWORD(v24) = *((_DWORD *)a2 + 16);
      LODWORD(v24) = v11;
      LODWORD(v25) = *((_DWORD *)a2 + 17);
      *((_DWORD *)this + 9) = v10;
      v12 = (SessionBasedPointerDeviceArbitration *)*((_QWORD *)this + 17);
      *((_OWORD *)this + 3) = v24;
      *((_OWORD *)this + 4) = v25;
      v13 = SessionBasedPointerDeviceArbitration::OnInputReport(v12, a2);
      v15 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x105,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          (const char *)(unsigned int)v13);
        return v15;
      }
      v16 = *((_DWORD *)this + 8);
      v17 = v16;
      if ( v16 != 1 && *((_QWORD *)this + 24) )
      {
        if ( *((_DWORD *)a2 + 12) != 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x366,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
            v14);
          __debugbreak();
        }
        memcpy_0(v32, a2, sizeof(v32));
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23), v32);
        v17 = *((_DWORD *)this + 8);
        v16 = v17;
      }
      v18 = v17;
      v19 = v16;
      if ( v17 != 1 && *((_DWORD *)a2 + 2) >= *((_DWORD *)this + 10) && !v17 )
      {
        v20 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
        *((_DWORD *)this + 8) = 1;
        EdgyImpl::Reset(v20);
        v18 = *((_DWORD *)this + 8);
        v19 = v18;
      }
      if ( v18 == 3 )
      {
        v26 = 0;
        v27 = 0LL;
        v28 = 0LL;
        v29 = 0LL;
        memset_0(v30, 0, sizeof(v30));
        v21 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
        v31 = 0LL;
        if ( *((_QWORD *)v21 + 1) )
          CandidateEdgyDetectedInfo = EdgyImpl::GetCandidateEdgyDetectedInfo(
                                        v21,
                                        (struct CandidateEdgyDetectedInfo *)&v26);
        else
          CandidateEdgyDetectedInfo = 0;
        if ( CandidateEdgyDetectedInfo )
        {
          if ( !v27 )
            *((_DWORD *)this + 8) = 2;
        }
        else
        {
          *((_DWORD *)this + 8) = 1;
          *((_DWORD *)this + 20) = -1;
          *(_QWORD *)((char *)this + 84) = 0LL;
          *(_QWORD *)((char *)this + 92) = 0LL;
          *((_QWORD *)this + 13) = 0LL;
          EdgyImpl::Reset((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL));
        }
        v19 = *((_DWORD *)this + 8);
      }
    }
    else
    {
LABEL_30:
      *((_DWORD *)this + 8) = 1;
      v19 = 1;
    }
    if ( v19 == 2 )
    {
      if ( (int)EdgyImpl::EnsureInputTargeting((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL), a4) >= 0 )
      {
        if ( *(_DWORD *)a4 == 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x146,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
            v23);
          __debugbreak();
        }
      }
      else
      {
        *(_DWORD *)a4 = 0;
      }
      v8 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
             *((SessionBasedPointerDeviceArbitration **)this + 17),
             *((_DWORD *)a2 + 1));
      if ( v8 < 0 )
      {
        v7 = 340LL;
        goto LABEL_4;
      }
    }
    else if ( !v19 || v19 == 3 )
    {
      if ( Edges::GetCandidate(
             (Edges *)(*(_QWORD *)(*((_QWORD *)this + 15) + 104LL) + 72LL),
             *(__int64 **)(*((_QWORD *)this + 15) + 80LL),
             0LL,
             0LL,
             0LL) )
      {
        *(_DWORD *)a4 = 1;
      }
      else
      {
        *(_DWORD *)a4 = 0;
        v8 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
               *((SessionBasedPointerDeviceArbitration **)this + 17),
               *((_DWORD *)a2 + 1));
        if ( v8 < 0 )
        {
          v7 = 363LL;
          goto LABEL_4;
        }
      }
    }
    else
    {
      *(_DWORD *)a4 = 0;
      v8 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
             *((SessionBasedPointerDeviceArbitration **)this + 17),
             *((_DWORD *)a2 + 1));
      if ( v8 < 0 )
      {
        v7 = 386LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
