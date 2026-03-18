/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283E68
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00423C8 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C004C2DC (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C004D398 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C02914C0 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  SIZE_T v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int8 v37; // dl
  _BYTE *v38; // rsi
  _BYTE *v39; // r8
  unsigned __int8 v40; // di
  char *v41; // r15
  __int64 v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rax
  _QWORD v45[2]; // [rsp+20h] [rbp-40h] BYREF
  int v46; // [rsp+30h] [rbp-30h]
  _QWORD v47[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-18h]
  int v49; // [rsp+50h] [rbp-10h]
  __int64 v50; // [rsp+58h] [rbp-8h]
  SIZE_T v51; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v52)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v46 = 0;
    v45[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = *(_QWORD *)(a1 + 24);
    v45[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v47[1] = v47;
    v8 = v47;
    v48 = 0LL;
    v47[0] = v47;
    v49 = 2;
    v50 = 0LL;
    if ( v7 != a1 + 24 )
    {
      v9 = v7 - 8;
      if ( v9 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 112) )
          {
            v10 = operator new(0x38uLL, 0x4E506456u, PagedPool);
            v12 = (__int64)v10;
            if ( v10 )
            {
              v10[1] = 0LL;
              v10[2] = 0LL;
              *v10 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v10[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v10[4] = 0LL;
              v10[5] = 0LL;
              *((_DWORD *)v10 + 12) = 3;
            }
            else
            {
              v12 = 0LL;
            }
            v52 = (__int64 (__fastcall ***)(_QWORD, __int64))v12;
            if ( !v12 )
            {
              v36 = WdLogNewEntry5_WdLowResource(v11);
              *(_QWORD *)(v36 + 24) = 56LL;
              *(_QWORD *)(v36 + 32) = v9;
              WdLogEvent5_WdLowResource(v36);
              LODWORD(v17) = -1073741801;
              goto LABEL_39;
            }
            v13 = *(_QWORD *)(v9 + 112);
            if ( !v13 )
            {
              v14 = WdLogNewEntry5_WdAssertion(v11);
              WdLogEvent5_WdAssertion(v14);
            }
            v51 = 0LL;
            v15 = MonitorSerializeMonitor(v13, &v51, 0LL);
            v16 = 0x80000000LL;
            v17 = v15;
            if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741789 )
            {
LABEL_33:
              v30 = (_QWORD *)WdLogNewEntry5_WdError(v16);
              v30[3] = *(_QWORD *)(v9 + 112);
              v31 = *(unsigned int *)(v9 + 24);
              v30[4] = v31;
              v32 = *(_QWORD *)(a1 + 88);
              v33 = *(_QWORD *)(v32 + 8);
              if ( !v33 )
              {
                v34 = WdLogNewEntry5_WdAssertion(v31);
                WdLogEvent5_WdAssertion(v34);
                v33 = *(_QWORD *)(v32 + 8);
              }
              v35 = (__int64)v30;
              v30[5] = *(_QWORD *)(v33 + 16);
              v30[6] = v17;
LABEL_36:
              WdLogEvent5_WdError(v35);
LABEL_39:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v52);
              goto LABEL_53;
            }
            if ( v15 != -1073741789 )
            {
              v18 = WdLogNewEntry5_WdAssertion(0x80000000LL);
              WdLogEvent5_WdAssertion(v18);
            }
            v19 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v12, v51);
            v17 = v19;
            if ( v19 < 0 )
            {
              v35 = WdLogNewEntry5_WdError(v20);
              *(_QWORD *)(v35 + 24) = v17;
              goto LABEL_36;
            }
            v21 = MonitorSerializeMonitor(v13, &v51, *(_QWORD *)(v12 + 32));
            v17 = v21;
            if ( v21 < 0 )
              goto LABEL_33;
            v52 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v45, v12);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v52);
          }
          v22 = *(_QWORD *)(v9 + 8);
          v9 = v22 - 8;
          if ( v22 == a1 + 24 )
            v9 = 0LL;
        }
        while ( v9 );
        v23 = v48;
        v8 = (_QWORD *)v47[0];
        if ( v48 > 1 )
          goto LABEL_26;
      }
    }
    v23 = 1LL;
LABEL_26:
    v24 = 4 * v23 + 4;
    if ( v8 != v47 )
    {
      v25 = v8 - 1;
      while ( v25 )
      {
        v24 += v25[5];
        v26 = (_QWORD *)v25[1];
        v25 = v26 - 1;
        if ( v26 == v47 )
          v25 = 0LL;
      }
    }
    v27 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v24);
    v17 = v27;
    if ( v27 >= 0 )
    {
      v37 = 1;
      v38 = *(_BYTE **)(a2 + 32);
      *v38 = v48;
      v39 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int8)v48 > 1u )
        v37 = v48;
      v40 = 0;
      v41 = &v39[4 * v37 + 4];
      if ( (_QWORD *)v47[0] == v47 )
        v42 = 0LL;
      else
        v42 = v47[0] - 8LL;
      if ( v42 )
      {
        do
        {
          *(_DWORD *)&v38[4 * v40 + 4] = (_DWORD)v41 - (_DWORD)v38;
          memmove(v41, *(const void **)(v42 + 32), *(_QWORD *)(v42 + 40));
          v41 += *(_QWORD *)(v42 + 40);
          v28 = v47;
          v43 = *(_QWORD **)(v42 + 8);
          v42 = (__int64)(v43 - 1);
          if ( v43 == v47 )
            v42 = 0LL;
          ++v40;
        }
        while ( v42 );
        v39 = *(_BYTE **)(a2 + 32);
      }
      if ( v40 != *v39 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v44);
      }
      LODWORD(v17) = 0;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v29 + 24) = v17;
      WdLogEvent5_WdError(v29);
    }
LABEL_53:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v45);
    return (unsigned int)v17;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
