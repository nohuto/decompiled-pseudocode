/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02BC9C8
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6EF0 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00493B4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C00534A0 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C005352C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0054568 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0127FCC (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C012E18C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BF8E0 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rax
  int NumPathsFromSource; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 Container; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  DMMVIDPNSOURCEMODESET *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  size_t v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  SIZE_T v58; // rdx
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  unsigned __int8 v69; // di
  __int64 v70; // rcx
  unsigned __int8 *v71; // rdx
  unsigned __int8 v72; // r8
  unsigned __int8 *v73; // rsi
  __int64 v74; // rbx
  _QWORD *v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v78)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v79; // [rsp+30h] [rbp-69h]
  _QWORD v80[2]; // [rsp+40h] [rbp-59h] BYREF
  int v81; // [rsp+50h] [rbp-49h]
  _QWORD v82[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v83; // [rsp+68h] [rbp-31h]
  int v84; // [rsp+70h] [rbp-29h]
  __int64 v85; // [rsp+78h] [rbp-21h]
  __int64 v86; // [rsp+80h] [rbp-19h] BYREF
  void **v87; // [rsp+88h] [rbp-11h] BYREF
  __int128 v88; // [rsp+90h] [rbp-9h]
  void **v89; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v92; // [rsp+B8h] [rbp+1Fh]
  unsigned int v93; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v94; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = (unsigned int)a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2, 0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v77 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, (unsigned int)v3, &v77);
  v13 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v11, v10);
    *(_QWORD *)(v14 + 24) = v3;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdDmmEvent(v14);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v15[3] = v3;
    v15[4] = this;
    v15[5] = v13;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v13;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v10);
  v17 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 304), v3);
  v19 = *(_QWORD *)(v17 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v17 + 104);
  }
  else
  {
    v20 = 0LL;
  }
  v86 = v20;
  if ( !*(_QWORD *)(v20 + 144) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v21);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v86, 0LL);
  v81 = 0;
  v23 = v82;
  v80[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v83 = 0LL;
  v80[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v82[1] = v82;
  v24 = 0LL;
  v79 = 0LL;
  v82[0] = v82;
  v84 = 2;
  v85 = 0LL;
  if ( !v77 )
    goto LABEL_38;
  do
  {
    v93 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)this, (unsigned int)v3, v24, &v93) < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = v93;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v93);
    if ( !Path )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30, v29);
      WdLogEvent5_WdAssertion(v32);
    }
    Src = 0LL;
    v87 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v89 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v88 = 0LL;
    v92 = 3;
    v33 = *((_QWORD *)Path + 12);
    v94 = 0LL;
    v34 = *(_QWORD *)(v33 + 104);
    if ( v34 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 96));
      v35 = *(_QWORD *)(v33 + 104);
      v28 = v93;
    }
    else
    {
      v35 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v94, v35);
    v38 = v94;
    if ( !v94 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( *((_QWORD *)v38 + 18) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v40);
    }
    v41 = DMMVIDPNTARGETMODESET::Serialize(v38);
    v13 = v41;
    if ( v41 < 0 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44);
      v68[4] = v28;
      v68[3] = v3;
      v68[5] = this;
      v68[6] = v13;
      WdLogEvent5_WdError(v68);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v94, 0LL);
      goto LABEL_50;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v94, 0LL);
    v45 = Size;
    v46 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v50 = (__int64)v46;
    if ( v46 )
    {
      v46[1] = 0LL;
      v46[2] = 0LL;
      *v46 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v46[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v46[4] = 0LL;
      v46[5] = 0LL;
      *((_DWORD *)v46 + 12) = 3;
    }
    else
    {
      v50 = 0LL;
    }
    v78 = (__int64 (__fastcall ***)(_QWORD, __int64))v50;
    if ( !v50 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL, v47, v48, v49);
      v67[5] = v28;
      v67[3] = 56LL;
      v67[4] = v3;
      WdLogEvent5_WdLowResource(v67);
      LODWORD(v13) = -1073741801;
      goto LABEL_48;
    }
    v51 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v50, v45 + 360, v48);
    v13 = v51;
    if ( v51 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52, v54);
      v66[4] = v28;
      v66[3] = v3;
      v66[5] = this;
      v66[6] = v13;
      WdLogEvent5_WdError(v66);
LABEL_48:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v78);
LABEL_50:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v87);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v53, v52);
      WdLogEvent5_WdAssertion(v55);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v53, v52);
      WdLogEvent5_WdAssertion(v56);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v50 + 32));
    memmove((void *)(*(_QWORD *)(v50 + 32) + 360LL), Src, Size);
    v78 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v80, v50);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v78);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v87);
    v24 = v79 + 1;
    v79 = v24;
  }
  while ( v24 < v77 );
  v57 = v83;
  v23 = (_QWORD *)v82[0];
  if ( v83 > 1 )
    goto LABEL_39;
LABEL_38:
  v57 = 1LL;
LABEL_39:
  v58 = 4 * v57 + 4;
  if ( v23 != v82 )
  {
    v59 = v23 - 1;
    while ( v59 )
    {
      v58 += v59[5];
      v22 = v82;
      v60 = (_QWORD *)v59[1];
      v59 = v60 - 1;
      if ( v60 == v82 )
        v59 = 0LL;
    }
  }
  v61 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v58, (__int64)v22);
  v13 = v61;
  if ( v61 >= 0 )
  {
    v69 = 0;
    **(_BYTE **)(a3 + 32) = v83;
    v70 = 1LL;
    v71 = *(unsigned __int8 **)(a3 + 32);
    v72 = *v71;
    if ( *v71 > 1u )
      v70 = *v71;
    v73 = &v71[4 * (unsigned __int8)v70 + 4];
    if ( (_QWORD *)v82[0] == v82 )
      v74 = 0LL;
    else
      v74 = v82[0] - 8LL;
    if ( v74 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v69 + 4) = (_DWORD)v73 - *(_DWORD *)(a3 + 32);
        memmove(v73, *(const void **)(v74 + 32), *(_QWORD *)(v74 + 40));
        v73 += *(_QWORD *)(v74 + 40);
        v70 = (__int64)v82;
        v75 = *(_QWORD **)(v74 + 8);
        v74 = (__int64)(v75 - 1);
        if ( v75 == v82 )
          v74 = 0LL;
        ++v69;
      }
      while ( v74 );
      v72 = **(_BYTE **)(a3 + 32);
    }
    if ( v69 != v72 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v70, v71);
      WdLogEvent5_WdAssertion(v76);
    }
    LODWORD(v13) = 0;
  }
  else
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62, v64);
    v65[3] = a3;
    v65[4] = v3;
    v65[5] = this;
    v65[6] = v13;
    WdLogEvent5_WdError(v65);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v80);
  return (unsigned int)v13;
}
