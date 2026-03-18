/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsHardwareContext@DXGCONTEXT@@QEBA_NXZ @ 0x1C0012E40 (-IsHardwareContext@DXGCONTEXT@@QEBA_NXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0021750 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C0030488 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ @ 0x1C0035860 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01151A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C0115420 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C01D88D8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01DCD24 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C01EA5B4 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  struct DXGADAPTER_VMBUS_PACKET *v2; // r15
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct _EX_RUNDOWN_REF **v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rcx
  DXGCONTEXT *v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  struct DXGDEVICE *v22; // rsi
  int v23; // eax
  __int64 Current; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // edi
  __int64 v39; // rax
  __int64 v40; // r12
  struct DXGALLOCATION *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  DXGCONTEXT *v44; // r11
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  const unsigned __int8 *v48; // rdi
  const unsigned __int8 *v49; // r12
  const unsigned __int8 *v50; // r14
  unsigned int v51; // esi
  __int64 v52; // r10
  const unsigned __int8 *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned __int8 *v59; // r9
  __int64 v60; // r11
  unsigned int v61; // eax
  __int64 v62; // r8
  unsigned int v63; // eax
  int v64; // edx
  unsigned int v65; // eax
  LONG v66; // ecx
  int v67; // edx
  unsigned __int8 v68; // al
  unsigned __int8 *v69; // r9
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // r8
  unsigned int v73; // eax
  __int64 v74; // rcx
  unsigned int v75; // eax
  unsigned __int8 *v76; // r9
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned __int8 *v81; // r9
  __int64 v82; // r11
  unsigned int v83; // eax
  __int64 v84; // r8
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  _BYTE *v87; // rcx
  __int64 v88; // rdx
  const GUID *v89; // r8
  __int64 v90; // rax
  unsigned int v92; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v93; // [rsp+60h] [rbp-A8h]
  char v94; // [rsp+68h] [rbp-A0h]
  unsigned int v95; // [rsp+70h] [rbp-98h]
  unsigned int v96; // [rsp+70h] [rbp-98h]
  unsigned __int8 **v97; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION **v98; // [rsp+88h] [rbp-80h]
  _BYTE v99[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v100[16]; // [rsp+A0h] [rbp-68h] BYREF
  int v101; // [rsp+B0h] [rbp-58h] BYREF
  int v102; // [rsp+B4h] [rbp-54h]
  unsigned int v103; // [rsp+B8h] [rbp-50h] BYREF
  DXGCONTEXT *v104; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v105; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v106; // [rsp+D8h] [rbp-30h]
  _BYTE v107[24]; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v108; // [rsp+F8h] [rbp-10h] BYREF
  char v109; // [rsp+100h] [rbp-8h] BYREF
  int v110; // [rsp+200h] [rbp+F8h]
  PVOID P; // [rsp+208h] [rbp+100h] BYREF
  char v112; // [rsp+210h] [rbp+108h] BYREF
  int v113; // [rsp+310h] [rbp+208h]
  _QWORD v114[48]; // [rsp+318h] [rbp+210h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = a1;
  v106 = a1;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v107, (struct DXGPUSHLOCK *const)(v1 + 216));
  v4 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)v2 + 5) + 157LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = 1735LL;
    WdLogEvent5_WdError(v5);
    goto LABEL_151;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)v2);
  v8 = v6;
  if ( !v6 )
    goto LABEL_151;
  v108 = 0LL;
  v9 = 0LL;
  v110 = 0;
  P = 0LL;
  v113 = 0;
  v103 = 0;
  v102 = 0;
  v4 = 1;
  v101 = -1073741811;
  v10 = *(unsigned int *)(v6 + 32);
  if ( (unsigned int)v10 > 0x100 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = 1752LL;
LABEL_6:
    WdLogEvent5_WdError(v11);
    goto LABEL_142;
  }
  v13 = *(_DWORD *)(v8 + 28);
  if ( v13 > 0x10000 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = 1757LL;
    goto LABEL_6;
  }
  v14 = 8 * v10;
  if ( v14 > 0xFFFFFFFF )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = 1762LL;
    goto LABEL_6;
  }
  v15 = v14;
  if ( (unsigned int)v14 >= 0xFFFFFFC8 )
  {
    v11 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
    *(_QWORD *)(v11 + 24) = 1767LL;
    goto LABEL_6;
  }
  v16 = v14 + 56;
  v17 = v15 + 56;
  if ( v13 + v17 < v17 )
  {
    v11 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v11 + 24) = 1772LL;
    goto LABEL_6;
  }
  if ( v13 + v17 > *((_DWORD *)v2 + 22) )
  {
    v11 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v11 + 24) = 1777LL;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(v8 + 48) & 0x20) == 0 )
  {
    v11 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v11 + 24) = 1782LL;
    goto LABEL_6;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v99,
    *(_DWORD *)(v8 + 24),
    *((struct _KTHREAD ***)v2 + 6),
    &v104,
    0);
  v19 = v104;
  if ( !v104 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = *(unsigned int *)(v8 + 24);
    WdLogEvent5_WdError(v20);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
    goto LABEL_141;
  }
  LOBYTE(v21) = EvaluateCurrentState((int **)&g_Feature_2781386042_58273015_FeatureDescriptorDetails);
  if ( !v21 && DXGCONTEXT::IsHardwareContext(v19) )
  {
    DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v19 + 50, &v105);
    v102 = *(_DWORD *)(DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::ITERATOR::GetCurrent(&v105) + 24);
  }
  v22 = (struct DXGDEVICE *)*((_QWORD *)v19 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100, v22);
  LOBYTE(v23) = EvaluateCurrentState((int **)&g_Feature_2781386042_58273015_FeatureDescriptorDetails);
  if ( v23 && DXGCONTEXT::IsHardwareContext(v19) )
  {
    DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v19 + 50, &v105);
    Current = DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::ITERATOR::GetCurrent(&v105);
    if ( !Current )
    {
      v26 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v26 + 24) = v19;
      WdLogEvent5_WdError(v26);
      v101 = -1073741811;
