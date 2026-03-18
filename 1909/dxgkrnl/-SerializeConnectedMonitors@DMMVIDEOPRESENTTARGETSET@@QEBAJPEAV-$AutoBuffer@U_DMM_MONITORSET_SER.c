/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BC234
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B1A08 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0049464 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C005356C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00545A8 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549E0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C02C9DE4 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  SIZE_T v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  _BYTE *v49; // rsi
  _BYTE *v50; // r8
  unsigned __int8 v51; // di
  char *v52; // r15
  __int64 v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD v56[2]; // [rsp+20h] [rbp-40h] BYREF
  int v57; // [rsp+30h] [rbp-30h]
  _QWORD v58[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-18h]
  int v60; // [rsp+50h] [rbp-10h]
  __int64 v61; // [rsp+58h] [rbp-8h]
  SIZE_T v62; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v63)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v57 = 0;
    v56[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v8 = *(_QWORD *)(a1 + 24);
    v56[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v58[1] = v58;
    v9 = v58;
    v59 = 0LL;
    v58[0] = v58;
    v60 = 2;
    v61 = 0LL;
    if ( v8 != a1 + 24 )
    {
      v10 = v8 - 8;
      if ( v10 )
      {
        do
        {
          if ( *(_QWORD *)(v10 + 112) )
          {
            v11 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
            v16 = (__int64)v11;
            if ( v11 )
            {
              v11[1] = 0LL;
              v11[2] = 0LL;
              *v11 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v11[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v11[4] = 0LL;
              v11[5] = 0LL;
              *((_DWORD *)v11 + 12) = 3;
            }
            else
            {
              v16 = 0LL;
            }
            v63 = (__int64 (__fastcall ***)(_QWORD, __int64))v16;
            if ( !v16 )
            {
              v47 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
              *(_QWORD *)(v47 + 24) = 56LL;
              *(_QWORD *)(v47 + 32) = v10;
              WdLogEvent5_WdLowResource(v47);
              LODWORD(v23) = -1073741801;
              goto LABEL_39;
            }
            v17 = *(_QWORD *)(v10 + 112);
            if ( !v17 )
            {
              v18 = WdLogNewEntry5_WdAssertion(v13, v12);
              WdLogEvent5_WdAssertion(v18);
            }
            v62 = 0LL;
            v19 = MonitorSerializeMonitor(v17, &v62, 0LL);
            v22 = 0x80000000LL;
            v23 = v19;
            if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
            {
LABEL_33:
              v41 = (_QWORD *)WdLogNewEntry5_WdError(v22, v20, v21);
              v41[3] = *(_QWORD *)(v10 + 112);
              v42 = *(unsigned int *)(v10 + 24);
              v41[4] = v42;
              v43 = *(_QWORD *)(a1 + 88);
              v44 = *(_QWORD *)(v43 + 8);
              if ( !v44 )
              {
                v45 = WdLogNewEntry5_WdAssertion(v42, v40);
                WdLogEvent5_WdAssertion(v45);
                v44 = *(_QWORD *)(v43 + 8);
              }
              v46 = (__int64)v41;
              v41[5] = *(_QWORD *)(v44 + 16);
              v41[6] = v23;
LABEL_36:
              WdLogEvent5_WdError(v46);
LABEL_39:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v63);
              goto LABEL_53;
            }
            if ( v19 != -1073741789 )
            {
              v24 = WdLogNewEntry5_WdAssertion(0x80000000LL, v20);
              WdLogEvent5_WdAssertion(v24);
            }
            v25 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v16, v62, v21);
            v23 = v25;
            if ( v25 < 0 )
            {
              v46 = WdLogNewEntry5_WdError(v27, v26, v28);
              *(_QWORD *)(v46 + 24) = v23;
              goto LABEL_36;
            }
            v29 = MonitorSerializeMonitor(v17, &v62, *(_QWORD *)(v16 + 32));
            v23 = v29;
            if ( v29 < 0 )
              goto LABEL_33;
            v63 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v56, v16);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v63);
          }
          v30 = *(_QWORD *)(v10 + 8);
          v10 = v30 - 8;
          if ( v30 == a1 + 24 )
            v10 = 0LL;
        }
        while ( v10 );
        v31 = v59;
        v9 = (_QWORD *)v58[0];
        if ( v59 > 1 )
          goto LABEL_26;
      }
    }
    v31 = 1LL;
LABEL_26:
    v32 = 4 * v31 + 4;
    if ( v9 != v58 )
    {
      v33 = v9 - 1;
      while ( v33 )
      {
        v32 += v33[5];
        a3 = v58;
        v34 = (_QWORD *)v33[1];
        v33 = v34 - 1;
        if ( v34 == v58 )
          v33 = 0LL;
      }
    }
    v35 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v32, (__int64)a3);
    v23 = v35;
    if ( v35 >= 0 )
    {
      v48 = 1LL;
      v49 = *(_BYTE **)(a2 + 32);
      *v49 = v59;
      v50 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int8)v59 > 1u )
        v48 = (unsigned __int8)v59;
      v51 = 0;
      v52 = &v50[4 * (unsigned __int8)v48 + 4];
      if ( (_QWORD *)v58[0] == v58 )
        v53 = 0LL;
      else
        v53 = v58[0] - 8LL;
      if ( v53 )
      {
        do
        {
          *(_DWORD *)&v49[4 * v51 + 4] = (_DWORD)v52 - (_DWORD)v49;
          memmove(v52, *(const void **)(v53 + 32), *(_QWORD *)(v53 + 40));
          v52 += *(_QWORD *)(v53 + 40);
          v37 = v58;
          v54 = *(_QWORD **)(v53 + 8);
          v53 = (__int64)(v54 - 1);
          if ( v54 == v58 )
            v53 = 0LL;
          ++v51;
        }
        while ( v53 );
        v50 = *(_BYTE **)(a2 + 32);
      }
      if ( v51 != *v50 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v37, v48);
        WdLogEvent5_WdAssertion(v55);
      }
      LODWORD(v23) = 0;
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v37, v36, v38);
      *(_QWORD *)(v39 + 24) = v23;
      WdLogEvent5_WdError(v39);
    }
LABEL_53:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v56);
    return (unsigned int)v23;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
