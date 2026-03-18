/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DA040
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003930 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0003968 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@@Z @ 0x1C0003EB8 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00041D8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0004854 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0004AC0 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0004B68 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000B4A8 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00180F0 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C0018DDC (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00C2698 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00DA3F4 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  char *v3; // rbx
  unsigned __int8 (__fastcall ***v4)(_QWORD); // rsi
  __int64 v7; // rcx
  struct DMMVIDPNSOURCESET *const *v8; // r15
  struct DMMVIDPNTARGETSET *const *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DMMVIDPNSOURCESET *v14; // rax
  DMMVIDPNSOURCESET *v15; // rax
  struct DMMVIDPNTARGETSET *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DMMVIDPNTARGETSET *v21; // rax
  DMMVIDPNTARGETSET *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // r14
  DMMVIDPNSOURCE *v29; // rsi
  struct DMMVIDEOPRESENTSOURCE *v30; // r14
  DMMVIDPNSOURCE *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct DMMVIDPNSOURCESET *v37; // rcx
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rsi
  struct DMMVIDEOPRESENTTARGET *v42; // rsi
  DMMVIDPNTARGET *v43; // rax
  DMMVIDPNTARGET *v44; // rax
  __int64 v45; // rcx
  __int64 (__fastcall ***v46)(_QWORD, __int64); // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct DMMVIDPNTARGETSET *v51; // rcx
  __int64 v52; // rcx
  int v53; // r14d
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  struct DMMVIDPNSOURCESET *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _BYTE v75[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall ***v76)(_QWORD, __int64); // [rsp+B0h] [rbp+48h] BYREF
  DMMVIDPNSOURCE *v77; // [rsp+B8h] [rbp+50h] BYREF
  DMMVIDPNSOURCE *v78; // [rsp+C0h] [rbp+58h] BYREF
  __int64 (__fastcall ***v79)(_QWORD, __int64); // [rsp+C8h] [rbp+60h] BYREF

  v3 = (char *)this + 40;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (unsigned __int8)a2, a3);
  v8 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v9 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !a2 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v61);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v3, (__int64)a2);
  if ( !(**v4)(v4) )
  {
    v62 = WdLogNewEntry5_WdDmmEvent(v11, v10, v12, v13);
    *(_QWORD *)(v62 + 24) = this;
    WdLogEvent5_WdDmmEvent(v62);
    v63 = *((_DWORD *)this + 28);
    if ( v63 >= 0 )
      v63 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v63;
    return this;
  }
  v14 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  if ( v14 )
    v15 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v14, this);
  else
    v15 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>>::reset(
    (__int64 *)this + 38,
    (__int64)v15);
  v16 = *v8;
  if ( !*v8 )
    goto LABEL_40;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v16)(v16) )
  {
    v65 = WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
    *(_QWORD *)(v65 + 24) = this;
    WdLogEvent5_WdDmmEvent(v65);
    v66 = *v8;
LABEL_43:
    *((_DWORD *)this + 20) = *((_DWORD *)v66 + 4);
    return this;
  }
  v21 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  v22 = v21 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v21, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>>::reset(
    (__int64 *)this + 39,
    (__int64)v22);
  v16 = *v9;
  if ( !*v9 )
  {
LABEL_40:
    v64 = WdLogNewEntry5_WdLowResource(v16);
    WdLogEvent5_WdLowResource(v64);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v16)(v16) )
  {
    v67 = WdLogNewEntry5_WdDmmEvent(v24, v23, v25, v26);
    *(_QWORD *)(v67 + 24) = this;
    WdLogEvent5_WdDmmEvent(v67);
    v66 = *v9;
    goto LABEL_43;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 9) + 72LL), 1u);
  v27 = *((_QWORD *)a2 + 9);
  v28 = *(_QWORD *)(v27 + 24);
  if ( v28 != v27 + 24 )
  {
    v29 = 0LL;
    v30 = (struct DMMVIDEOPRESENTSOURCE *)(v28 - 8);
    if ( v30 )
    {
      while ( 1 )
      {
        v31 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, PagedPool);
        if ( v31 )
          v29 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v31, *v8, v30);
        v77 = v29;
        if ( !v29 )
          break;
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v29 + 8))((__int64)v29 + 64) )
        {
          v69 = WdLogNewEntry5_WdDmmEvent(v34, v33, v35, v36);
          *(_QWORD *)(v69 + 24) = this;
          WdLogEvent5_WdDmmEvent(v69);
          *((_DWORD *)this + 20) = *((_DWORD *)v29 + 18);
          goto LABEL_48;
        }
        v37 = *v8;
        v77 = 0LL;
        v78 = v29;
        v39 = DMMVIDPNSOURCESET::AddSource((__int64)v37, (unsigned int **)&v78);
        if ( v39 < 0 )
        {
          v68 = WdLogNewEntry5_WdError(v38);
          WdLogEvent5_WdError(v68);
          *((_DWORD *)this + 20) = v39;
          goto LABEL_48;
        }
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
        v40 = *((_QWORD *)v30 + 1);
        v29 = 0LL;
        v30 = (struct DMMVIDEOPRESENTSOURCE *)(v40 - 8);
        if ( v40 == v27 + 24 )
          v30 = 0LL;
        if ( !v30 )
          goto LABEL_22;
      }
      v70 = WdLogNewEntry5_WdLowResource(v32);
      WdLogEvent5_WdLowResource(v70);
      *((_DWORD *)this + 20) = -1073741801;
