/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021AD90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA3C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C011A500 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C011A6D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C020739C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C020B8D4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C021A57C (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  struct _EX_RUNDOWN_REF **v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  struct DXGDEVICE *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGCONTEXT *v35; // r15
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  struct DXGCONTEXT *v39; // rcx
  unsigned int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // r12
  struct DXGALLOCATION *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct DXGCONTEXT *v48; // r12
  __int64 v49; // rax
  const unsigned __int8 *v50; // rdi
  const unsigned __int8 *v51; // rcx
  const unsigned __int8 *v52; // r14
  int v53; // esi
  unsigned int v54; // esi
  __int64 v55; // r10
  const unsigned __int8 *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  const unsigned __int8 *v62; // r9
  __int64 v63; // r11
  unsigned int v64; // eax
  unsigned int v65; // eax
  int v66; // edx
  unsigned int v67; // eax
  LONG v68; // ecx
  int v69; // edx
  unsigned __int8 v70; // al
  const unsigned __int8 *v71; // r9
  __int64 v72; // rdx
  unsigned int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rcx
  unsigned int v76; // eax
  const unsigned __int8 *v77; // r9
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  const unsigned __int8 *v84; // r9
  __int64 v85; // r11
  unsigned int v86; // eax
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  _BYTE *v91; // rcx
  __int64 v92; // rax
  const GUID *v93; // r8
  __int64 v94; // rax
  unsigned __int8 v96; // [rsp+60h] [rbp-A8h]
  char v97; // [rsp+68h] [rbp-A0h]
  unsigned int v98; // [rsp+70h] [rbp-98h]
  unsigned int v99; // [rsp+70h] [rbp-98h]
  unsigned __int8 **v100; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION **v101; // [rsp+88h] [rbp-80h]
  _BYTE v102[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v103[16]; // [rsp+A0h] [rbp-68h] BYREF
  int v104; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v105; // [rsp+B4h] [rbp-54h] BYREF
  struct DXGCONTEXT *v106; // [rsp+B8h] [rbp-50h] BYREF
  int v107; // [rsp+C0h] [rbp-48h]
  struct tagRECT v108; // [rsp+C8h] [rbp-40h] BYREF
  const unsigned __int8 *v109; // [rsp+D8h] [rbp-30h]
  _BYTE v110[24]; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v111; // [rsp+F8h] [rbp-10h] BYREF
  char v112; // [rsp+100h] [rbp-8h] BYREF
  int v113; // [rsp+200h] [rbp+F8h]
  PVOID P; // [rsp+208h] [rbp+100h] BYREF
  char v115; // [rsp+210h] [rbp+108h] BYREF
  int v116; // [rsp+310h] [rbp+208h]
  _QWORD v117[48]; // [rsp+318h] [rbp+210h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v110,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 1718LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_150;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v11 = v7;
  if ( !v7 )
    goto LABEL_150;
  v111 = 0LL;
  v113 = 0;
  v12 = 0LL;
  P = 0LL;
  v116 = 0;
  v104 = -1073741811;
  v13 = *(unsigned int *)(v7 + 32);
  v105 = 0;
  v107 = 0;
  v5 = 1;
  if ( (unsigned int)v13 > 0x100 )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = 1735LL;
LABEL_140:
    WdLogEvent5_WdError(v14);
    goto LABEL_141;
  }
  v15 = *(unsigned int *)(v11 + 28);
  if ( (unsigned int)v15 > 0x10000 )
  {
    v14 = WdLogNewEntry5_WdError(v15, v8, v10);
    *(_QWORD *)(v14 + 24) = 1740LL;
    goto LABEL_140;
  }
  v16 = 8 * v13;
  if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF )
  {
    v14 = WdLogNewEntry5_WdError(v15, v8, v10);
    *(_QWORD *)(v14 + 24) = 1745LL;
    goto LABEL_140;
  }
  v17 = v16 + 56;
  if ( v16 >= 0xFFFFFFC8 )
  {
    v14 = WdLogNewEntry5_WdError(v15, v8, v10);
    *(_QWORD *)(v14 + 24) = 1750LL;
    goto LABEL_140;
  }
  v18 = (unsigned int)v15 + v17;
  if ( (unsigned int)v18 < v17 )
  {
    v14 = WdLogNewEntry5_WdError(v15, v18, v10);
    *(_QWORD *)(v14 + 24) = 1755LL;
    goto LABEL_140;
  }
  if ( (unsigned int)v18 > *((_DWORD *)a1 + 22) )
  {
    v14 = WdLogNewEntry5_WdError(v15, v18, v10);
    *(_QWORD *)(v14 + 24) = 1760LL;
    goto LABEL_140;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x20) == 0 )
  {
    v14 = WdLogNewEntry5_WdError(v15, v18, v10);
    *(_QWORD *)(v14 + 24) = 1765LL;
    goto LABEL_140;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v102,
    *(_DWORD *)(v11 + 24),
    *((struct _KTHREAD ***)a1 + 6),
    &v106,
    0);
  if ( !v106 )
  {
    v22 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = *(unsigned int *)(v11 + 24);
    WdLogEvent5_WdError(v22);
LABEL_17:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
    goto LABEL_141;
  }
  if ( (*((_DWORD *)v106 + 103) & 0x10) != 0 )
  {
    v26 = 0LL;
    if ( *((struct DXGCONTEXT **)v106 + 52) != (struct DXGCONTEXT *)((char *)v106 + 416) )
      v26 = *((_QWORD *)v106 + 52);
    v107 = *(_DWORD *)(v26 + 24);
  }
  v27 = (struct DXGDEVICE *)*((_QWORD *)v106 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v103, v27);
  v101 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                    &v111,
                                    *(_DWORD *)(v11 + 32));
  v12 = (struct _EX_RUNDOWN_REF **)v101;
  if ( !v101 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = 1792LL;
LABEL_25:
    WdLogEvent5_WdWarning(v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v103);
    goto LABEL_17;
  }
  v106 = (struct DXGCONTEXT *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, *(_DWORD *)(v11 + 32));
  v35 = v106;
  if ( !v106 )
  {
    v31 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v31 + 24) = 1798LL;
    goto LABEL_25;
  }
  v105 = *(_DWORD *)(v11 + 32);
  v36 = DxgkReferenceAllocationList(&v105, (struct _D3DDDI_ALLOCATIONLIST *)(v11 + 56), v101, v27);
  v39 = 0LL;
  v104 = v36;
  if ( v36 < 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(0LL, v37, v38);
    *(_QWORD *)(v31 + 24) = 1805LL;
    goto LABEL_25;
  }
  v40 = 0;
  v41 = *((_QWORD *)v27 + 2);
  v42 = *(_QWORD *)(v41 + 552);
  if ( *(_DWORD *)(v11 + 32) )
  {
    do
    {
      v43 = v101[v40];
      if ( !v43 )
      {
        v47 = WdLogNewEntry5_WdWarning(v39, v37, v38);
        *(_QWORD *)(v47 + 24) = 1814LL;
        WdLogEvent5_WdWarning(v47);
        goto LABEL_42;
      }
      if ( *((struct DXGDEVICE **)v43 + 1) != v27 )
      {
        v46 = WdLogNewEntry5_WdError(v39, v37, v38);
        *(_QWORD *)(v46 + 24) = 1819LL;
        goto LABEL_40;
      }
      v44 = *((_QWORD *)v43 + 3);
      if ( !v44 )
      {
        v46 = WdLogNewEntry5_WdError(v39, 0LL, v38);
        *(_QWORD *)(v46 + 24) = 1824LL;
        goto LABEL_40;
      }
      v45 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 544LL)
                                                                            + 8LL)
                                                                + 624LL))(
              v42,
              v44,
              0LL);
      v39 = v106;
      *((_QWORD *)v106 + v40) = v45;
      if ( !v45 )
      {
        v46 = WdLogNewEntry5_WdError(v39, v37, v38);
        *(_QWORD *)(v46 + 24) = 1833LL;
        goto LABEL_40;
      }
      ++v40;
    }
    while ( v40 < *(_DWORD *)(v11 + 32) );
    v41 = *((_QWORD *)v27 + 2);
    v35 = v39;
  }
  v48 = *(struct DXGCONTEXT **)(v41 + 16);
  v106 = v48;
  if ( (*((_DWORD *)v48 + 475) & 4) == 0 )
  {
    v49 = WdLogNewEntry5_WdError(v39, v37, v38);
    *(_QWORD *)(v49 + 24) = 1841LL;
    WdLogEvent5_WdError(v49);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v103);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
    v12 = (struct _EX_RUNDOWN_REF **)v101;
    v5 = 1;
    goto LABEL_141;
  }
  v50 = (const unsigned __int8 *)(v16 + v11 + 56);
  v51 = &v50[*(unsigned int *)(v11 + 28)];
  v52 = v50;
  v53 = (_DWORD)v50 + *(_DWORD *)(v11 + 28);
  v109 = v51;
  v54 = v53 - (_DWORD)v50;
  if ( !v54 )
  {
    v5 = 1;
LABEL_136:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v103);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
    memset(v117, 0, 0x178uLL);
    LODWORD(v117[0]) = v107;
    LODWORD(v117[1]) = *(_DWORD *)(v11 + 24);
    LODWORD(v117[2]) = *(_DWORD *)(v11 + 28);
    v117[6] = v11 + 56;
    HIDWORD(v117[2]) = *(_DWORD *)(v11 + 32);
    HIDWORD(v117[9]) = *(_DWORD *)(v11 + 48);
    v117[4] = v50;
    v104 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v117, 0LL, v93);
    goto LABEL_43;
  }
  while ( v54 >= 8 )
  {
    v55 = *((unsigned int *)v52 + 1);
    v56 = v52;
    if ( v54 < (unsigned int)v55 )
    {
      v46 = WdLogNewEntry5_WdError(v51, v52, v38);
      *(_QWORD *)(v46 + 24) = 1863LL;
      goto LABEL_40;
    }
    v54 -= v55;
    v52 += v55;
    if ( v52 > v51 || (unsigned int)v55 > *(_DWORD *)(v11 + 28) )
    {
      v46 = WdLogNewEntry5_WdError(v51, v56, v38);
      *(_QWORD *)(v46 + 24) = 1870LL;
      goto LABEL_40;
    }
    v57 = (unsigned int)(*(_DWORD *)v56 - 1);
    if ( *(_DWORD *)v56 != 1 )
    {
      v58 = (unsigned int)(*(_DWORD *)v56 - 2);
      if ( *(_DWORD *)v56 == 2 )
      {
        v77 = v56 + 8;
        if ( (unsigned int)v55 < 0x28 )
        {
          v46 = WdLogNewEntry5_WdError(v58, v56, v38);
          *(_QWORD *)(v46 + 24) = 1937LL;
          goto LABEL_40;
        }
        v78 = *((unsigned int *)v56 + 6);
        if ( (unsigned int)v78 >= *(_DWORD *)(v11 + 32) )
        {
          v46 = WdLogNewEntry5_WdError(v58, v56, v78);
          *(_QWORD *)(v46 + 24) = 1942LL;
          goto LABEL_40;
        }
        v79 = *((unsigned __int16 *)v56 + 22);
        if ( (unsigned __int16)(v79 - 1) > 6u )
        {
          v46 = WdLogNewEntry5_WdError(v79, v56, v78);
          *(_QWORD *)(v46 + 24) = 1947LL;
          goto LABEL_40;
        }
        if ( (_WORD)v79 == 7 )
        {
          v80 = 0LL;
          if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 145LL) || (*((_DWORD *)v48 + 475) & 0x100000) == 0 )
          {
            v46 = WdLogNewEntry5_WdError(0LL, v56, v78);
            *(_QWORD *)(v46 + 24) = 1954LL;
            goto LABEL_40;
          }
          v81 = *((unsigned __int16 *)v56 + 23);
          v82 = (unsigned __int8)v81;
          v83 = v81 >> 8;
          LOBYTE(v80) = gajRop3[v82];
          if ( (((unsigned __int8)v80 | gajRop3[v83]) & 0xFC) != 0 )
          {
            v46 = WdLogNewEntry5_WdError(v80, v83, v78);
            *(_QWORD *)(v46 + 24) = 1960LL;
            goto LABEL_40;
          }
        }
        else if ( *((_WORD *)v56 + 23) )
        {
          v46 = WdLogNewEntry5_WdError(v79, v56, v78);
          *(_QWORD *)(v46 + 24) = 1968LL;
          goto LABEL_40;
        }
        v70 = ValidateGdiCommand(
                40LL,
                (unsigned int)v55,
                v50,
                v77,
                *(const unsigned __int8 **)(v11 + 40),
                *((_QWORD *)v35 + v78),
                0LL,
                (const struct tagRECT *)v77,
                0LL,
                0,
                0,
                v96,
                0,
                *((_DWORD *)v77 + 5),
                (unsigned __int8 **)v77 + 3);
        goto LABEL_92;
      }
      v59 = (unsigned int)(*(_DWORD *)v56 - 3);
      if ( *(_DWORD *)v56 == 3 )
      {
        v71 = v56 + 8;
        if ( (unsigned int)v55 < 0x40 )
        {
          v46 = WdLogNewEntry5_WdError(v59, v56, v38);
          *(_QWORD *)(v46 + 24) = 1993LL;
          goto LABEL_40;
        }
        v72 = *((unsigned int *)v56 + 10);
        v76 = *(_DWORD *)(v11 + 32);
        if ( (unsigned int)v72 >= v76 || (v38 = *((unsigned int *)v71 + 9), (unsigned int)v38 >= v76) )
        {
          v46 = WdLogNewEntry5_WdError(v59, v72, v38);
          *(_QWORD *)(v46 + 24) = 1999LL;
          goto LABEL_40;
        }
      }
      else
      {
        v60 = (unsigned int)(*(_DWORD *)v56 - 4);
        if ( *(_DWORD *)v56 != 4 )
        {
          v61 = (unsigned int)(*(_DWORD *)v56 - 6);
          if ( *(_DWORD *)v56 != 6 )
          {
            if ( *(_DWORD *)v56 != 7 )
            {
              v46 = WdLogNewEntry5_WdError(v61, v56, v38);
              *(_QWORD *)(v46 + 24) = 2142LL;
              goto LABEL_40;
            }
            v62 = v56 + 8;
            if ( (unsigned int)v55 < 0x48 )
            {
              v46 = WdLogNewEntry5_WdError(v61, v56, v38);
              *(_QWORD *)(v46 + 24) = 2094LL;
              goto LABEL_40;
            }
            v63 = *((unsigned int *)v56 + 8);
            v64 = *(_DWORD *)(v11 + 32);
            if ( (unsigned int)v63 >= v64
              || *((_DWORD *)v56 + 7) >= v64
              || (v61 = *((unsigned int *)v56 + 6), (unsigned int)v61 >= v64)
              || (v38 = *((unsigned int *)v56 + 9), (unsigned int)v38 >= v64) )
            {
              v46 = WdLogNewEntry5_WdError(v61, v56, v38);
              *(_QWORD *)(v46 + 24) = 2102LL;
              goto LABEL_40;
            }
            v65 = *((_DWORD *)v56 + 13);
            if ( v65 != -1 )
            {
              if ( v65 > 0xF )
              {
                v46 = WdLogNewEntry5_WdError(v61, 0xFFFFFFFFLL, v38);
                *(_QWORD *)(v46 + 24) = 2109LL;
                goto LABEL_40;
              }
              if ( *((_QWORD *)v35 + v61) < 0x2000uLL )
              {
                v46 = WdLogNewEntry5_WdError(v61, 0xFFFFFFFFLL, v38);
                *(_QWORD *)(v46 + 24) = 2114LL;
                goto LABEL_40;
              }
            }
            v66 = *((_DWORD *)v56 + 10);
            v98 = *((_DWORD *)v62 + 12);
            v67 = *((_DWORD *)v62 + 16);
            v108.left = v66 + *(_DWORD *)v62;
            v68 = v66 + *((_DWORD *)v62 + 2);
            v69 = *((_DWORD *)v62 + 9);
            v108.right = v68;
            v108.top = v69 + *((_DWORD *)v62 + 1);
            v108.bottom = v69 + *((_DWORD *)v62 + 3);
            v70 = ValidateGdiCommand(
                    72LL,
                    (unsigned int)v55,
                    v50,
                    v62,
                    *(const unsigned __int8 **)(v11 + 40),
                    *((_QWORD *)v35 + v38),
                    *((_QWORD *)v35 + v63),
                    (const struct tagRECT *)v62,
                    &v108,
                    0,
                    v67,
                    v96,
                    0,
                    v98,
                    (unsigned __int8 **)v62 + 7);
            goto LABEL_92;
          }
          v71 = v56 + 8;
          if ( (unsigned int)v55 < 0x40 )
          {
            v46 = WdLogNewEntry5_WdError(v61, v56, v38);
            *(_QWORD *)(v46 + 24) = 2064LL;
            goto LABEL_40;
          }
          v72 = *((unsigned int *)v56 + 10);
          v73 = *(_DWORD *)(v11 + 32);
          if ( (unsigned int)v72 >= v73 || (v38 = *((unsigned int *)v71 + 9), (unsigned int)v38 >= v73) )
          {
            v46 = WdLogNewEntry5_WdError(v61, v72, v38);
            *(_QWORD *)(v46 + 24) = 2070LL;
            goto LABEL_40;
          }
          v100 = (unsigned __int8 **)(v71 + 48);
          v99 = *((_DWORD *)v71 + 11);
          v97 = 0;
LABEL_70:
          v70 = ValidateGdiCommand(
                  64LL,
                  (unsigned int)v55,
                  v50,
                  v71,
                  *(const unsigned __int8 **)(v11 + 40),
                  *((_QWORD *)v35 + v38),
                  *((_QWORD *)v35 + v72),
                  (const struct tagRECT *)v71 + 1,
                  (const struct tagRECT *)v71,
                  0,
                  *((_DWORD *)v71 + 15),
                  v96,
                  v97,
                  v99,
                  v100);
LABEL_92:
          if ( !v70 )
            goto LABEL_42;
          v5 = 1;
          goto LABEL_105;
        }
        v71 = v56 + 8;
        if ( (unsigned int)v55 < 0x40 )
        {
          v46 = WdLogNewEntry5_WdError(v60, v56, v38);
          *(_QWORD *)(v46 + 24) = 2023LL;
          goto LABEL_40;
        }
        v72 = *((unsigned int *)v56 + 11);
        v74 = *(_DWORD *)(v11 + 32);
        if ( (unsigned int)v72 >= v74 || (v38 = *((unsigned int *)v71 + 8), (unsigned int)v38 >= v74) )
        {
          v46 = WdLogNewEntry5_WdError(v60, v72, v38);
          *(_QWORD *)(v46 + 24) = 2029LL;
          goto LABEL_40;
        }
        v75 = *((unsigned int *)v71 + 14);
        if ( (_WORD)v75 != 3 )
        {
          v46 = WdLogNewEntry5_WdError(v75, v72, v38);
          *(_QWORD *)(v46 + 24) = 2034LL;
          goto LABEL_40;
        }
        if ( (v75 & 0x30000) != 0 && (*((_DWORD *)v48 + 475) & 0x200000) == 0 )
        {
          v46 = WdLogNewEntry5_WdError(v75, v72, v38);
          *(_QWORD *)(v46 + 24) = 2040LL;
          goto LABEL_40;
        }
      }
      v100 = (unsigned __int8 **)(v71 + 48);
      v99 = *((_DWORD *)v71 + 10);
      v97 = 1;
      goto LABEL_70;
    }
    v84 = v56 + 8;
    if ( (unsigned int)v55 < 0x48 )
    {
      v46 = WdLogNewEntry5_WdError(v57, v56, v38);
      *(_QWORD *)(v46 + 24) = 1880LL;
      goto LABEL_40;
    }
    v85 = *((unsigned int *)v56 + 10);
    v86 = *(_DWORD *)(v11 + 32);
    if ( (unsigned int)v85 >= v86 || (v38 = *((unsigned int *)v56 + 11), (unsigned int)v38 >= v86) )
    {
      v46 = WdLogNewEntry5_WdError(v57, v56, v38);
      *(_QWORD *)(v46 + 24) = 1886LL;
      goto LABEL_40;
    }
    v87 = *((unsigned __int16 *)v56 + 32);
    v5 = 1;
    if ( (unsigned __int16)(v87 - 1) > 4u )
    {
      v92 = WdLogNewEntry5_WdError(v87, 4LL, v38);
      *(_QWORD *)(v92 + 24) = 1891LL;
      goto LABEL_128;
    }
    if ( (_WORD)v87 == 5 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 145LL) || (*((_DWORD *)v106 + 475) & 0x100000) == 0 )
      {
        v92 = WdLogNewEntry5_WdError(0LL, 4LL, v38);
        *(_QWORD *)(v92 + 24) = 1898LL;
        goto LABEL_128;
      }
      v91 = gajRop3;
      v88 = *((unsigned __int16 *)v56 + 33);
      v89 = (unsigned __int8)v88;
      v90 = v88 >> 8;
      LOBYTE(v91) = gajRop3[v89];
      if ( (((unsigned __int8)v91 | gajRop3[v90]) & 0xE8) != 0 )
      {
        v92 = WdLogNewEntry5_WdError(v91, v90, v38);
        *(_QWORD *)(v92 + 24) = 1903LL;
LABEL_128:
        WdLogEvent5_WdError(v92);
LABEL_129:
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v103);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
        goto LABEL_43;
      }
    }
    else if ( *((_WORD *)v56 + 33) )
    {
      v92 = WdLogNewEntry5_WdError(0LL, 4LL, v38);
      *(_QWORD *)(v92 + 24) = 1911LL;
      goto LABEL_128;
    }
    if ( !ValidateGdiCommand(
            72LL,
            (unsigned int)v55,
            v50,
            v84,
            *(const unsigned __int8 **)(v11 + 40),
            *((_QWORD *)v35 + v38),
            *((_QWORD *)v35 + v85),
            (const struct tagRECT *)v84 + 1,
            (const struct tagRECT *)v84,
            *((_DWORD *)v84 + 16),
            *((_DWORD *)v84 + 15),
            v96,
            0,
            *((_DWORD *)v84 + 10),
            (unsigned __int8 **)v84 + 6) )
      goto LABEL_129;
LABEL_105:
    if ( !v54 )
      goto LABEL_136;
    v51 = v109;
    v48 = v106;
  }
  v46 = WdLogNewEntry5_WdError(v51, v37, v38);
  *(_QWORD *)(v46 + 24) = 1857LL;
LABEL_40:
  WdLogEvent5_WdError(v46);
LABEL_42:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v103);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
  v5 = 1;
LABEL_43:
  v12 = (struct _EX_RUNDOWN_REF **)v101;
LABEL_141:
  if ( v104 < 0 )
  {
    v94 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v94 + 24) = v104;
    WdLogEvent5_WdError(v94);
  }
  DxgkUnreferenceAllocationList(v105, v12);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v104, 4u);
  if ( P != &v115 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v116 = 0;
  if ( v111 != &v112 && v111 )
    ExFreePoolWithTag(v111, 0);
  v111 = 0LL;
  v113 = 0;
LABEL_150:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v110);
  return v5;
}
