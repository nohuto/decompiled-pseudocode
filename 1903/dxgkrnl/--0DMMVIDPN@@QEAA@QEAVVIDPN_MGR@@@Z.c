/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00FC77C
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2C84 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C0004138 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0004170 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00042F8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00052F0 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00055C4 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0009930 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0019F84 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C001A02C (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C001A0D4 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00493B4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00E2998 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E3C04 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E3D70 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00FCB24 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  unsigned __int8 (__fastcall ***v3)(_QWORD); // r14
  struct VIDPN_MGR *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DMMVIDPNSOURCESET *const *v8; // r15
  struct DMMVIDPNTARGETSET *const *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNSOURCESET *v12; // rax
  DMMVIDPNSOURCESET *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPNTARGETSET *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  DMMVIDPNTARGETSET *v20; // rax
  DMMVIDPNTARGETSET *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // r14
  struct DMMVIDEOPRESENTSOURCE *v27; // r14
  DMMVIDPNSOURCE *v28; // rsi
  DMMVIDPNSOURCE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct DMMVIDPNSOURCESET *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r14
  struct DMMVIDEOPRESENTTARGET *v45; // r14
  DMMVIDPNTARGET *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  DMMVIDPNTARGET *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DMMVIDPNTARGETSET *v54; // rcx
  __int64 v55; // rcx
  int v56; // esi
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int8 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  struct DMMVIDPNSOURCESET *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // [rsp+20h] [rbp-48h]
  DMMVIDPNTARGET *v82; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v83[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNSOURCE *v84; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v85; // [rsp+B8h] [rbp+50h]
  DMMVIDPNTARGET *v86; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v87; // [rsp+C8h] [rbp+60h] BYREF

  v85 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  v3 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  v5 = a2;
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
  if ( !v5 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v65);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)v5);
  if ( !(**v3)(v3) )
  {
    v66 = WdLogNewEntry5_WdDmmEvent(v11, v10);
    *(_QWORD *)(v66 + 24) = this;
    WdLogEvent5_WdDmmEvent(v66);
    v67 = *((_DWORD *)this + 28);
    if ( v67 >= 0 )
      v67 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v67;
    return this;
  }
  v12 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v13 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v12, this);
  else
    v13 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 38,
    (__int64)v13);
  v17 = *v8;
  if ( !*v8 )
    goto LABEL_42;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v17)(v17) )
  {
    v69 = WdLogNewEntry5_WdDmmEvent(v19, v18);
    *(_QWORD *)(v69 + 24) = this;
    WdLogEvent5_WdDmmEvent(v69);
    v70 = *v8;
LABEL_45:
    *((_DWORD *)this + 20) = *((_DWORD *)v70 + 4);
    return this;
  }
  v20 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v21 = v20 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v20, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 39,
    (__int64)v21);
  v17 = *v9;
  if ( !*v9 )
  {
LABEL_42:
    v68 = WdLogNewEntry5_WdLowResource(v17, v14, v15, v16);
    WdLogEvent5_WdLowResource(v68);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v17)(v17) )
  {
    v71 = WdLogNewEntry5_WdDmmEvent(v23, v22);
    *(_QWORD *)(v71 + 24) = this;
    WdLogEvent5_WdDmmEvent(v71);
    v70 = *v9;
    goto LABEL_45;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v5 + 9) + 72LL), 1u);
  v25 = *((_QWORD *)v5 + 9);
  v26 = *(_QWORD *)(v25 + 24);
  if ( v26 != v25 + 24 )
  {
    v27 = (struct DMMVIDEOPRESENTSOURCE *)(v26 - 8);
    if ( v27 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        v29 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
        if ( v29 )
          v28 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v29, *v8, v27);
        v84 = v28;
        if ( !v28 )
          break;
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v28 + 8))((__int64)v28 + 64) )
        {
          v73 = WdLogNewEntry5_WdDmmEvent(v35, v34);
          *(_QWORD *)(v73 + 24) = this;
          WdLogEvent5_WdDmmEvent(v73);
          *((_DWORD *)this + 20) = *((_DWORD *)v28 + 18);
          goto LABEL_50;
        }
        v36 = *v8;
        v84 = 0LL;
        v87 = v28;
        v39 = DMMVIDPNSOURCESET::AddSource((__int64)v36, (unsigned int **)&v87);
        if ( v39 < 0 )
        {
          v72 = WdLogNewEntry5_WdError(v38, v37, v40);
          WdLogEvent5_WdError(v72);
          *((_DWORD *)this + 20) = v39;
          goto LABEL_50;
        }
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v84);
        v41 = *((_QWORD *)v27 + 1);
        v28 = 0LL;
        v27 = (struct DMMVIDEOPRESENTSOURCE *)(v41 - 8);
        if ( v41 == v25 + 24 )
          v27 = 0LL;
        if ( !v27 )
        {
          v5 = v85;
          goto LABEL_24;
        }
      }
      v74 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
      WdLogEvent5_WdLowResource(v74);
      *((_DWORD *)this + 20) = -1073741801;
