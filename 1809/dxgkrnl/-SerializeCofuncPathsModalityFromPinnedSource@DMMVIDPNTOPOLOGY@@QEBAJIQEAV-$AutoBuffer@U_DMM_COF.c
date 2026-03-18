/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0284664
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C027EEB4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00423C8 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C004C250 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C004C2DC (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C004D398 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D3E80 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0287584 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rax
  int NumPathsFromSource; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 Container; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  DMMVIDPNSOURCEMODESET *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  size_t v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  SIZE_T v47; // rdx
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned __int8 v56; // di
  __int64 v57; // rcx
  char *v58; // rdx
  char v59; // r8
  unsigned __int8 *v60; // rsi
  __int64 v61; // rbx
  _QWORD *v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v66; // [rsp+30h] [rbp-69h]
  _QWORD v67[2]; // [rsp+40h] [rbp-59h] BYREF
  int v68; // [rsp+50h] [rbp-49h]
  _QWORD v69[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v70; // [rsp+68h] [rbp-31h]
  int v71; // [rsp+70h] [rbp-29h]
  __int64 v72; // [rsp+78h] [rbp-21h]
  __int64 v73; // [rsp+80h] [rbp-19h] BYREF
  void **v74; // [rsp+88h] [rbp-11h] BYREF
  __int128 v75; // [rsp+90h] [rbp-9h]
  void **v76; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v79; // [rsp+B8h] [rbp+1Fh]
  unsigned int v80; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v81; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v64 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v3, &v64);
  v14 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = v3;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdDmmEvent(v15);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v16[3] = v3;
    v16[4] = this;
    v16[5] = v14;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v14;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v18 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3);
  v19 = *(_QWORD *)(v18 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v18 + 104);
  }
  else
  {
    v20 = 0LL;
  }
  v73 = v20;
  if ( !*(_QWORD *)(v20 + 144) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v21);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v73, 0LL);
  v68 = 0;
  v22 = v69;
  v67[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v70 = 0LL;
  v67[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v69[1] = v69;
  v23 = 0LL;
  v66 = 0LL;
  v69[0] = v69;
  v71 = 2;
  v72 = 0LL;
  if ( !v64 )
    goto LABEL_38;
  do
  {
    v80 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)this, v3, v23, &v80) < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = v80;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v80);
    if ( !Path )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v29);
    }
    Src = 0LL;
    v74 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v76 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v75 = 0LL;
    v79 = 3;
    v30 = *((_QWORD *)Path + 12);
    v81 = 0LL;
    v31 = *(_QWORD *)(v30 + 104);
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 96));
      v32 = *(_QWORD *)(v30 + 104);
      v26 = v80;
    }
    else
    {
      v32 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, v32);
    v34 = v81;
    if ( !v81 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( *((_QWORD *)v34 + 18) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v36);
    }
    v37 = DMMVIDPNTARGETMODESET::Serialize(v34);
    v14 = v37;
    if ( v37 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v55[4] = v26;
      v55[3] = v3;
      v55[5] = this;
      v55[6] = v14;
      WdLogEvent5_WdError(v55);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, 0LL);
      goto LABEL_50;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, 0LL);
    v39 = Size;
    v40 = operator new(0x38uLL, 0x4E506456u, PagedPool);
    v41 = (__int64)v40;
    if ( v40 )
    {
      v40[1] = 0LL;
      v40[2] = 0LL;
      *v40 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v40[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v40[4] = 0LL;
      v40[5] = 0LL;
      *((_DWORD *)v40 + 12) = 3;
    }
    else
    {
      v41 = 0LL;
    }
    v65 = (__int64 (__fastcall ***)(_QWORD, __int64))v41;
    if ( !v41 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v54[5] = v26;
      v54[3] = 56LL;
      v54[4] = v3;
      WdLogEvent5_WdLowResource(v54);
      LODWORD(v14) = -1073741801;
      goto LABEL_48;
    }
    v42 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v41, v39 + 360);
    v14 = v42;
    if ( v42 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v53[4] = v26;
      v53[3] = v3;
      v53[5] = this;
      v53[6] = v14;
      WdLogEvent5_WdError(v53);
LABEL_48:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v65);
LABEL_50:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v74);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v43);
      WdLogEvent5_WdAssertion(v44);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v43);
      WdLogEvent5_WdAssertion(v45);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v41 + 32));
    memmove((void *)(*(_QWORD *)(v41 + 32) + 360LL), Src, Size);
    v65 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v67, v41);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v65);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v74);
    v23 = v66 + 1;
    v66 = v23;
  }
  while ( v23 < v64 );
  v46 = v70;
  v22 = (_QWORD *)v69[0];
  if ( v70 > 1 )
    goto LABEL_39;
LABEL_38:
  v46 = 1LL;
LABEL_39:
  v47 = 4 * v46 + 4;
  if ( v22 != v69 )
  {
    v48 = v22 - 1;
    while ( v48 )
    {
      v47 += v48[5];
      v49 = (_QWORD *)v48[1];
      v48 = v49 - 1;
      if ( v49 == v69 )
        v48 = 0LL;
    }
  }
  v50 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v47);
  v14 = v50;
  if ( v50 >= 0 )
  {
    v56 = 0;
    **(_BYTE **)(a3 + 32) = v70;
    v57 = 1LL;
    v58 = *(char **)(a3 + 32);
    v59 = *v58;
    if ( (unsigned __int8)*v58 > 1u )
      v57 = (unsigned __int8)*v58;
    v60 = (unsigned __int8 *)&v58[4 * (unsigned __int8)v57 + 4];
    if ( (_QWORD *)v69[0] == v69 )
      v61 = 0LL;
    else
      v61 = v69[0] - 8LL;
    if ( v61 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v56 + 4) = (_DWORD)v60 - *(_DWORD *)(a3 + 32);
        memmove(v60, *(const void **)(v61 + 32), *(_QWORD *)(v61 + 40));
        v60 += *(_QWORD *)(v61 + 40);
        v57 = (__int64)v69;
        v62 = *(_QWORD **)(v61 + 8);
        v61 = (__int64)(v62 - 1);
        if ( v62 == v69 )
          v61 = 0LL;
        ++v56;
      }
      while ( v61 );
      v59 = **(_BYTE **)(a3 + 32);
    }
    if ( v56 != v59 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v57);
      WdLogEvent5_WdAssertion(v63);
    }
    LODWORD(v14) = 0;
  }
  else
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v51);
    v52[3] = a3;
    v52[4] = v3;
    v52[5] = this;
    v52[6] = v14;
    WdLogEvent5_WdError(v52);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v67);
  return (unsigned int)v14;
}
