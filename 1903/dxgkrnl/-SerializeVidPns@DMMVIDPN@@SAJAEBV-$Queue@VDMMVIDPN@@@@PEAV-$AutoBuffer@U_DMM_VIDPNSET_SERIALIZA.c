/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BEBB4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B15F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00493B4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C005352C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0054568 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02BE80C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall ***v17)(_QWORD, __int64); // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rax
  SIZE_T v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 v35; // di
  __int64 v36; // rcx
  unsigned __int8 *v37; // rdx
  unsigned __int8 v38; // r8
  unsigned __int8 *v39; // rsi
  __int64 v40; // rbx
  _QWORD *v41; // rax
  __int64 v42; // rax
  _QWORD v43[2]; // [rsp+20h] [rbp-40h] BYREF
  int v44; // [rsp+30h] [rbp-30h]
  _QWORD v45[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-18h]
  int v47; // [rsp+50h] [rbp-10h]
  __int64 v48; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v49)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v44 = 0;
  v8 = (_QWORD *)(a1 + 24);
  v43[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v46 = 0LL;
  v43[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v9 = v45;
  v45[0] = v45;
  v10 = (_QWORD *)*v8;
  v45[1] = v45;
  v47 = 2;
  v48 = 0LL;
  if ( v10 == v8 )
    goto LABEL_16;
  v11 = (__int64)(v10 - 1);
  if ( !v11 )
    goto LABEL_16;
  do
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v17 = v12;
    if ( v12 )
    {
      v12[1] = 0LL;
      v12[2] = 0LL;
      *v12 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v12[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v12[4] = 0LL;
      v12[5] = 0LL;
      *((_DWORD *)v12 + 12) = 3;
    }
    else
    {
      v17 = 0LL;
    }
    v49 = v17;
    if ( !v17 )
    {
      v34 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v34 + 24) = 56LL;
      *(_QWORD *)(v34 + 32) = v11;
      WdLogEvent5_WdLowResource(v34);
      LODWORD(v22) = -1073741801;
      goto LABEL_26;
    }
    v18 = DMMVIDPN::Serialize(v11, (__int64)v17, v15);
    v22 = v18;
    if ( v18 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v20, v19, v21);
      *(_QWORD *)(v33 + 24) = v11;
      *(_QWORD *)(v33 + 32) = v22;
      WdLogEvent5_WdError(v33);
LABEL_26:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v49);
      goto LABEL_40;
    }
    v49 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v43, (__int64)v17);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v49);
    v23 = *(_QWORD **)(v11 + 8);
    v11 = (__int64)(v23 - 1);
    if ( v23 == v8 )
      v11 = 0LL;
  }
  while ( v11 );
  v24 = v46;
  v9 = (_QWORD *)v45[0];
  if ( v46 > 1 )
    goto LABEL_17;
LABEL_16:
  v24 = 1LL;
LABEL_17:
  v25 = 4 * v24 + 4;
  if ( v9 != v45 )
  {
    v26 = v9 - 1;
    while ( v26 )
    {
      v25 += v26[5];
      a3 = v45;
      v27 = (_QWORD *)v26[1];
      v26 = v27 - 1;
      if ( v27 == v45 )
        v26 = 0LL;
    }
  }
  v28 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v25, (__int64)a3);
  v22 = v28;
  if ( v28 >= 0 )
  {
    v35 = 0;
    **(_BYTE **)(a2 + 32) = v46;
    v36 = 1LL;
    v37 = *(unsigned __int8 **)(a2 + 32);
    v38 = *v37;
    if ( *v37 > 1u )
      v36 = *v37;
    v39 = &v37[4 * (unsigned __int8)v36 + 4];
    if ( (_QWORD *)v45[0] == v45 )
      v40 = 0LL;
    else
      v40 = v45[0] - 8LL;
    if ( v40 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v35 + 4) = (_DWORD)v39 - *(_DWORD *)(a2 + 32);
        memmove(v39, *(const void **)(v40 + 32), *(_QWORD *)(v40 + 40));
        v39 += *(_QWORD *)(v40 + 40);
        v36 = (__int64)v45;
        v41 = *(_QWORD **)(v40 + 8);
        v40 = (__int64)(v41 - 1);
        if ( v41 == v45 )
          v40 = 0LL;
        ++v35;
      }
      while ( v40 );
      v38 = **(_BYTE **)(a2 + 32);
    }
    if ( v35 != v38 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v36, v37);
      WdLogEvent5_WdAssertion(v42);
    }
    LODWORD(v22) = 0;
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v22;
    WdLogEvent5_WdError(v32);
  }
LABEL_40:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v43);
  return (unsigned int)v22;
}
