/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x1801D56F8
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180084014 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C7190 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, __int64 a2, int a3, struct CExpressionValue *a4)
{
  int v4; // edx
  struct CExpressionValue *v5; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // r11
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r11
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  __int64 v27; // r11
  __int64 v28; // r11
  __int64 v29; // r11
  __int64 v30; // r11
  __int64 v31; // r11
  __int64 v32; // r11
  __int64 v33; // r11
  __int64 v34; // r11
  __int64 v35; // r11
  __int64 v36; // r11
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  int *v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  __int64 *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+C8h] [rbp-40h] BYREF
  char *v52; // [rsp+D8h] [rbp-30h]
  __int64 v53; // [rsp+E0h] [rbp-28h]
  char *v54; // [rsp+E8h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-18h]
  char *v56; // [rsp+F8h] [rbp-10h]
  __int64 v57; // [rsp+100h] [rbp-8h]
  char *v58; // [rsp+108h] [rbp+0h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  char *v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  char *v62; // [rsp+128h] [rbp+20h]
  __int64 v63; // [rsp+130h] [rbp+28h]
  char *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  char *v66; // [rsp+148h] [rbp+40h]
  __int64 v67; // [rsp+150h] [rbp+48h]
  char *v68; // [rsp+158h] [rbp+50h]
  __int64 v69; // [rsp+160h] [rbp+58h]
  char *v70; // [rsp+168h] [rbp+60h]
  __int64 v71; // [rsp+170h] [rbp+68h]
  char *v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  char *v74; // [rsp+188h] [rbp+80h]
  __int64 v75; // [rsp+190h] [rbp+88h]
  char *v76; // [rsp+198h] [rbp+90h]
  __int64 v77; // [rsp+1A0h] [rbp+98h]
  char *v78; // [rsp+1A8h] [rbp+A0h]
  __int64 v79; // [rsp+1B0h] [rbp+A8h]
  char *v80; // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]
  const void *retaddr; // [rsp+1E0h] [rbp+D8h]
  int v83; // [rsp+1F8h] [rbp+F0h] BYREF

  v83 = a3;
  v4 = *((_DWORD *)a4 + 18);
  v5 = a4;
  if ( v4 == 11 )
    v5 = (struct CExpressionValue *)*((_QWORD *)a4 + 8);
  if ( v4 > 52 )
  {
    v23 = v4 - 69;
    if ( v23 )
    {
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
              goto LABEL_33;
            if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
            {
              LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
              v43 = v27;
              v42 = &v38;
              v45 = v27;
              v44 = &v83;
              TlgCreateSz(&pDesc, "Read");
              LODWORD(v37) = 265;
              v47 = &v37;
              v40 = *((_QWORD *)this + 20);
              v49 = &v40;
              v52 = (char *)v5 + 4;
              v54 = (char *)v5 + 8;
              v56 = (char *)v5 + 12;
              v58 = (char *)v5 + 16;
              v60 = (char *)v5 + 20;
              v62 = (char *)v5 + 24;
              v64 = (char *)v5 + 28;
              v66 = (char *)v5 + 32;
              v68 = (char *)v5 + 36;
              v70 = (char *)v5 + 40;
              v72 = (char *)v5 + 44;
              v74 = (char *)v5 + 48;
              v76 = (char *)v5 + 52;
              v78 = (char *)v5 + 56;
              v80 = (char *)v5 + 60;
              v48 = v28;
              v50 = 8LL;
              v51.Ptr = (ULONGLONG)v5;
              *(_QWORD *)&v51.Size = v28;
              v53 = v28;
              v55 = v28;
              v57 = v28;
              v59 = v28;
              v61 = v28;
              v63 = v28;
              v65 = v28;
              v67 = v28;
              v69 = v28;
              v71 = v28;
              v73 = v28;
              v75 = v28;
              v77 = v28;
              v79 = v28;
              v81 = v28;
              TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DBF08, 0LL, 0LL, 0x17u, &pData);
            }
          }
          else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
          {
            LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
            v43 = v29;
            v42 = &v38;
            v45 = v29;
            v44 = &v83;
            TlgCreateSz(&pDesc, "Read");
            LODWORD(v37) = 104;
            v47 = &v37;
            v40 = *((_QWORD *)this + 20);
            v49 = &v40;
            v52 = (char *)v5 + 4;
            v54 = (char *)v5 + 8;
            v56 = (char *)v5 + 12;
            v58 = (char *)v5 + 16;
            v60 = (char *)v5 + 20;
            v48 = v30;
            v50 = 8LL;
            v51.Ptr = (ULONGLONG)v5;
            *(_QWORD *)&v51.Size = v30;
            v53 = v30;
            v55 = v30;
            v57 = v30;
            v59 = v30;
            v61 = v30;
            TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DBE88, 0LL, 0LL, 0xDu, &pData);
          }
        }
        else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
        {
          LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
          v43 = v31;
          v42 = &v38;
          v45 = v31;
          v44 = &v83;
          TlgCreateSz(&pDesc, "Read");
          LODWORD(v37) = 71;
          v47 = &v37;
          v40 = *((_QWORD *)this + 20);
          v49 = &v40;
          v52 = (char *)v5 + 4;
          v54 = (char *)v5 + 8;
          v56 = (char *)v5 + 12;
          v48 = v32;
          v50 = 8LL;
          v51.Ptr = (ULONGLONG)v5;
          *(_QWORD *)&v51.Size = v32;
          v53 = v32;
          v55 = v32;
          v57 = v32;
          TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC0E7, 0LL, 0LL, 0xBu, &pData);
        }
      }
      else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
      {
        LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
        v43 = v33;
        v42 = &v38;
        v45 = v33;
        v44 = &v83;
        TlgCreateSz(&pDesc, "Read");
        LODWORD(v37) = 70;
        v47 = &v37;
        v40 = *((_QWORD *)this + 20);
        v49 = &v40;
        v52 = (char *)v5 + 4;
        v54 = (char *)v5 + 8;
        v56 = (char *)v5 + 12;
        v48 = v34;
        v50 = 8LL;
        v51.Ptr = (ULONGLONG)v5;
        *(_QWORD *)&v51.Size = v34;
        v53 = v34;
        v55 = v34;
        v57 = v34;
        TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC155, 0LL, 0LL, 0xBu, &pData);
      }
    }
    else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
    {
      LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
      v43 = v35;
      v42 = &v38;
      v45 = v35;
      v44 = &v83;
      TlgCreateSz(&pDesc, "Read");
      LODWORD(v37) = 69;
      v47 = &v37;
      v40 = *((_QWORD *)this + 20);
      v49 = &v40;
      v52 = (char *)v5 + 4;
      v54 = (char *)v5 + 8;
      v56 = (char *)v5 + 12;
      v48 = v36;
      v50 = 8LL;
      v51.Ptr = (ULONGLONG)v5;
      *(_QWORD *)&v51.Size = v36;
      v53 = v36;
      v55 = v36;
      v57 = v36;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC0E7, 0LL, 0LL, 0xBu, &pData);
    }
  }
  else if ( v4 == 52 )
  {
    if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
    {
      LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
      v43 = v21;
      v42 = &v38;
      v45 = v21;
      v44 = &v83;
      TlgCreateSz(&pDesc, "Read");
      LODWORD(v37) = 52;
      v47 = &v37;
      v40 = *((_QWORD *)this + 20);
      v49 = &v40;
      v52 = (char *)v5 + 4;
      v54 = (char *)v5 + 8;
      v48 = v22;
      v50 = 8LL;
      v51.Ptr = (ULONGLONG)v5;
      *(_QWORD *)&v51.Size = v22;
      v53 = v22;
      v55 = v22;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC07C, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else
  {
    v7 = v4 - 11;
    if ( v7 )
    {
      v8 = v7 - 6;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 17;
          if ( v10 )
          {
            if ( v10 == 7 )
            {
              if ( dword_18033A240 > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
                {
                  LODWORD(v39) = CBaseExpression::GetTracingCookie(this);
                  v43 = v11;
                  v42 = &v39;
                  v45 = v11;
                  v44 = &v83;
                  TlgCreateSz(&pDesc, "Read");
                  LODWORD(v37) = 42;
                  v47 = &v37;
                  v38 = *((_QWORD *)this + 20);
                  v49 = &v38;
                  v48 = v12;
                  v50 = 8LL;
                  v51.Ptr = (ULONGLONG)v5;
                  *(_QWORD *)&v51.Size = v12;
                  TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DBFBA, 0LL, 0LL, 8u, &pData);
                }
              }
              return;
            }
LABEL_33:
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          }
          if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
          {
            LODWORD(v37) = CBaseExpression::GetTracingCookie(this);
            v43 = v13;
            v42 = &v37;
            v45 = v13;
            v44 = &v83;
            TlgCreateSz(&pDesc, "Read");
            LODWORD(v39) = 35;
            v47 = &v39;
            v38 = *((_QWORD *)this + 20);
            v49 = &v38;
            v52 = (char *)v5 + 4;
            v48 = v14;
            v50 = 8LL;
            v51.Ptr = (ULONGLONG)v5;
            *(_QWORD *)&v51.Size = v14;
            v53 = v14;
            TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC1C3, 0LL, 0LL, 9u, &pData);
          }
        }
        else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
        {
          LODWORD(v37) = CBaseExpression::GetTracingCookie(this);
          v43 = v15;
          v42 = &v37;
          v45 = v15;
          v44 = &v83;
          TlgCreateSz(&pDesc, "Read");
          LODWORD(v39) = 18;
          v47 = &v39;
          v38 = *((_QWORD *)this + 20);
          v49 = &v38;
          v48 = v16;
          v50 = 8LL;
          v51.Ptr = (ULONGLONG)v5;
          *(_QWORD *)&v51.Size = v16;
          TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DBFBA, 0LL, 0LL, 8u, &pData);
        }
      }
      else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
      {
        LODWORD(v37) = CBaseExpression::GetTracingCookie(this);
        v43 = v17;
        v42 = &v37;
        v45 = v17;
        v44 = &v83;
        TlgCreateSz(&pDesc, "Read");
        LODWORD(v39) = 17;
        v47 = &v39;
        v40 = *((_QWORD *)this + 20);
        v49 = &v40;
        LODWORD(v38) = *(unsigned __int8 *)v5;
        v51.Ptr = (ULONGLONG)&v38;
        v48 = v18;
        v50 = 8LL;
        *(_QWORD *)&v51.Size = v18;
        TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC286, 0LL, 0LL, 8u, &pData);
      }
    }
    else if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
    {
      LODWORD(v38) = CBaseExpression::GetTracingCookie(this);
      v43 = v19;
      v42 = &v38;
      v45 = v19;
      v44 = &v83;
      TlgCreateSz(&pDesc, "Read");
      LODWORD(v37) = 11;
      v47 = &v37;
      v40 = *((_QWORD *)this + 20);
      v49 = &v40;
      v48 = v20;
      v50 = 8LL;
      TlgCreateWsz(&v51, L"PathData isn't logged");
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC01B, 0LL, 0LL, 8u, &pData);
    }
  }
}
