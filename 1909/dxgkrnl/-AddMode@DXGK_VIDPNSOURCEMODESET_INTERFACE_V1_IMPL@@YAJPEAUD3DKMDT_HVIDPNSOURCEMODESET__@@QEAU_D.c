/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0100AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C000D8AC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0016CF8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0049464 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C02BE864 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        const GUID *a3)
{
  int v3; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rbx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v20; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v21; // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  char *v25; // r11
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v26; // r9
  _QWORD *v27; // r15
  __int64 v28; // r8
  char *v29; // rdi
  int v30; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // edi
  __int64 v57; // rax
  DMMVIDPN *Container; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // [rsp+20h] [rbp-48h] BYREF
  __int64 v96; // [rsp+28h] [rbp-40h]
  char v97; // [rsp+30h] [rbp-38h]
  __int64 (__fastcall ***v98)(_QWORD, __int64); // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  v95 = -1;
  v96 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v97 = 1;
    v95 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7006);
  }
  else
  {
    v97 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v95, 7006LL);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = this;
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v43 + 24) = 0LL;
    *(_QWORD *)(v43 + 32) = this;
    WdLogEvent5_WdError(v43);
    v3 = -1071774960;
    goto LABEL_56;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v94 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v94 + 24) = this;
    WdLogEvent5_WdError(v94);
    v3 = -1071774968;
    goto LABEL_56;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v44 = *((_QWORD *)this + 14);
    v45 = *(_QWORD *)(v44 + 40);
    if ( !v45 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v9);
      WdLogEvent5_WdAssertion(v46);
      v45 = *(_QWORD *)(v44 + 40);
    }
    v49 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v45 + 64, v9) + 48);
    v50 = *(_QWORD *)(v49 + 8);
    if ( !v50 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v48, v47);
      WdLogEvent5_WdAssertion(v51);
      v50 = *(_QWORD *)(v49 + 8);
    }
    v52 = *(_QWORD *)(v50 + 16);
    if ( *(int *)(v52 + 2452) < 1200 && *(_BYTE *)(v52 + 2464) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v52, v47);
      WdLogEvent5_WdAssertion(v53);
      v3 = -1071774960;
      goto LABEL_56;
    }
    v54 = *((_QWORD *)this + 14);
    v55 = *(_QWORD *)(v54 + 40);
    v56 = *(_DWORD *)(v54 + 24);
    if ( !v55 )
    {
      v57 = WdLogNewEntry5_WdAssertion(0LL, v47);
      WdLogEvent5_WdAssertion(v57);
      v55 = *(_QWORD *)(v54 + 40);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v55 + 64, v47);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v56) )
    {
      v62 = WdLogNewEntry5_WdError(v60, v59, v61);
      WdLogEvent5_WdError(v62);
      v3 = -1071774960;
      goto LABEL_56;
    }
  }
  v12 = operator new[](0x70uLL, 0x4E506456u, PagedPool);
  v17 = (__int64)v12;
  if ( v12 )
  {
    v18 = *(_DWORD *)a2;
    v12[1] = 0LL;
    v12[2] = 0LL;
    *v12 = &SetElement::`vftable';
    *((_DWORD *)v12 + 6) = v18;
    if ( (_DWORD)v18 == -1 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v18, v13);
      *(_QWORD *)(v63 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v63);
    }
    *(_QWORD *)(v17 + 40) = 0LL;
    *(_DWORD *)(v17 + 56) = 1833173006;
    *(_QWORD *)v17 = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_DWORD *)(v17 + 72) = 0;
    *(_QWORD *)(v17 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v17 + 48) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
    *(_QWORD *)(v17 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset((void *)(v17 + 76), 0, 0x20uLL);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = (void (__fastcall ***)(_QWORD, __int64))v17;
  if ( !v17 )
  {
    v64 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v64 + 24) = this;
    WdLogEvent5_WdLowResource(v64);
    v3 = -1073741801;
    goto LABEL_115;
  }
  v20 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)a2 + 1);
  if ( (_DWORD)v20 == 1 )
  {
LABEL_13:
    v21 = a2 + 2;
    if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v20, v13, v15);
      v90[3] = *(_DWORD *)v21;
      v90[4] = *((unsigned int *)a2 + 3);
      v90[5] = v21;
      WdLogEvent5_WdError(v90);
      v3 = -1071774918;
    }
    else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v20, v13, v15);
      v89[3] = *((unsigned int *)a2 + 4);
      v89[4] = *((unsigned int *)a2 + 5);
      v89[5] = v21;
      WdLogEvent5_WdError(v89);
      v3 = -1071774917;
    }
    else if ( *((_DWORD *)a2 + 6) )
    {
      if ( *((_DWORD *)a2 + 7) )
      {
        v22 = *((_DWORD *)a2 + 8);
        if ( v22 && v22 <= 5 )
        {
          v23 = *((_DWORD *)a2 + 9);
          if ( v23 && v23 <= 3 )
          {
            *(_DWORD *)(v17 + 72) = (_DWORD)v20;
            *(_OWORD *)(v17 + 76) = *(_OWORD *)v21;
            *(_OWORD *)(v17 + 92) = *(_OWORD *)(a2 + 6);
            goto LABEL_24;
          }
          v87 = WdLogNewEntry5_WdError(v20, v13, v15);
          *(_QWORD *)(v87 + 24) = *((int *)a2 + 9);
          *(_QWORD *)(v87 + 32) = v21;
          WdLogEvent5_WdError(v87);
          v3 = -1071774913;
        }
        else
        {
          v88 = WdLogNewEntry5_WdError(v20, v13, v15);
          *(_QWORD *)(v88 + 24) = *((int *)a2 + 8);
          *(_QWORD *)(v88 + 32) = v21;
          WdLogEvent5_WdError(v88);
          v3 = -1071774914;
        }
      }
      else
      {
        v70 = WdLogNewEntry5_WdError(v20, v13, v15);
        *(_QWORD *)(v70 + 24) = *((int *)a2 + 7);
        *(_QWORD *)(v70 + 32) = v21;
        WdLogEvent5_WdError(v70);
        v3 = -1071774915;
      }
    }
    else
    {
      v66 = WdLogNewEntry5_WdError(v20, v13, v15);
      *(_QWORD *)(v66 + 24) = *((unsigned int *)a2 + 6);
      *(_QWORD *)(v66 + 32) = v21;
      WdLogEvent5_WdError(v66);
      v3 = -1071774916;
    }
    v91 = WdLogNewEntry5_WdWarning(v68, v67, v69);
    WdLogEvent5_WdWarning(v91);
    v79 = (_QWORD *)WdLogNewEntry5_WdTrace(v93, v92);
    v79[3] = v17;
    goto LABEL_114;
  }
  if ( (_DWORD)v20 != 2 )
  {
    if ( (int)v20 <= 2 || (int)v20 > 4 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v20, v13, v15);
      v65[3] = v17;
      v65[4] = this;
      v65[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v65);
      v3 = -1071774960;
      goto LABEL_115;
    }
    goto LABEL_13;
  }
  *(_DWORD *)(v17 + 72) = 2;
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v17 + 76) = a2[2];
LABEL_24:
  v24 = *(unsigned int *)(v17 + 24);
  v25 = (char *)this + 32;
  v26 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
  v27 = (_QWORD *)((char *)this + 48);
  v98 = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
  v28 = 0LL;
  v19 = 0LL;
  if ( v26 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
    v28 = (__int64)v26 - 8;
  while ( v28 )
  {
    if ( *(_DWORD *)(v28 + 24) == (_DWORD)v24 )
    {
      v71 = 2 - (DMMVIDPNSOURCEMODE::operator==(v28, v17) != 0);
      goto LABEL_98;
    }
    v20 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v28 + 8);
    v28 = (__int64)v20 - 8;
    if ( v20 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      v28 = 0LL;
  }
  v29 = 0LL;
  if ( v26 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
    v29 = (char *)v26 - 8;
  if ( !v29 )
  {
LABEL_41:
    v32 = (_QWORD *)*v27;
    v33 = 0LL;
    v34 = *v27 - 8LL;
    if ( (_QWORD *)*v27 != v27 )
      v33 = *v27 - 8LL;
    if ( !v33 )
      goto LABEL_49;
    do
    {
      if ( v33 == v17 )
        break;
      v34 = *(_QWORD *)(v33 + 8);
      v33 = v34 - 8;
      if ( (_QWORD *)v34 == v27 )
        v33 = 0LL;
    }
    while ( v33 );
    if ( v33 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v34, v32);
      *(_QWORD *)(v80 + 24) = 108LL;
      WdLogEvent5_WdAssertion(v80);
      v25 = (char *)this + 32;
    }
    else
    {
LABEL_49:
      v35 = (_QWORD *)*((_QWORD *)this + 7);
      v36 = (_QWORD *)(v17 + 8);
      if ( (_QWORD *)*v35 != v27 )
        __fastfail(3u);
      *v36 = v27;
      *(_QWORD *)(v17 + 16) = v35;
      *v35 = v36;
      *((_QWORD *)this + 7) = v36;
      ++*((_QWORD *)v25 + 4);
    }
    if ( *(_QWORD *)(v17 + 40) )
    {
      v81 = WdLogNewEntry5_WdAssertion(v35, v32);
      WdLogEvent5_WdAssertion(v81);
      v25 = (char *)this + 32;
    }
    v37 = a2 - 4;
    *(_QWORD *)(v17 + 40) = this;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v38 = *((_QWORD *)v37 + 1);
      if ( !v38
        || DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
             (__int64)v25,
             v38) )
      {
        operator delete(a2 - 4);
      }
      else
      {
        v86 = WdLogNewEntry5_WdError(v84, v83, v85);
        *(_QWORD *)(v86 + 24) = v37;
        *(_QWORD *)(v86 + 32) = this;
        WdLogEvent5_WdError(v86);
        v3 = -1071774928;
      }
    }
    else
    {
      v82 = WdLogNewEntry5_WdError(v35, v32, v28);
      *(_QWORD *)(v82 + 24) = v37;
      WdLogEvent5_WdError(v82);
      v3 = -1071774960;
    }
    goto LABEL_56;
  }
  while ( 1 )
  {
    v30 = *((_DWORD *)v29 + 18);
    if ( v30 != *(_DWORD *)(v17 + 72) )
      goto LABEL_37;
    if ( v30 == 1 )
      goto LABEL_36;
    if ( v30 != 2 )
      break;
    v20 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)v29 + 19);
    if ( (_DWORD)v20 == *(_DWORD *)(v17 + 76) )
      goto LABEL_97;
LABEL_37:
    v31 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v29 + 1);
    v29 = (char *)v31 - 8;
    if ( v31 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      v29 = 0LL;
    if ( !v29 )
    {
      v25 = (char *)this + 32;
      goto LABEL_41;
    }
  }
  if ( v30 <= 2 || v30 > 4 )
  {
    if ( (unsigned int)(v30 - 1) <= 3 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v20, v24);
      WdLogEvent5_WdAssertion(v72);
    }
    goto LABEL_37;
  }
LABEL_36:
  if ( *((_DWORD *)v29 + 19) != *(_DWORD *)(v17 + 76)
    || *((_DWORD *)v29 + 20) != *(_DWORD *)(v17 + 80)
    || *((_DWORD *)v29 + 21) != *(_DWORD *)(v17 + 84)
    || *((_DWORD *)v29 + 22) != *(_DWORD *)(v17 + 88)
    || *((_DWORD *)v29 + 23) != *(_DWORD *)(v17 + 92)
    || *((_DWORD *)v29 + 24) != *(_DWORD *)(v17 + 96)
    || *((_DWORD *)v29 + 25) != *(_DWORD *)(v17 + 100)
    || *((_DWORD *)v29 + 26) != *(_DWORD *)(v17 + 104) )
  {
    goto LABEL_37;
  }
LABEL_97:
  v71 = 1;
LABEL_98:
  v73 = (unsigned int)(v71 - 1);
  if ( (_DWORD)v73 )
  {
    if ( (_DWORD)v73 == 1 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v73, v24, v28);
      v75[3] = *(unsigned int *)(v17 + 24);
      v75[4] = v17;
      v75[5] = this;
      WdLogEvent5_WdError(v75);
      v3 = -1071774940;
    }
    else
    {
      v74 = WdLogNewEntry5_WdError(v73, v24, v28);
      WdLogEvent5_WdError(v74);
      v3 = -1073741823;
    }
  }
  else
  {
    v76 = WdLogNewEntry5_WdTrace(v73, v24);
    v3 = -1071774956;
    *(_QWORD *)(v76 + 24) = v17;
    *(_QWORD *)(v76 + 32) = this;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v98);
  v79 = (_QWORD *)WdLogNewEntry5_WdTrace(v78, v77);
  v79[3] = a2;
LABEL_114:
  v79[5] = v3;
  v79[4] = this;
LABEL_115:
  if ( v19 )
    (**v19)(v19, 1LL);
LABEL_56:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v39);
  if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v95);
  return (unsigned int)v3;
}
