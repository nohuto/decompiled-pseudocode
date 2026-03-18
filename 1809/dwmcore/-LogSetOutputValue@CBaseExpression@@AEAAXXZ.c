/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18018C420
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BD68 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800669E4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBaseExpression::LogSetOutputValue(CBaseExpression *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // r10
  __int64 v10; // r10
  const char *v11; // r11
  __int64 v12; // r10
  const char *v13; // r11
  unsigned __int8 *v14; // r11
  __int64 v15; // r10
  __int64 v16; // r10
  const char *v17; // r11
  __int64 v18; // r10
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  const char *v23; // r11
  __int64 v24; // r10
  const char *v25; // r11
  __int64 v26; // r10
  const char *v27; // r11
  __int64 v28; // r10
  const char *v29; // r11
  __int64 v30; // r10
  const char *v31; // r11
  __int64 v32; // r10
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  _QWORD *v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  __int64 *v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  const char *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  const char *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  const char *v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  const char *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  const char *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  const char *v57; // [rsp+118h] [rbp+10h]
  __int64 v58; // [rsp+120h] [rbp+18h]
  const char *v59; // [rsp+128h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+28h]
  const char *v61; // [rsp+138h] [rbp+30h]
  __int64 v62; // [rsp+140h] [rbp+38h]
  const char *v63; // [rsp+148h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+48h]
  const char *v65; // [rsp+158h] [rbp+50h]
  __int64 v66; // [rsp+160h] [rbp+58h]
  const char *v67; // [rsp+168h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+68h]
  const char *v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  const char *v71; // [rsp+188h] [rbp+80h]
  __int64 v72; // [rsp+190h] [rbp+88h]
  const char *v73; // [rsp+198h] [rbp+90h]
  __int64 v74; // [rsp+1A0h] [rbp+98h]
  const char *v75; // [rsp+1A8h] [rbp+A0h]
  __int64 v76; // [rsp+1B0h] [rbp+A8h]
  const char *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v1 = *((_QWORD *)this + 24);
  v37[0] = 0LL;
  if ( v1 )
  {
    if ( *(_DWORD *)v1 == 1 )
    {
      v3 = *(unsigned __int8 *)(v1 + 8);
    }
    else
    {
      if ( *(_DWORD *)v1 != 2 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v3 = *(_QWORD *)(v1 + 8);
    }
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *((_DWORD *)this + 34);
  v37[0] = v3;
  if ( v4 > 52 )
  {
    v19 = v4 - 69;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 33;
          if ( v22 )
          {
            if ( v22 != 161 )
              goto LABEL_38;
            if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
            {
              LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
              v39 = &v34;
              v41 = &v33;
              v43 = v37;
              v36 = *((_QWORD *)this + 20);
              v45 = &v36;
              v49 = v23 + 4;
              v51 = v23 + 8;
              v53 = v23 + 12;
              v55 = v23 + 16;
              v57 = v23 + 20;
              v59 = v23 + 24;
              v61 = v23 + 28;
              v63 = v23 + 32;
              v65 = v23 + 36;
              v67 = v23 + 40;
              v69 = v23 + 44;
              v71 = v23 + 48;
              v73 = v23 + 52;
              v75 = v23 + 56;
              v77 = v23 + 60;
              v40 = v24;
              LODWORD(v33) = 265;
              v42 = v24;
              v44 = 8LL;
              v46 = 8LL;
              v47 = v23;
              v48 = v24;
              v50 = v24;
              v52 = v24;
              v54 = v24;
              v56 = v24;
              v58 = v24;
              v60 = v24;
              v62 = v24;
              v64 = v24;
              v66 = v24;
              v68 = v24;
              v70 = v24;
              v72 = v24;
              v74 = v24;
              v76 = v24;
              v78 = v24;
              TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B4469, 0LL, 0LL, 0x16u, &pData);
            }
          }
          else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
          {
            LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
            v39 = &v34;
            v41 = &v33;
            v43 = v37;
            v36 = *((_QWORD *)this + 20);
            v45 = &v36;
            v49 = v25 + 4;
            v51 = v25 + 8;
            v53 = v25 + 12;
            v55 = v25 + 16;
            v57 = v25 + 20;
            v40 = v26;
            LODWORD(v33) = 104;
            v42 = v26;
            v44 = 8LL;
            v46 = 8LL;
            v47 = v25;
            v48 = v26;
            v50 = v26;
            v52 = v26;
            v54 = v26;
            v56 = v26;
            v58 = v26;
            TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B45BA, 0LL, 0LL, 0xCu, &pData);
          }
        }
        else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
        {
          LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
          v39 = &v34;
          v41 = &v33;
          v43 = v37;
          v36 = *((_QWORD *)this + 20);
          v45 = &v36;
          v49 = v27 + 4;
          v51 = v27 + 8;
          v53 = v27 + 12;
          v40 = v28;
          LODWORD(v33) = 71;
          v42 = v28;
          v44 = 8LL;
          v46 = 8LL;
          v47 = v27;
          v48 = v28;
          v50 = v28;
          v52 = v28;
          v54 = v28;
          TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B455C, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
      {
        LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
        v39 = &v34;
        v41 = &v33;
        v43 = v37;
        v36 = *((_QWORD *)this + 20);
        v45 = &v36;
        v49 = v29 + 4;
        v51 = v29 + 8;
        v53 = v29 + 12;
        v40 = v30;
        LODWORD(v33) = 70;
        v42 = v30;
        v44 = 8LL;
        v46 = 8LL;
        v47 = v29;
        v48 = v30;
        v50 = v30;
        v52 = v30;
        v54 = v30;
        TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B462A, 0LL, 0LL, 0xAu, &pData);
      }
    }
    else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
    {
      LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
      v39 = &v34;
      v41 = &v33;
      v43 = v37;
      v36 = *((_QWORD *)this + 20);
      v45 = &v36;
      v49 = v31 + 4;
      v51 = v31 + 8;
      v53 = v31 + 12;
      v40 = v32;
      LODWORD(v33) = 69;
      v42 = v32;
      v44 = 8LL;
      v46 = 8LL;
      v47 = v31;
      v48 = v32;
      v50 = v32;
      v52 = v32;
      v54 = v32;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B455C, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else if ( v4 == 52 )
  {
    if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
    {
      LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
      v39 = &v34;
      v41 = &v33;
      v43 = v37;
      v36 = *((_QWORD *)this + 20);
      v45 = &v36;
      v49 = v17 + 4;
      v51 = v17 + 8;
      v40 = v18;
      LODWORD(v33) = 52;
      v42 = v18;
      v44 = 8LL;
      v46 = 8LL;
      v47 = v17;
      v48 = v18;
      v50 = v18;
      v52 = v18;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B46E0, 0LL, 0LL, 9u, &pData);
    }
  }
  else
  {
    v5 = v4 - 11;
    if ( v5 )
    {
      v6 = v5 - 6;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 17;
          if ( v8 )
          {
            if ( v8 == 7 )
            {
              if ( dword_180305E40 > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
                {
                  LODWORD(v35) = CBaseExpression::GetTracingCookie(this);
                  v39 = &v35;
                  v41 = &v33;
                  v43 = v37;
                  v34 = *((_QWORD *)this + 20);
                  v45 = &v34;
                  v40 = v9;
                  LODWORD(v33) = 42;
                  v42 = v9;
                  v44 = 8LL;
                  v46 = 8LL;
                  v47 = (char *)this + 64;
                  v48 = v9;
                  TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B450B, 0LL, 0LL, 7u, &pData);
                }
              }
              return;
            }
LABEL_38:
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          }
          if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
          {
            LODWORD(v33) = CBaseExpression::GetTracingCookie(this);
            v40 = v10;
            v39 = &v33;
            v41 = &v35;
            v43 = v37;
            v34 = *((_QWORD *)this + 20);
            v45 = &v34;
            v49 = v11 + 4;
            LODWORD(v35) = 35;
            v42 = v10;
            v44 = (unsigned int)(v10 + 4);
            v46 = v44;
            v47 = v11;
            v48 = v10;
            v50 = v10;
            TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B4688, 0LL, 0LL, v10 + 4, &pData);
          }
        }
        else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
        {
          LODWORD(v33) = CBaseExpression::GetTracingCookie(this);
          v39 = &v33;
          v41 = &v35;
          v43 = v37;
          v34 = *((_QWORD *)this + 20);
          v45 = &v34;
          v40 = v12;
          LODWORD(v35) = 18;
          v42 = v12;
          v44 = 8LL;
          v46 = 8LL;
          v47 = v13;
          v48 = v12;
          TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B450B, 0LL, 0LL, 7u, &pData);
        }
      }
      else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
      {
        LODWORD(v33) = CBaseExpression::GetTracingCookie(this);
        v39 = &v33;
        v41 = &v35;
        v43 = v37;
        v36 = *((_QWORD *)this + 20);
        v45 = &v36;
        LODWORD(v34) = *v14;
        v47 = (const char *)&v34;
        v40 = v15;
        LODWORD(v35) = 17;
        v42 = v15;
        v44 = 8LL;
        v46 = 8LL;
        v48 = v15;
        TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B473B, 0LL, 0LL, 7u, &pData);
      }
    }
    else if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
    {
      LODWORD(v34) = CBaseExpression::GetTracingCookie(this);
      v39 = &v34;
      v41 = &v33;
      v43 = v37;
      v36 = *((_QWORD *)this + 20);
      v45 = &v36;
      v47 = "PathValue";
      v40 = v16;
      LODWORD(v33) = 11;
      v42 = v16;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 10LL;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B4418, 0LL, 0LL, 7u, &pData);
    }
  }
}
