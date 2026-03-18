/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6C0C
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
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0054EF4 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int8 v34; // di
  __int64 v35; // rcx
  unsigned __int8 *v36; // rdx
  unsigned __int8 v37; // r8
  unsigned __int8 *v38; // rsi
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD v42[2]; // [rsp+20h] [rbp-40h] BYREF
  int v43; // [rsp+30h] [rbp-30h]
  _QWORD v44[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v45; // [rsp+48h] [rbp-18h]
  int v46; // [rsp+50h] [rbp-10h]
  __int64 v47; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v48)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v43 = 0;
    v42[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v8 = *(_QWORD *)(a1 + 24);
    v42[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v44[1] = v44;
    v9 = v44;
    v45 = 0LL;
    v44[0] = v44;
    v46 = 2;
    v47 = 0LL;
    if ( v8 == a1 + 24 || (v10 = v8 - 8) == 0 )
    {
LABEL_16:
      v23 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v23 = *(_QWORD *)(a1 + 40);
      v24 = 28 * v23 - 20;
      if ( v9 != v44 )
      {
        v25 = v9 - 1;
        while ( v25 )
        {
          v28 = (_QWORD *)v25[1];
          v24 += v25[5];
          v25 = v28 - 1;
          if ( v28 == v44 )
            v25 = 0LL;
        }
      }
      v29 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v24, v24);
      v21 = v29;
      if ( v29 >= 0 )
      {
        v34 = 0;
        **(_BYTE **)(a2 + 32) = v45;
        v35 = 1LL;
        v36 = *(unsigned __int8 **)(a2 + 32);
        v37 = *v36;
        if ( *v36 > 1u )
          v35 = *v36;
        v38 = &v36[4 * (unsigned __int8)v35 + 4];
        if ( (_QWORD *)v44[0] == v44 )
          v39 = 0LL;
        else
          v39 = v44[0] - 8LL;
        if ( v39 )
        {
          do
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v34 + 4) = (_DWORD)v38 - *(_DWORD *)(a2 + 32);
            memmove(v38, *(const void **)(v39 + 32), *(_QWORD *)(v39 + 40));
            v38 += *(_QWORD *)(v39 + 40);
            v35 = (__int64)v44;
            v40 = *(_QWORD **)(v39 + 8);
            v39 = (__int64)(v40 - 1);
            if ( v40 == v44 )
              v39 = 0LL;
            ++v34;
          }
          while ( v39 );
          v37 = **(_BYTE **)(a2 + 32);
        }
        if ( v34 != v37 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v35, v36);
          WdLogEvent5_WdAssertion(v41);
        }
        LODWORD(v21) = 0;
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = v21;
        WdLogEvent5_WdError(v33);
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
        v16 = v11;
        if ( v11 )
        {
          v11[1] = 0LL;
          v11[2] = 0LL;
          *v11 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
          v11[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v11[4] = 0LL;
          v11[5] = 0LL;
          *((_DWORD *)v11 + 12) = 3;
        }
        else
        {
          v16 = 0LL;
        }
        v48 = v16;
        if ( !v16 )
          break;
        v17 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v10, (__int64)v16);
        v21 = v17;
        if ( v17 < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v19, v18, v20);
          *(_QWORD *)(v26 + 24) = v10;
          *(_QWORD *)(v26 + 32) = v21;
          WdLogEvent5_WdError(v26);
          goto LABEL_22;
        }
        v48 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v42, (__int64)v16);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v48);
        v22 = *(_QWORD *)(v10 + 8);
        v10 = v22 - 8;
        if ( v22 == a1 + 24 )
          v10 = 0LL;
        if ( !v10 )
        {
          v9 = (_QWORD *)v44[0];
          goto LABEL_16;
        }
      }
      v27 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v27 + 24) = 56LL;
      *(_QWORD *)(v27 + 32) = v10;
      WdLogEvent5_WdLowResource(v27);
      LODWORD(v21) = -1073741801;
LABEL_22:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v48);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v42);
    return (unsigned int)v21;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
