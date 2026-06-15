/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140003E2C
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DB4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040E8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140006F04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400074B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9D4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140035854 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  CPipeInstance *v1; // r14
  int v2; // edi
  unsigned int *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rcx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void (__fastcall **v10)(_QWORD, __int64); // rax
  _QWORD *v11; // rsi
  unsigned int *v12; // r15
  _QWORD v13[2]; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v14; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v15; // [rsp+58h] [rbp-50h] BYREF
  _OWORD v16[4]; // [rsp+60h] [rbp-48h] BYREF
  CPipeInstance *v17; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+B8h] [rbp+10h] BYREF
  _QWORD *v19; // [rsp+C0h] [rbp+18h] BYREF
  _QWORD *v20; // [rsp+C8h] [rbp+20h] BYREF

  v17 = this;
  v13[1] = -2LL;
  v1 = this;
  v2 = 0;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v18 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(this, &v18);
    v5 = v18;
    if ( !v18 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = v18[2];
    if ( v4[10] == 3
      && *(_DWORD *)(v6 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4LL)
      && (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v16[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v2 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
             0LL,
             v4[6],
             1LL,
             0,
             v16,
             &v20);
      if ( v2 < 0 )
      {
        if ( v19 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v9 = (void (__fastcall ***)(_QWORD, __int64))v20;
        goto LABEL_19;
      }
      v11 = v20;
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 30) + 24LL))(
             *((_QWORD *)v1 + 30),
             v20[4] + 8LL,
             *(unsigned int *)(v20[4] + 4LL),
             *((_QWORD *)v1 + 24),
             v20[4] + 40LL);
      if ( v2 < 0
        || (v2 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD **))(*(_QWORD *)v4 + 16LL))(v4, &v19), v2 < 0) )
      {
        if ( v19 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        goto LABEL_67;
      }
      v13[0] = 0LL;
      if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD *, _QWORD *, _QWORD *))(*v11 + 40LL))(v11, v19, v13, v19) )
      {
        v2 = -2005139404;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 24LL))(v11, v19);
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 32LL))(v11, v19);
        v2 = 0;
        try
        {
          v18 = v11;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)v1 + 16, v5, &v18);
        }
        catch ( ATL::CAtlException *v14 )
        {
          v7 = v14;
          if ( *(_DWORD *)v14 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v18) = *(_DWORD *)v7;
          v2 = (int)v18;
          if ( (int)v18 < 0 )
          {
            if ( v13[0] )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
            if ( v19 )
              (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
            v9 = (void (__fastcall ***)(_QWORD, __int64))v20;
LABEL_20:
            v10 = *v9;
LABEL_68:
            (*v10)(v9, 1LL);
            goto LABEL_3;
          }
          v1 = v17;
        }
        v20 = 0LL;
        v11 = 0LL;
      }
      if ( v13[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
      if ( v19 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *, __int64))*v11)(v11, 1LL);
    }
  }
  if ( *((_DWORD *)v1 + 28) == 5 && *((_QWORD *)v1 + 4) == 1LL )
  {
    v19 = 0LL;
    v17 = 0LL;
    v12 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)v1 + 16);
    v16[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v2 = CAPOProcessNode::CreateAPOProcessNode(
           &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
           0LL,
           v12[6],
           1LL,
           0,
           v16,
           &v19);
    if ( v2 < 0 )
    {
      if ( v17 )
        (*(void (**)(void))(*(_QWORD *)v17 + 16LL))();
      v9 = (void (__fastcall ***)(_QWORD, __int64))v19;
LABEL_19:
      if ( !v9 )
        goto LABEL_3;
      goto LABEL_20;
    }
    v11 = v19;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 30) + 24LL))(
           *((_QWORD *)v1 + 30),
           v19[4] + 8LL,
           *(unsigned int *)(v19[4] + 4LL),
           *((_QWORD *)v1 + 24),
           v19[4] + 40LL);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(unsigned int *, CPipeInstance **))(*(_QWORD *)v12 + 16LL))(v12, &v17), v2 < 0) )
    {
      if ( v17 )
        (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_67;
    }
    v20 = 0LL;
    if ( (*(unsigned int (__fastcall **)(_QWORD *, CPipeInstance *, _QWORD **, CPipeInstance *))(*v11 + 40LL))(
           v11,
           v17,
           &v20,
           v17) )
    {
      v2 = -2005139404;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, CPipeInstance *))(*v11 + 24LL))(v11, v17);
      (*(void (__fastcall **)(_QWORD *, CPipeInstance *))(*v11 + 32LL))(v11, v17);
      v2 = 0;
      try
      {
        v18 = v11;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((char *)v1 + 16, &v18);
      }
      catch ( ATL::CAtlException *v15 )
      {
        v8 = v15;
        if ( *(_DWORD *)v15 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v18) = *(_DWORD *)v8;
        v2 = (int)v18;
        if ( (int)v18 < 0 )
        {
          if ( v20 )
            (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
          if ( v17 )
            (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v17 + 16LL))(v17);
          v9 = (void (__fastcall ***)(_QWORD, __int64))v19;
          goto LABEL_20;
        }
      }
      v19 = 0LL;
      v11 = 0LL;
    }
    if ( v20 )
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    if ( v17 )
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v11 )
    {
LABEL_67:
      v10 = (void (__fastcall **)(_QWORD, __int64))*v11;
      v9 = (void (__fastcall ***)(_QWORD, __int64))v11;
      goto LABEL_68;
    }
  }
LABEL_3:
  if ( v2 < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x9A8u, v2);
  return (unsigned int)v2;
}
