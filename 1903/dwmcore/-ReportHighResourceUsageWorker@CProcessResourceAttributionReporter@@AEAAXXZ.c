/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800D1870
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D1860 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800C90F8 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x1801790B0 (--$emplace@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionR.c)
 *     ??4?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180179224 (--4-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rbx
  struct _SLIST_ENTRY *Next; // r15
  union _SLIST_HEADER *v4; // rax
  struct _SLIST_ENTRY *v5; // rdi
  char *Alignment; // r14
  char *Region; // rax
  __int64 v8; // rsi
  int v9; // edx
  int Next_high; // ecx
  int v11; // r8d
  struct _SLIST_ENTRY *v12; // rbx
  char v13; // al
  struct _SLIST_ENTRY *v14; // rcx
  unsigned __int64 v15; // rdx
  _DWORD *v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // edx
  _DWORD *v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  _DWORD *v23; // rax
  _DWORD *v24; // r8
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  char *v34; // r12
  char *v35; // rsi
  ULONGLONG v36; // rax
  void *v37; // rcx
  char v38; // [rsp+38h] [rbp-D0h]
  void *v39; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+48h] [rbp-C0h]
  int v41; // [rsp+4Ch] [rbp-BCh]
  int v42; // [rsp+50h] [rbp-B8h]
  int v43; // [rsp+54h] [rbp-B4h]
  int v44; // [rsp+58h] [rbp-B0h]
  int v45; // [rsp+5Ch] [rbp-ACh]
  struct _SLIST_ENTRY *v46; // [rsp+60h] [rbp-A8h]
  struct _SLIST_ENTRY *v47; // [rsp+68h] [rbp-A0h]
  char v48[8]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  void **v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  struct _SLIST_ENTRY *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  struct _SLIST_ENTRY *v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  struct _SLIST_ENTRY *v56; // [rsp+C8h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp-38h]
  _DWORD *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  __int64 v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  struct _SLIST_ENTRY *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  __int64 v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  _DWORD *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  _DWORD *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  _DWORD *v70; // [rsp+138h] [rbp+30h]
  __int64 v71; // [rsp+140h] [rbp+38h]

  v2 = InterlockedFlushSList(this + 1);
  v47 = v2;
  Next = v2[1].Next;
  v46 = (struct _SLIST_ENTRY *)*((_QWORD *)&v2[1].Next + 1);
  if ( Next != v46 )
  {
    v4 = this + 2;
    v5 = Next + 6;
    while ( 1 )
    {
      Alignment = (char *)v4->Alignment;
      Region = (char *)this[2].Region;
      v38 = 0;
      v8 = (Region - Alignment) >> 3;
      if ( v8 > 0 )
      {
        do
        {
          v15 = *((_QWORD *)&v5[-6].Next + 1);
          v39 = &Alignment[8 * (v8 >> 1)];
          if ( CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                 (unsigned __int64 **)v39,
                 v15) )
          {
            Alignment = (char *)v39 + 8;
            v8 += -1 - (v8 >> 1);
          }
          else
          {
            v8 >>= 1;
          }
        }
        while ( v8 > 0 );
        Region = (char *)this[2].Region;
      }
      v9 = (int)v5->Next;
      v42 = *((_DWORD *)&v5[-1].Next + 3);
      Next_high = HIDWORD(v5[-1].Next);
      v11 = (int)v5[-1].Next;
      v43 = *((_DWORD *)&v5[-2].Next + 3);
      v44 = *((_DWORD *)&v5[-1].Next + 2);
      v12 = v46;
      v40 = Next_high;
      v45 = v9;
      v41 = v11;
      if ( Alignment == Region || (v16 = *(_DWORD **)Alignment, **(_QWORD **)Alignment != *((_QWORD *)&v5[-6].Next + 1)) )
      {
        if ( !HIDWORD(v5->Next) )
        {
          if ( dword_18033A1D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
          {
            v39 = (void *)0x1000000;
            v50 = &v39;
            v58 = &v5[-6].Next + 1;
            v51 = 8LL;
            v52 = Next;
            v53 = 4LL;
            v54 = Next;
            v55 = 4LL;
            v56 = Next;
            v57 = 4LL;
            v59 = 8LL;
            v60 = v21;
            v61 = 4LL;
            v62 = v5;
            v63 = 4LL;
            v64 = v22;
            v65 = 4LL;
            v66 = (_DWORD *)&v5[-1].Next + 3;
            v67 = 4LL;
            v68 = (_DWORD *)&v5[-2].Next + 3;
            v69 = 4LL;
            v70 = v20;
            v71 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D926A, 0LL, 0LL, 0xDu, &pData);
          }
          v23 = operator new(0x20uLL);
          v24 = v23;
          if ( v23 )
          {
            *(_QWORD *)v23 = 0LL;
            v23[2] = 5000;
            v23[3] = 1000;
            v23[7] = 1000;
            v23[4] = 10000;
            v23[5] = 200;
            v23[6] = 500;
          }
          else
          {
            v24 = 0LL;
          }
          *(_QWORD *)v24 = *((_QWORD *)&v5[-6].Next + 1);
          v39 = v24;
          v25 = (unsigned __int64)(274877907LL * v45) >> 32;
          v24[2] = 5000
                 * (((int)((unsigned __int64)(1759218605LL * v40) >> 32) >> 11)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1759218605LL * v40) >> 32) >> 31));
          v26 = 1000 * ((v25 >> 6) + 1 + ((unsigned int)v25 >> 31));
          v27 = (unsigned __int64)(1759218605LL * v41) >> 32;
          v24[3] = v26;
          v28 = 10000 * ((v27 >> 12) + 1 + ((unsigned int)v27 >> 31));
          v29 = (unsigned __int64)(1374389535LL * v42) >> 32;
          v24[4] = v28;
          v30 = 200 * ((v29 >> 6) + 1 + ((unsigned int)v29 >> 31));
          v31 = (unsigned __int64)(274877907LL * v43) >> 32;
          v24[5] = v30;
          v32 = 500 * ((v31 >> 5) + 1 + ((unsigned int)v31 >> 31));
          v33 = (unsigned __int64)(274877907LL * v44) >> 32;
          v24[6] = v32;
          v24[7] = 1000 * ((v33 >> 6) + 1 + ((unsigned int)v33 >> 31));
          std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
            &this[2],
            v48,
            Alignment,
            &v39);
          if ( v39 )
            operator delete(v39);
        }
      }
      else
      {
        v13 = 1;
        v38 = 1;
        if ( Next_high <= v16[2] && v9 <= v16[3] && v11 <= v16[4] && v42 <= v16[5] && v43 <= v16[6] && v44 <= v16[7] )
          goto LABEL_7;
        if ( dword_18033A1D0 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
          {
            v39 = (void *)0x1000000;
            v50 = &v39;
            v58 = &v5[-6].Next + 1;
            v70 = &v5[-1].Next + 1;
            v51 = 8LL;
            v52 = Next;
            v53 = 4LL;
            v54 = Next;
            v55 = 4LL;
            v56 = Next;
            v57 = 4LL;
            v59 = 8LL;
            v60 = v17;
            v61 = 4LL;
            v62 = v5;
            v63 = 4LL;
            v64 = v18;
            v65 = 4LL;
            v66 = (_DWORD *)&v5[-1].Next + 3;
            v67 = 4LL;
            v68 = (_DWORD *)&v5[-2].Next + 3;
            v69 = 4LL;
            v71 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D926A, 0LL, 0LL, 0xDu, &pData);
            v16 = *(_DWORD **)Alignment;
          }
          v11 = v41;
          Next_high = v40;
        }
        v19 = (unsigned __int64)(274877907LL * v45) >> 32;
        v16[2] = 5000
               * (((int)((unsigned __int64)(1759218605LL * Next_high) >> 32) >> 11)
                + 1
                + ((unsigned int)((unsigned __int64)(1759218605LL * Next_high) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)Alignment + 12LL) = 1000 * ((v19 >> 6) + 1 + ((unsigned int)v19 >> 31));
        *(_DWORD *)(*(_QWORD *)Alignment + 16LL) = 10000
                                                 * (((int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 12)
                                                  + 1
                                                  + ((unsigned int)((unsigned __int64)(1759218605LL * v11) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)Alignment + 20LL) = 200
                                                 * (((int)((unsigned __int64)(1374389535LL * v42) >> 32) >> 6)
                                                  + 1
                                                  + ((unsigned int)((unsigned __int64)(1374389535LL * v42) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)Alignment + 24LL) = 500
                                                 * (((int)((unsigned __int64)(274877907LL * v43) >> 32) >> 5)
                                                  + 1
                                                  + ((unsigned int)((unsigned __int64)(274877907LL * v43) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)Alignment + 28LL) = 1000
                                                 * (((int)((unsigned __int64)(274877907LL * v44) >> 32) >> 6)
                                                  + ((unsigned int)((unsigned __int64)(274877907LL * v44) >> 32) >> 31)
                                                  + 1);
      }
      v13 = v38;
LABEL_7:
      if ( HIDWORD(v5->Next) && v13 )
      {
        v34 = (char *)this[2].Region;
        v35 = Alignment + 8;
        v36 = (ULONGLONG)v34;
        if ( Alignment + 8 != v34 )
        {
          do
          {
            std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=(
              v35 - 8,
              v35);
            v35 += 8;
          }
          while ( v35 != v34 );
          v34 = (char *)this[2].Region;
          v36 = (ULONGLONG)v34;
        }
        v37 = (void *)*((_QWORD *)v34 - 1);
        if ( v37 )
        {
          operator delete(v37);
          v36 = this[2].Region;
        }
        this[2].Region = v36 - 8;
      }
      Next = (struct _SLIST_ENTRY *)((char *)Next + 104);
      v4 = this + 2;
      v5 = (struct _SLIST_ENTRY *)((char *)v5 + 104);
      if ( Next == v12 )
      {
        v2 = v47;
        break;
      }
    }
  }
  if ( v2 )
  {
    v14 = v2[1].Next;
    if ( v14 )
    {
      std::_Deallocate<16,0>(v14, 104 * (((char *)v2[2].Next - (char *)v14) / 104));
      v2[1].Next = 0LL;
      *((_QWORD *)&v2[1].Next + 1) = 0LL;
      v2[2].Next = 0LL;
    }
    operator delete(v2);
  }
}