LABEL_50:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v84);
      goto LABEL_53;
    }
  }
LABEL_24:
  ReferenceCounted::Release((ReferenceCounted *)(v25 + 64), v22, v24);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v5 + 10) + 72LL), 1u);
  v25 = *((_QWORD *)v5 + 10);
  v44 = *(_QWORD *)(v25 + 24);
  if ( v44 != v25 + 24 )
  {
    v45 = (struct DMMVIDEOPRESENTTARGET *)(v44 - 8);
    if ( v45 )
    {
      while ( 1 )
      {
        v46 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, PagedPool);
        if ( v46 )
          v51 = DMMVIDPNTARGET::DMMVIDPNTARGET(v46, *v9, v45);
        else
          v51 = 0LL;
        v86 = v51;
        if ( !v51 )
        {
          v77 = WdLogNewEntry5_WdLowResource(v48, v47, v49, v50);
          WdLogEvent5_WdLowResource(v77);
          *((_DWORD *)this + 20) = -1073741801;
          goto LABEL_52;
        }
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v51 + 8))((__int64)v51 + 64) )
          break;
        v54 = *v9;
        v86 = 0LL;
        v82 = v51;
        v56 = DMMVIDPNTARGETSET::AddTarget(v54, &v82);
        if ( v56 < 0 )
        {
          v78 = WdLogNewEntry5_WdError(v55, v42, v43);
          WdLogEvent5_WdError(v78);
          *((_DWORD *)this + 20) = v56;
          goto LABEL_52;
        }
        v57 = *((_QWORD *)v45 + 1);
        v45 = (struct DMMVIDEOPRESENTTARGET *)(v57 - 8);
        if ( v57 == v25 + 24 )
          v45 = 0LL;
        if ( !v45 )
          goto LABEL_34;
      }
      v79 = WdLogNewEntry5_WdDmmEvent(v53, v52);
      *(_QWORD *)(v79 + 24) = this;
      WdLogEvent5_WdDmmEvent(v79);
      *((_DWORD *)this + 20) = *((_DWORD *)v51 + 18);
LABEL_52:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v86);
LABEL_53:
      ReferenceCounted::Release((ReferenceCounted *)(v25 + 64), v75, v76);
      return this;
    }
  }
LABEL_34:
  ReferenceCounted::Release((ReferenceCounted *)(v25 + 64), v42, v43);
  LOBYTE(v60) = *((_BYTE *)this + 172);
  if ( ((unsigned __int16)((2 << v60) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    v80 = WdLogNewEntry5_WdAssertion(v60, v58);
    WdLogEvent5_WdAssertion(v80);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v83,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0,
    v59,
    v81,
    1uLL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v83, v61);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v63, v62) + 24) = this;
  return this;
}
