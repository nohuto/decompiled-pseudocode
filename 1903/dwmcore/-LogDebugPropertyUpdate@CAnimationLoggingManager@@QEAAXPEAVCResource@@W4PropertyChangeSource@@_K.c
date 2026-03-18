/*
 * XREFs of ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801BFF98
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180099900 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x1800C2CA0 (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D4740 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetExpressionTypeString @ 0x18001F9F4 (_anonymous_namespace_--GetExpressionTypeString.c)
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180045C4C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x18018B22C (-SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801BFBAC (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?GetSubchannels@MatrixSubchannelMaskInfo@@QEBAGXZ @ 0x18022A740 (-GetSubchannels@MatrixSubchannelMaskInfo@@QEBAGXZ.c)
 *     ?GetSubchannels@VectorSubchannelMaskInfo@@QEBAGXZ @ 0x18022A790 (-GetSubchannels@VectorSubchannelMaskInfo@@QEBAGXZ.c)
 *     ?WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z @ 0x18022AAD8 (-WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z.c)
 *     ?WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z @ 0x18022ABE8 (-WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z.c)
 */

void __fastcall CAnimationLoggingManager::LogDebugPropertyUpdate(
        WCHAR *a1,
        struct CResource *a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        MatrixSubchannelMaskInfo *a8,
        struct CExpressionValue *a9)
{
  struct CExpressionValue *v9; // r13
  MatrixSubchannelMaskInfo *v12; // r14
  unsigned int v13; // ebx
  struct CExpressionValue *v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  const wchar_t *v27; // rax
  const WCHAR *v28; // rdx
  const WCHAR *CommentForObject; // rax
  const wchar_t *v30; // rax
  const WCHAR *v31; // rdx
  const WCHAR *v32; // rax
  const wchar_t *v33; // rax
  const WCHAR *v34; // rdx
  const WCHAR *v35; // rax
  const wchar_t *v36; // rax
  const WCHAR *v37; // rdx
  const WCHAR *v38; // rax
  const wchar_t *ExpressionTypeString; // rax
  const wchar_t *v40; // rax
  const WCHAR *v41; // rdx
  const WCHAR *v42; // rax
  const wchar_t *v43; // rax
  const WCHAR *v44; // rdx
  const WCHAR *v45; // rax
  const wchar_t *v46; // rax
  const WCHAR *v47; // rdx
  const WCHAR *v48; // rax
  int v49; // r11d
  const wchar_t *v50; // rax
  const WCHAR *v51; // rdx
  const WCHAR *v52; // rax
  int v53; // ecx
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v55; // rbx
  DiagnosticCallbacksManager *v56; // rdi
  unsigned __int16 Subchannels; // ax
  int v58; // eax
  unsigned int v59; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  int v61; // [rsp+50h] [rbp-B0h] BYREF
  struct CResource *v62; // [rsp+58h] [rbp-A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  unsigned int *v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+F0h] [rbp-10h] BYREF
  struct CExpressionValue *v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  char *v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  char *v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  char *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  char *v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  char *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  char *v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+168h] [rbp+68h]
  char *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  char *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  char *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  char *v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]
  char *v97; // [rsp+1B0h] [rbp+B0h]
  __int64 v98; // [rsp+1B8h] [rbp+B8h]
  char *v99; // [rsp+1C0h] [rbp+C0h]
  __int64 v100; // [rsp+1C8h] [rbp+C8h]
  char *v101; // [rsp+1D0h] [rbp+D0h]
  __int64 v102; // [rsp+1D8h] [rbp+D8h]
  char *v103; // [rsp+1E0h] [rbp+E0h]
  __int64 v104; // [rsp+1E8h] [rbp+E8h]
  char *v105; // [rsp+1F0h] [rbp+F0h]
  __int64 v106; // [rsp+1F8h] [rbp+F8h]
  WCHAR pwsz[56]; // [rsp+200h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v9 = a9;
  v12 = a8;
  v13 = *((_DWORD *)a9 + 18);
  v62 = a2;
  v60 = a4;
  v59 = a6;
  if ( v13 == 11 )
    v14 = (struct CExpressionValue *)*((_QWORD *)a9 + 8);
  else
    v14 = a9;
  memset_0(pwsz, 0, 0x62uLL);
  if ( v12 )
  {
    v17 = *(_DWORD *)v12;
    pwsz[0] = 0;
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
        MatrixSubchannelMaskInfo::WriteSubchannelString(v12, v13, v16, pwsz);
    }
    else
    {
      VectorSubchannelMaskInfo::WriteSubchannelString(v12, v15, pwsz);
    }
  }
  v19 = v13 - 17;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 17;
      if ( v21 )
      {
        v22 = v21 - 17;
        if ( v22 )
        {
          v23 = v22 - 17;
          if ( !v23 )
          {
            if ( dword_18033A240 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              goto LABEL_64;
            v65 = 8LL;
            v64 = &v60;
            TlgCreateWsz(&pDesc, off_1802716C0[a5]);
            v68 = 4LL;
            v67 = &v59;
            v69 = &a7;
            v70 = 4LL;
            TlgCreateWsz(&v71, pwsz);
            ExpressionTypeString = anonymous_namespace_::GetExpressionTypeString(69);
            TlgCreateWsz(&v72, ExpressionTypeString);
            v34 = a1 + 76;
            if ( *((_QWORD *)a1 + 22) >= 8uLL )
              v34 = *(const WCHAR **)v34;
            goto LABEL_33;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 33;
              if ( v26 )
              {
                if ( v26 != 161 )
                  ModuleFailFastForHRESULT(-2147024809, retaddr);
                if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
                {
                  v65 = 8LL;
                  v64 = &v60;
                  TlgCreateWsz(&pDesc, off_1802716C0[a5]);
                  v68 = 4LL;
                  v67 = &v59;
                  v69 = &a7;
                  v70 = 4LL;
                  TlgCreateWsz(&v71, pwsz);
                  v27 = anonymous_namespace_::GetExpressionTypeString(265);
                  TlgCreateWsz(&v72, v27);
                  v28 = a1 + 76;
                  if ( *((_QWORD *)a1 + 22) >= 8uLL )
                    v28 = *(const WCHAR **)v28;
                  TlgCreateWsz(&v73, v28);
                  CommentForObject = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
                  TlgCreateWsz(&v74, CommentForObject);
                  v75 = v14;
                  v77 = (char *)v14 + 4;
                  v79 = (char *)v14 + 8;
                  v81 = (char *)v14 + 12;
                  v83 = (char *)v14 + 16;
                  v85 = (char *)v14 + 20;
                  v87 = (char *)v14 + 24;
                  v89 = (char *)v14 + 28;
                  v91 = (char *)v14 + 32;
                  v93 = (char *)v14 + 36;
                  v95 = (char *)v14 + 40;
                  v97 = (char *)v14 + 44;
                  v99 = (char *)v14 + 48;
                  v101 = (char *)v14 + 52;
                  v103 = (char *)v14 + 56;
                  v105 = (char *)v14 + 60;
                  v76 = 4LL;
                  v78 = 4LL;
                  v80 = 4LL;
                  v82 = 4LL;
                  v84 = 4LL;
                  v86 = 4LL;
                  v88 = 4LL;
                  v90 = 4LL;
                  v92 = 4LL;
                  v94 = 4LL;
                  v96 = 4LL;
                  v98 = 4LL;
                  v100 = 4LL;
                  v102 = 4LL;
                  v104 = 4LL;
                  v106 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB3EB, 0LL, 0LL, 0x1Au, &pData);
                }
              }
              else if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              {
                v65 = 8LL;
                v64 = &v60;
                TlgCreateWsz(&pDesc, off_1802716C0[a5]);
                v68 = 4LL;
                v67 = &v59;
                v69 = &a7;
                v70 = 4LL;
                TlgCreateWsz(&v71, pwsz);
                v30 = anonymous_namespace_::GetExpressionTypeString(104);
                TlgCreateWsz(&v72, v30);
                v31 = a1 + 76;
                if ( *((_QWORD *)a1 + 22) >= 8uLL )
                  v31 = *(const WCHAR **)v31;
                TlgCreateWsz(&v73, v31);
                v32 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
                TlgCreateWsz(&v74, v32);
                v75 = v14;
                v77 = (char *)v14 + 4;
                v79 = (char *)v14 + 8;
                v81 = (char *)v14 + 12;
                v83 = (char *)v14 + 16;
                v85 = (char *)v14 + 20;
                v76 = 4LL;
                v78 = 4LL;
                v80 = 4LL;
                v82 = 4LL;
                v84 = 4LL;
                v86 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB323, 0LL, 0LL, 0x10u, &pData);
              }
              goto LABEL_64;
            }
            if ( dword_18033A240 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
              goto LABEL_64;
            v65 = 8LL;
            v64 = &v60;
            TlgCreateWsz(&pDesc, off_1802716C0[a5]);
            v68 = 4LL;
            v67 = &v59;
            v69 = &a7;
            v70 = 4LL;
            TlgCreateWsz(&v71, pwsz);
            v33 = anonymous_namespace_::GetExpressionTypeString(71);
            TlgCreateWsz(&v72, v33);
            v34 = a1 + 76;
            if ( *((_QWORD *)a1 + 22) >= 8uLL )
              v34 = *(const WCHAR **)v34;
LABEL_33:
            TlgCreateWsz(&v73, v34);
            v35 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
            TlgCreateWsz(&v74, v35);
            v75 = v14;
            v77 = (char *)v14 + 4;
            v79 = (char *)v14 + 8;
            v81 = (char *)v14 + 12;
            v76 = 4LL;
            v78 = 4LL;
            v80 = 4LL;
            v82 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB625, 0LL, 0LL, 0xEu, &pData);
            goto LABEL_64;
          }
          if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
          {
            v65 = 8LL;
            v64 = &v60;
            TlgCreateWsz(&pDesc, off_1802716C0[a5]);
            v68 = 4LL;
            v67 = &v59;
            v69 = &a7;
            v70 = 4LL;
            TlgCreateWsz(&v71, pwsz);
            v36 = anonymous_namespace_::GetExpressionTypeString(70);
            TlgCreateWsz(&v72, v36);
            v37 = a1 + 76;
            if ( *((_QWORD *)a1 + 22) >= 8uLL )
              v37 = *(const WCHAR **)v37;
            TlgCreateWsz(&v73, v37);
            v38 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
            TlgCreateWsz(&v74, v38);
            v75 = v14;
            v77 = (char *)v14 + 4;
            v79 = (char *)v14 + 8;
            v81 = (char *)v14 + 12;
            v76 = 4LL;
            v78 = 4LL;
            v80 = 4LL;
            v82 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB6DB, 0LL, 0LL, 0xEu, &pData);
          }
        }
        else if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
        {
          v65 = 8LL;
          v64 = &v60;
          TlgCreateWsz(&pDesc, off_1802716C0[a5]);
          v68 = 4LL;
          v67 = &v59;
          v69 = &a7;
          v70 = 4LL;
          TlgCreateWsz(&v71, pwsz);
          v40 = anonymous_namespace_::GetExpressionTypeString(52);
          TlgCreateWsz(&v72, v40);
          v41 = a1 + 76;
          if ( *((_QWORD *)a1 + 22) >= 8uLL )
            v41 = *(const WCHAR **)v41;
          TlgCreateWsz(&v73, v41);
          v42 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
          TlgCreateWsz(&v74, v42);
          v75 = v14;
          v77 = (char *)v14 + 4;
          v79 = (char *)v14 + 8;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB572, 0LL, 0LL, 0xDu, &pData);
        }
      }
      else if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
      {
        v65 = 8LL;
        v64 = &v60;
        TlgCreateWsz(&pDesc, off_1802716C0[a5]);
        v68 = 4LL;
        v67 = &v59;
        v69 = &a7;
        v70 = 4LL;
        TlgCreateWsz(&v71, pwsz);
        v43 = anonymous_namespace_::GetExpressionTypeString(35);
        TlgCreateWsz(&v72, v43);
        v44 = a1 + 76;
        if ( *((_QWORD *)a1 + 22) >= 8uLL )
          v44 = *(const WCHAR **)v44;
        TlgCreateWsz(&v73, v44);
        v45 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
        TlgCreateWsz(&v74, v45);
        v75 = v14;
        v77 = (char *)v14 + 4;
        v76 = 4LL;
        v78 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB8E3, 0LL, 0LL, 0xCu, &pData);
      }
    }
    else if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
    {
      v65 = 8LL;
      v64 = &v60;
      TlgCreateWsz(&pDesc, off_1802716C0[a5]);
      v68 = 4LL;
      v67 = &v59;
      v69 = &a7;
      v70 = 4LL;
      TlgCreateWsz(&v71, pwsz);
      v46 = anonymous_namespace_::GetExpressionTypeString(18);
      TlgCreateWsz(&v72, v46);
      v47 = a1 + 76;
      if ( *((_QWORD *)a1 + 22) >= 8uLL )
        v47 = *(const WCHAR **)v47;
      TlgCreateWsz(&v73, v47);
      v48 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
      TlgCreateWsz(&v74, v48);
      v75 = v14;
      v76 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB83A, 0LL, 0LL, 0xBu, &pData);
    }
  }
  else if ( dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
  {
    v65 = 8LL;
    v64 = &v60;
    TlgCreateWsz(&pDesc, off_1802716C0[a5]);
    v68 = 4LL;
    v69 = &a7;
    v67 = &v59;
    v70 = 4LL;
    TlgCreateWsz(&v71, pwsz);
    v50 = anonymous_namespace_::GetExpressionTypeString(v49);
    TlgCreateWsz(&v72, v50);
    v51 = a1 + 76;
    if ( *((_QWORD *)a1 + 22) >= 8uLL )
      v51 = *(const WCHAR **)v51;
    TlgCreateWsz(&v73, v51);
    v52 = CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, v59);
    TlgCreateWsz(&v74, v52);
    v53 = *(unsigned __int8 *)v14;
    v75 = (struct CExpressionValue *)&v61;
    v61 = v53;
    v76 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB791, 0LL, 0LL, 0xBu, &pData);
  }
LABEL_64:
  if ( a3 == 2 )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource((CAnimationLoggingManager *)a1, v62);
    v55 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        v56 = *(DiagnosticCallbacksManager **)(*((_QWORD *)a1 + 2) + 1264LL);
        if ( v12 )
        {
          if ( *(_DWORD *)v12 == 1 )
          {
            Subchannels = VectorSubchannelMaskInfo::GetSubchannels(v12);
          }
          else if ( *(_DWORD *)v12 == 2 )
          {
            Subchannels = MatrixSubchannelMaskInfo::GetSubchannels(v12);
          }
          else
          {
            Subchannels = 0;
          }
        }
        else
        {
          Subchannels = 0;
        }
        v58 = DiagnosticCallbacksManager::SendPropertyChanged(
                v56,
                *((_DWORD *)v55 + 10),
                *((_DWORD *)v55 + 11),
                v60,
                a7,
                Subchannels,
                v9);
        if ( v58 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x23C,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v58);
          __debugbreak();
        }
      }
    }
  }
}