LABEL_48:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v77);
      goto LABEL_51;
    }
  }
LABEL_22:
  ReferenceCounted::Release((ReferenceCounted *)(v27 + 64));
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 10) + 72LL), 1u);
  v27 = *((_QWORD *)a2 + 10);
  v41 = *(_QWORD *)(v27 + 24);
  if ( v41 != v27 + 24 )
  {
    v42 = (struct DMMVIDEOPRESENTTARGET *)(v41 - 8);
    if ( v42 )
    {
      while ( 1 )
      {
        v76 = 0LL;
        v43 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, PagedPool);
        if ( v43 )
          v44 = DMMVIDPNTARGET::DMMVIDPNTARGET(v43, *v9, v42);
        else
          v44 = 0LL;
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v76, (__int64 (__fastcall ***)(_QWORD, __int64))v44);
        v46 = v76;
        if ( !v76 )
        {
          v71 = WdLogNewEntry5_WdLowResource(v45);
          WdLogEvent5_WdLowResource(v71);
          *((_DWORD *)this + 20) = -1073741801;
          goto LABEL_50;
        }
        if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v76[8])(v76 + 8) )
          break;
        v51 = *v9;
        v76 = 0LL;
        v79 = v46;
        v53 = DMMVIDPNTARGETSET::AddTarget(v51, &v79);
        if ( v53 < 0 )
        {
          v72 = WdLogNewEntry5_WdError(v52);
          WdLogEvent5_WdError(v72);
          *((_DWORD *)this + 20) = v53;
          goto LABEL_50;
        }
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v76);
        v54 = *((_QWORD *)v42 + 1);
        v42 = (struct DMMVIDEOPRESENTTARGET *)(v54 - 8);
        if ( v54 == v27 + 24 )
          v42 = 0LL;
        if ( !v42 )
          goto LABEL_32;
      }
      v73 = WdLogNewEntry5_WdDmmEvent(v48, v47, v49, v50);
      *(_QWORD *)(v73 + 24) = this;
      WdLogEvent5_WdDmmEvent(v73);
      *((_DWORD *)this + 20) = *((_DWORD *)v46 + 18);
LABEL_50:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v76);
LABEL_51:
      ReferenceCounted::Release((ReferenceCounted *)(v27 + 64));
      return this;
    }
  }
LABEL_32:
  ReferenceCounted::Release((ReferenceCounted *)(v27 + 64));
  LOBYTE(v55) = *((_BYTE *)this + 172);
  if ( ((unsigned __int16)((2 << v55) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    v74 = WdLogNewEntry5_WdAssertion(v55);
    WdLogEvent5_WdAssertion(v74);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v75,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v75);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v57, v56, v58, v59) + 24) = this;
  return this;
}