LABEL_30:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
      goto LABEL_141;
    }
    v102 = *(_DWORD *)(Current + 24);
  }
  v98 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&v108, *(_DWORD *)(v8 + 32));
  v9 = (struct _EX_RUNDOWN_REF **)v98;
  if ( !v98 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = 1829LL;
LABEL_34:
    WdLogEvent5_WdWarning(v30);
    goto LABEL_30;
  }
  v34 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, *(_DWORD *)(v8 + 32));
  if ( !v34 )
  {
    v30 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v30 + 24) = 1835LL;
    goto LABEL_34;
  }
  v103 = *(_DWORD *)(v8 + 32);
  v101 = DxgkReferenceAllocationList(&v103, (struct _D3DDDI_ALLOCATIONLIST *)(v8 + 56), v98, v22);
  if ( v101 < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v30 + 24) = 1842LL;
    goto LABEL_34;
  }
  v38 = 0;
  v39 = *((_QWORD *)v22 + 2);
  v40 = *(_QWORD *)(v39 + 552);
  if ( *(_DWORD *)(v8 + 32) )
  {
    do
    {
      v41 = v98[v38];
      if ( !v41 )
      {
        v47 = WdLogNewEntry5_WdWarning(v36, v35, v37);
        *(_QWORD *)(v47 + 24) = 1851LL;
        WdLogEvent5_WdWarning(v47);
        goto LABEL_50;
      }
      if ( *((struct DXGDEVICE **)v41 + 1) != v22 )
      {
        v46 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v46 + 24) = 1856LL;
        goto LABEL_49;
      }
      v42 = *((_QWORD *)v41 + 3);
      if ( !v42 )
      {
        v46 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v46 + 24) = 1861LL;
        goto LABEL_49;
      }
      v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 544LL)
                                                                            + 8LL)
                                                                + 624LL))(
              v40,
              v42,
              0LL);
      v34[v38] = v43;
      if ( !v43 )
      {
        v46 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v46 + 24) = 1870LL;
        goto LABEL_49;
      }
      ++v38;
    }
    while ( v38 < *(_DWORD *)(v8 + 32) );
    v39 = *((_QWORD *)v22 + 2);
    v2 = v106;
  }
  v44 = *(DXGCONTEXT **)(v39 + 16);
  v104 = v44;
  if ( (*((_DWORD *)v44 + 469) & 4) == 0 )
  {
    v45 = WdLogNewEntry5_WdError(v36);
    *(_QWORD *)(v45 + 24) = 1878LL;
    WdLogEvent5_WdError(v45);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
    v9 = (struct _EX_RUNDOWN_REF **)v98;
    goto LABEL_141;
  }
  v48 = (const unsigned __int8 *)(v15 + v8 + 56);
  v49 = &v48[*(unsigned int *)(v8 + 28)];
  v50 = v48;
  v51 = *(_DWORD *)(v8 + 28);
  if ( !v51 )
  {
LABEL_139:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
    memset(v114, 0, 0x178uLL);
    LODWORD(v114[0]) = v102;
    LODWORD(v114[1]) = *(_DWORD *)(v8 + 24);
    LODWORD(v114[2]) = *(_DWORD *)(v8 + 28);
    v114[6] = v8 + 56;
    HIDWORD(v114[2]) = *(_DWORD *)(v8 + 32);
    HIDWORD(v114[9]) = *(_DWORD *)(v8 + 48);
    v114[4] = v48;
    v101 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v114, v88, v89);
    goto LABEL_140;
  }
  while ( v51 >= 8 )
  {
    v52 = *((unsigned int *)v50 + 1);
    v53 = v50;
    if ( v51 < (unsigned int)v52 )
    {
      v46 = WdLogNewEntry5_WdError(v36);
      *(_QWORD *)(v46 + 24) = 1900LL;
      goto LABEL_49;
    }
    v51 -= v52;
    v50 += v52;
    if ( v50 > v49 || (unsigned int)v52 > *(_DWORD *)(v8 + 28) )
    {
      v46 = WdLogNewEntry5_WdError(v36);
      *(_QWORD *)(v46 + 24) = 1907LL;
      goto LABEL_49;
    }
    v54 = (unsigned int)(*(_DWORD *)v53 - 1);
    if ( *(_DWORD *)v53 == 1 )
    {
      v81 = (unsigned __int8 *)(v53 + 8);
      if ( (unsigned int)v52 < 0x48 )
      {
        v46 = WdLogNewEntry5_WdError(v54);
        *(_QWORD *)(v46 + 24) = 1917LL;
        goto LABEL_49;
      }
      v82 = *((unsigned int *)v53 + 10);
      v83 = *(_DWORD *)(v8 + 32);
      if ( (unsigned int)v82 >= v83 || (v84 = *((unsigned int *)v53 + 11), (unsigned int)v84 >= v83) )
      {
        v46 = WdLogNewEntry5_WdError(v54);
        *(_QWORD *)(v46 + 24) = 1923LL;
        goto LABEL_49;
      }
      v85 = *((unsigned __int16 *)v53 + 32);
      if ( (unsigned __int16)(v85 - 1) > 4u )
      {
        v46 = WdLogNewEntry5_WdError(v85);
        *(_QWORD *)(v46 + 24) = 1928LL;
        goto LABEL_49;
      }
      if ( (_WORD)v85 == 5 )
      {
        if ( *(_BYTE *)(*((_QWORD *)v2 + 5) + 145LL) || (*((_DWORD *)v104 + 469) & 0x100000) == 0 )
        {
          v46 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v46 + 24) = 1935LL;
          goto LABEL_49;
        }
        v87 = gajRop3;
        v86 = *((unsigned __int16 *)v53 + 33);
        LOBYTE(v87) = gajRop3[(unsigned __int8)v86];
        if ( (((unsigned __int8)v87 | gajRop3[v86 >> 8]) & 0xE8) != 0 )
        {
          v46 = WdLogNewEntry5_WdError(v87);
          *(_QWORD *)(v46 + 24) = 1940LL;
          goto LABEL_49;
        }
      }
      else if ( *((_WORD *)v53 + 33) )
      {
        v46 = WdLogNewEntry5_WdError(v85);
        *(_QWORD *)(v46 + 24) = 1948LL;
        goto LABEL_49;
      }
      v68 = ValidateGdiCommand(
              72LL,
              v52,
              v48,
              v81,
              *(const unsigned __int8 **)(v8 + 40),
              v34[v84],
              v34[v82],
              (const struct tagRECT *)v81 + 1,
              (const struct tagRECT *)v81,
              *((_DWORD *)v81 + 16),
              *((_DWORD *)v81 + 15),
              v93,
              0,
              *((_DWORD *)v81 + 10),
              (unsigned __int8 **)v81 + 6);
    }
    else
    {
      v55 = (unsigned int)(*(_DWORD *)v53 - 2);
      if ( *(_DWORD *)v53 == 2 )
      {
        v76 = (unsigned __int8 *)(v53 + 8);
        if ( (unsigned int)v52 < 0x28 )
        {
          v46 = WdLogNewEntry5_WdError(v55);
          *(_QWORD *)(v46 + 24) = 1974LL;
          goto LABEL_49;
        }
        v77 = *((unsigned int *)v53 + 6);
        if ( (unsigned int)v77 >= *(_DWORD *)(v8 + 32) )
        {
          v46 = WdLogNewEntry5_WdError(v55);
          *(_QWORD *)(v46 + 24) = 1979LL;
          goto LABEL_49;
        }
        v78 = *((unsigned __int16 *)v53 + 22);
        if ( (unsigned __int16)(v78 - 1) > 6u )
        {
          v46 = WdLogNewEntry5_WdError(v78);
          *(_QWORD *)(v46 + 24) = 1984LL;
          goto LABEL_49;
        }
        if ( (_WORD)v78 == 7 )
        {
          v79 = 0LL;
          if ( *(_BYTE *)(*((_QWORD *)v2 + 5) + 145LL) || (*((_DWORD *)v44 + 469) & 0x100000) == 0 )
          {
            v46 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v46 + 24) = 1991LL;
            goto LABEL_49;
          }
          v80 = *((unsigned __int16 *)v53 + 23);
          LOBYTE(v79) = gajRop3[(unsigned __int8)v80];
          if ( (((unsigned __int8)v79 | gajRop3[v80 >> 8]) & 0xFC) != 0 )
          {
            v46 = WdLogNewEntry5_WdError(v79);
            *(_QWORD *)(v46 + 24) = 1997LL;
            goto LABEL_49;
          }
        }
        else if ( *((_WORD *)v53 + 23) )
        {
          v46 = WdLogNewEntry5_WdError(v78);
          *(_QWORD *)(v46 + 24) = 2005LL;
          goto LABEL_49;
        }
        v68 = ValidateGdiCommand(
                40LL,
                v52,
                v48,
                v76,
                *(const unsigned __int8 **)(v8 + 40),
                v34[v77],
                0LL,
                (const struct tagRECT *)v76,
                0LL,
                0,
                0,
                v93,
                0,
                *((_DWORD *)v76 + 5),
                (unsigned __int8 **)v76 + 3);
      }
      else
      {
        v56 = (unsigned int)(*(_DWORD *)v53 - 3);
        if ( *(_DWORD *)v53 == 3 )
        {
          v69 = (unsigned __int8 *)(v53 + 8);
          if ( (unsigned int)v52 < 0x40 )
          {
            v46 = WdLogNewEntry5_WdError(v56);
            *(_QWORD *)(v46 + 24) = 2030LL;
            goto LABEL_49;
          }
          v70 = *((unsigned int *)v53 + 10);
          v75 = *(_DWORD *)(v8 + 32);
          if ( (unsigned int)v70 >= v75 || (v72 = *((unsigned int *)v69 + 9), (unsigned int)v72 >= v75) )
          {
            v46 = WdLogNewEntry5_WdError(v56);
            *(_QWORD *)(v46 + 24) = 2036LL;
            goto LABEL_49;
          }
          goto LABEL_85;
        }
        v57 = (unsigned int)(*(_DWORD *)v53 - 4);
        if ( *(_DWORD *)v53 == 4 )
        {
          v69 = (unsigned __int8 *)(v53 + 8);
          if ( (unsigned int)v52 < 0x40 )
          {
            v46 = WdLogNewEntry5_WdError(v57);
            *(_QWORD *)(v46 + 24) = 2060LL;
            goto LABEL_49;
          }
          v70 = *((unsigned int *)v53 + 11);
          v73 = *(_DWORD *)(v8 + 32);
          if ( (unsigned int)v70 >= v73 || (v72 = *((unsigned int *)v69 + 8), (unsigned int)v72 >= v73) )
          {
            v46 = WdLogNewEntry5_WdError(v57);
            *(_QWORD *)(v46 + 24) = 2066LL;
            goto LABEL_49;
          }
          v74 = *((unsigned int *)v69 + 14);
          if ( (_WORD)v74 != 3 )
          {
            v46 = WdLogNewEntry5_WdError(v74);
            *(_QWORD *)(v46 + 24) = 2071LL;
            goto LABEL_49;
          }
          if ( (v74 & 0x30000) != 0 && (*((_DWORD *)v44 + 469) & 0x200000) == 0 )
          {
            v46 = WdLogNewEntry5_WdError(v74);
            *(_QWORD *)(v46 + 24) = 2077LL;
            goto LABEL_49;
          }
LABEL_85:
          v97 = (unsigned __int8 **)(v69 + 48);
          v96 = *((_DWORD *)v69 + 10);
          v94 = 1;
          v92 = *((_DWORD *)v69 + 15);
LABEL_78:
          v68 = ValidateGdiCommand(
                  64LL,
                  v52,
                  v48,
                  v69,
                  *(const unsigned __int8 **)(v8 + 40),
                  v34[v72],
                  v34[v70],
                  (const struct tagRECT *)v69 + 1,
                  (const struct tagRECT *)v69,
                  0,
                  v92,
                  v93,
                  v94,
                  v96,
                  v97);
          goto LABEL_111;
        }
        v58 = (unsigned int)(*(_DWORD *)v53 - 6);
        if ( *(_DWORD *)v53 == 6 )
        {
          v69 = (unsigned __int8 *)(v53 + 8);
          if ( (unsigned int)v52 < 0x40 )
          {
            v46 = WdLogNewEntry5_WdError(v58);
            *(_QWORD *)(v46 + 24) = 2101LL;
            goto LABEL_49;
          }
          v70 = *((unsigned int *)v53 + 10);
          v71 = *(_DWORD *)(v8 + 32);
          if ( (unsigned int)v70 >= v71 || (v72 = *((unsigned int *)v69 + 9), (unsigned int)v72 >= v71) )
          {
            v46 = WdLogNewEntry5_WdError(v58);
            *(_QWORD *)(v46 + 24) = 2107LL;
            goto LABEL_49;
          }
          v97 = (unsigned __int8 **)(v69 + 48);
          v96 = *((_DWORD *)v69 + 11);
          v94 = 0;
          v92 = *((_DWORD *)v69 + 15);
          goto LABEL_78;
        }
        if ( *(_DWORD *)v53 != 7 )
        {
          v46 = WdLogNewEntry5_WdError(v58);
          *(_QWORD *)(v46 + 24) = 2179LL;
          goto LABEL_49;
        }
        v59 = (unsigned __int8 *)(v53 + 8);
        if ( (unsigned int)v52 < 0x48 )
        {
          v46 = WdLogNewEntry5_WdError(v58);
          *(_QWORD *)(v46 + 24) = 2131LL;
          goto LABEL_49;
        }
        v60 = *((unsigned int *)v53 + 8);
        v61 = *(_DWORD *)(v8 + 32);
        if ( (unsigned int)v60 >= v61
          || *((_DWORD *)v53 + 7) >= v61
          || (v58 = *((unsigned int *)v53 + 6), (unsigned int)v58 >= v61)
          || (v62 = *((unsigned int *)v53 + 9), (unsigned int)v62 >= v61) )
        {
          v46 = WdLogNewEntry5_WdError(v58);
          *(_QWORD *)(v46 + 24) = 2139LL;
          goto LABEL_49;
        }
        v63 = *((_DWORD *)v53 + 13);
        if ( v63 != -1 )
        {
          if ( v63 > 0xF )
          {
            v46 = WdLogNewEntry5_WdError(v58);
            *(_QWORD *)(v46 + 24) = 2146LL;
            goto LABEL_49;
          }
          if ( v34[v58] < 0x2000uLL )
          {
            v46 = WdLogNewEntry5_WdError(v58);
            *(_QWORD *)(v46 + 24) = 2151LL;
            goto LABEL_49;
          }
        }
        v64 = *((_DWORD *)v53 + 10);
        v95 = *((_DWORD *)v59 + 12);
        v65 = *((_DWORD *)v59 + 16);
        v105.left = v64 + *(_DWORD *)v59;
        v66 = v64 + *((_DWORD *)v59 + 2);
        v67 = *((_DWORD *)v59 + 9);
        v105.right = v66;
        v105.top = v67 + *((_DWORD *)v59 + 1);
        v105.bottom = v67 + *((_DWORD *)v59 + 3);
        v68 = ValidateGdiCommand(
                72LL,
                v52,
                v48,
                v59,
                *(const unsigned __int8 **)(v8 + 40),
                v34[v62],
                v34[v60],
                (const struct tagRECT *)v59,
                &v105,
                0,
                v65,
                v93,
                0,
                v95,
                (unsigned __int8 **)v59 + 7);
      }
    }
LABEL_111:
    if ( !v68 )
      goto LABEL_50;
    if ( !v51 )
      goto LABEL_139;
    v44 = v104;
  }
  v46 = WdLogNewEntry5_WdError(v36);
  *(_QWORD *)(v46 + 24) = 1894LL;
LABEL_49:
  WdLogEvent5_WdError(v46);
LABEL_50:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
LABEL_140:
  v9 = (struct _EX_RUNDOWN_REF **)v98;
LABEL_141:
  v4 = 1;
LABEL_142:
  if ( v101 < 0 )
  {
    v90 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v90 + 24) = v101;
    WdLogEvent5_WdError(v90);
  }
  DxgkUnreferenceAllocationList(v103, v9);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v106 + 9), &v101, 4u);
  if ( P != &v112 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v113 = 0;
  if ( v108 != &v109 && v108 )
    ExFreePoolWithTag(v108, 0);
  v108 = 0LL;
  v110 = 0;
LABEL_151:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v107);
  return v4;
}
