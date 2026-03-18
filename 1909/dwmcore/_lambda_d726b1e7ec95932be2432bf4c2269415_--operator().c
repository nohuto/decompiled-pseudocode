/*
 * XREFs of _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x1800EBEBC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EC770 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsi_ea_1800EC770.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x1800EBCEC (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800EBE90 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800EC09C (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

char __fastcall lambda_d726b1e7ec95932be2432bf4c2269415_::operator()(
        CProcessResourceAttributionReporter::HighResourceUsageReport ***a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        _DWORD *a7)
{
  int v8; // esi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  CProcessResourceAttributionReporter::HighResourceUsageReport **v13; // rax
  CProcessResourceAttributionReporter::HighResourceUsageReport *v14; // rcx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v15; // rax
  unsigned int v16; // edx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v17; // rbx
  CProcessResourceAttributionReporter::HighResourceUsageReport **v18; // rax
  CProcessResourceAttributionReporter::HighResourceUsageReport *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  CProcessResourceAttributionReporter::HighResourceUsageReport *v28; // [rsp+28h] [rbp-81h] BYREF
  int v29; // [rsp+30h] [rbp-79h]
  __int64 v30; // [rsp+38h] [rbp-71h]
  _OWORD v31[4]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v32; // [rsp+88h] [rbp-21h]
  __int128 v33; // [rsp+98h] [rbp-11h]
  __int64 v34; // [rsp+A8h] [rbp-1h]

  v30 = a4;
  v29 = a3;
  v8 = a7[20];
  v9 = a7[16];
  v10 = a7[19];
  v11 = a7[15];
  v12 = a7[18];
  LODWORD(v28) = a7[17];
  LOBYTE(v13) = (int)v28 > 5000 || v8 > 1000 || v9 > 10000 || v10 > 200 || v11 > 500 || v12 > 1000;
  if ( (_BYTE)v13 || (a6 & 0x20) != 0 )
  {
    memset_0(v31, 0, 0x68uLL);
    LODWORD(v31[0]) = v29;
    *((_QWORD *)&v31[0] + 1) = v30;
    LODWORD(v34) = v8;
    *(_QWORD *)&v33 = __PAIR64__((unsigned int)v28, v9);
    HIDWORD(v32) = v11;
    *((_QWORD *)&v33 + 1) = __PAIR64__(v10, v12);
    HIDWORD(v34) = (a6 & 0x20) != 0;
    v13 = *a1;
    v14 = **a1;
    if ( !v14 )
    {
      v15 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)operator new(0x30uLL);
      v17 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, 0x30uLL);
        *((_QWORD *)v17 + 3) = 0LL;
        *((_QWORD *)v17 + 4) = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      v18 = *a1;
      v28 = v17;
      if ( v18 != &v28 )
      {
        v19 = *v18;
        v28 = 0LL;
        *v18 = v17;
        if ( v19 )
          CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v19, v16);
      }
      std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(
        &v28,
        v16);
      v13 = *a1;
      v14 = **a1;
    }
    v20 = *((_QWORD *)v14 + 3);
    v21 = (__int64)v14 + 16;
    if ( *(_QWORD *)(v21 + 16) == v20 )
    {
      LOBYTE(v13) = std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
                      (const void **)v21,
                      (_BYTE *)v20,
                      (__int64)v31);
    }
    else
    {
      v22 = v31[1];
      *(_OWORD *)v20 = v31[0];
      v23 = v31[2];
      *(_OWORD *)(v20 + 16) = v22;
      v24 = v31[3];
      *(_OWORD *)(v20 + 32) = v23;
      v25 = v32;
      *(_OWORD *)(v20 + 48) = v24;
      v26 = v33;
      *(_OWORD *)(v20 + 64) = v25;
      *(_QWORD *)&v25 = v34;
      *(_OWORD *)(v20 + 80) = v26;
      *(_QWORD *)(v20 + 96) = v25;
      *(_QWORD *)(v21 + 8) += 104LL;
    }
  }
  return (char)v13;
}
