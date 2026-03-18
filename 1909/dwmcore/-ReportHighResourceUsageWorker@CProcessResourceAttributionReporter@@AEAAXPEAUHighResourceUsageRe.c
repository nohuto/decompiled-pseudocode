/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800EC104
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D98A0 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x180177940 (--$emplace@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionR.c)
 *     ??1?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x180177A04 (--1-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 *     ??4?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180177AAC (--4-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        CProcessResourceAttributionReporter *this,
        struct CProcessResourceAttributionReporter::HighResourceUsageReport *a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rax
  _DWORD *i; // rbx
  _QWORD **v6; // rdi
  _QWORD **v7; // rax
  __int64 v8; // rcx
  _QWORD **v9; // r8
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  _DWORD *v13; // r9
  char v14; // al
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // edx
  __int64 v18; // r9
  _QWORD **v19; // r13
  _QWORD **v20; // r14
  const GUID *v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  _DWORD *v24; // rax
  _DWORD *v25; // r8
  int v26; // edx
  char v27; // [rsp+38h] [rbp-D0h]
  int v28; // [rsp+3Ch] [rbp-CCh]
  unsigned int v29; // [rsp+40h] [rbp-C8h]
  int v30; // [rsp+44h] [rbp-C4h]
  int v31; // [rsp+48h] [rbp-C0h]
  int v32; // [rsp+4Ch] [rbp-BCh]
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  char v36[16]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  __int64 v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  _DWORD *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int64 v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  _DWORD *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  __int64 v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  _DWORD *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  _DWORD *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  _DWORD *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]

  v3 = *((_QWORD *)a2 + 2);
  v35 = *((_QWORD *)a2 + 3);
  if ( v3 != v35 )
  {
    v4 = (_QWORD *)((char *)this + 32);
    for ( i = (_DWORD *)(v3 + 96); ; i += 26 )
    {
      v6 = (_QWORD **)*v4;
      v7 = (_QWORD **)*((_QWORD *)this + 5);
      v27 = 0;
      v8 = v7 - v6;
      if ( v8 > 0 )
      {
        do
        {
          v9 = &v6[v8 >> 1];
          if ( **v9 >= *((_QWORD *)i - 11) )
          {
            v8 >>= 1;
          }
          else
          {
            v6 = v9 + 1;
            v8 += -1 - (v8 >> 1);
          }
        }
        while ( v8 > 0 );
        v7 = (_QWORD **)*((_QWORD *)this + 5);
      }
      v10 = *i;
      v30 = *(i - 1);
      v11 = *(i - 3);
      v12 = (unsigned int)*(i - 4);
      v31 = *(i - 5);
      v32 = *(i - 2);
      v28 = v11;
      LODWORD(v34) = *i;
      v29 = v12;
      if ( v6 != v7 )
      {
        v13 = *v6;
        if ( **v6 == *((_QWORD *)i - 11) )
          break;
      }
      v18 = 0LL;
      if ( !i[1] )
      {
        if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
        {
          v33 = 0x1000000LL;
          v38 = &v33;
          v46 = i - 22;
          v39 = 8LL;
          v40 = v3;
          v41 = 4LL;
          v42 = v3;
          v43 = 4LL;
          v44 = v3;
          v45 = 4LL;
          v47 = 8LL;
          v48 = v22;
          v49 = 4LL;
          v50 = i;
          v51 = 4LL;
          v52 = v23;
          v53 = 4LL;
          v54 = i - 1;
          v55 = 4LL;
          v56 = i - 5;
          v57 = 4LL;
          v58 = i - 2;
          v59 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D73CA, 0LL, v21, 0xDu, &pData);
        }
        v24 = operator new(0x20uLL);
        v25 = v24;
        if ( v24 )
        {
          *(_QWORD *)v24 = 0LL;
          v24[2] = 5000;
          v24[3] = 1000;
          v24[7] = 1000;
          v24[4] = 10000;
          v24[5] = 200;
          v24[6] = 500;
        }
        else
        {
          v25 = 0LL;
        }
        *(_QWORD *)v25 = *((_QWORD *)i - 11);
        v33 = (__int64)v25;
        v26 = (unsigned __int64)(274877907LL * (int)v34) >> 32;
        v25[2] = 5000
               * (((int)((unsigned __int64)(1759218605LL * v28) >> 32) >> 11)
                + 1
                + ((unsigned int)((unsigned __int64)(1759218605LL * v28) >> 32) >> 31));
        v25[3] = 1000 * ((v26 >> 6) + 1 + ((unsigned int)v26 >> 31));
        v25[4] = 10000
               * (((int)((unsigned __int64)(1759218605LL * (int)v29) >> 32) >> 12)
                + 1
                + ((unsigned int)((unsigned __int64)(1759218605LL * (int)v29) >> 32) >> 31));
        v25[5] = 200
               * (((int)((unsigned __int64)(1374389535LL * v30) >> 32) >> 6)
                + 1
                + ((unsigned int)((unsigned __int64)(1374389535LL * v30) >> 32) >> 31));
        v25[6] = 500
               * (((int)((unsigned __int64)(274877907LL * v31) >> 32) >> 5)
                + 1
                + ((unsigned int)((unsigned __int64)(274877907LL * v31) >> 32) >> 31));
        v25[7] = 1000
               * (((int)((unsigned __int64)(274877907LL * v32) >> 32) >> 6)
                + 1
                + ((unsigned int)((unsigned __int64)(274877907LL * v32) >> 32) >> 31));
        std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
          (char *)this + 32,
          v36,
          v6,
          &v33);
        std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(&v33);
LABEL_22:
        v14 = v27;
LABEL_23:
        v18 = 0LL;
        goto LABEL_24;
      }
      v14 = 0;
LABEL_24:
      if ( i[1] && v14 )
      {
        v19 = (_QWORD **)*((_QWORD *)this + 5);
        v20 = v6 + 1;
        if ( v6 + 1 != v19 )
        {
          do
          {
            std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=(
              v20 - 1,
              v20,
              v12,
              v18);
            ++v20;
          }
          while ( v20 != v19 );
          v19 = (_QWORD **)*((_QWORD *)this + 5);
        }
        std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(v19 - 1);
        *((_QWORD *)this + 5) -= 8LL;
      }
      v3 += 104LL;
      v4 = (_QWORD *)((char *)this + 32);
      if ( v3 == v35 )
        return;
    }
    v14 = 1;
    v27 = 1;
    if ( v11 > v13[2] || v10 > v13[3] || (int)v12 > v13[4] || v30 > v13[5] || v31 > v13[6] || v32 > v13[7] )
    {
      if ( dword_1803371D0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
        {
          v33 = 0x1000000LL;
          v38 = &v33;
          v46 = i - 22;
          v39 = 8LL;
          v40 = v3;
          v41 = 4LL;
          v42 = v3;
          v43 = 4LL;
          v44 = v3;
          v45 = 4LL;
          v47 = 8LL;
          v48 = v15;
          v49 = 4LL;
          v50 = i;
          v51 = 4LL;
          v52 = v16;
          v53 = 4LL;
          v54 = i - 1;
          v55 = 4LL;
          v56 = i - 5;
          v57 = 4LL;
          v58 = i - 2;
          v59 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D73CA, 0LL, 0LL, 0xDu, &pData);
          v13 = *v6;
        }
        v12 = v29;
        v11 = v28;
      }
      v17 = (unsigned __int64)(274877907LL * (int)v34) >> 32;
      v13[2] = 5000
             * (((int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 11)
              + 1
              + ((unsigned int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 31));
      *((_DWORD *)*v6 + 3) = 1000 * ((v17 >> 6) + 1 + ((unsigned int)v17 >> 31));
      *((_DWORD *)*v6 + 4) = 10000
                           * (((int)((unsigned __int64)(1759218605LL * (int)v12) >> 32) >> 12)
                            + 1
                            + ((unsigned int)((unsigned __int64)(1759218605LL * (int)v12) >> 32) >> 31));
      *((_DWORD *)*v6 + 5) = 200
                           * (((int)((unsigned __int64)(1374389535LL * v30) >> 32) >> 6)
                            + 1
                            + ((unsigned int)((unsigned __int64)(1374389535LL * v30) >> 32) >> 31));
      *((_DWORD *)*v6 + 6) = 500
                           * (((int)((unsigned __int64)(274877907LL * v31) >> 32) >> 5)
                            + 1
                            + ((unsigned int)((unsigned __int64)(274877907LL * v31) >> 32) >> 31));
      *((_DWORD *)*v6 + 7) = 1000
                           * (((int)((unsigned __int64)(274877907LL * v32) >> 32) >> 6)
                            + ((unsigned int)((unsigned __int64)(274877907LL * v32) >> 32) >> 31)
                            + 1);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
}
