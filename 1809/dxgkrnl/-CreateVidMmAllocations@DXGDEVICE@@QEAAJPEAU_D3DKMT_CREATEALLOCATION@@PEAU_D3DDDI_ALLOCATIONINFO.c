/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0102860
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001179C (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0013B08 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001A35C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 *     McTemplateK0pqqqqq @ 0x1C00356C8 (McTemplateK0pqqqqq.c)
 *     McTemplateK0pqqqqqqq @ 0x1C0035788 (McTemplateK0pqqqqqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C01D8F0C (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C01D9038 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        PERESOURCE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        char a7,
        struct COREDEVICEACCESS *a8)
{
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  __int64 v9; // r15
  bool v10; // r12
  struct _DXGK_ALLOCATIONINFO *v11; // rbx
  struct _D3DKMT_CREATEALLOCATION *v12; // rdi
  __int16 v14; // cx
  int v15; // edx
  BOOL v16; // eax
  PERESOURCE v17; // rax
  POWNER_ENTRY OwnerTable; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct DXGALLOCATION *v21; // r14
  __int64 v22; // r13
  __int64 v23; // rcx
  HANDLE v24; // r9
  PVOID v25; // r12
  struct _DXGK_ALLOCATIONINFO *v26; // rsi
  unsigned int v27; // ebx
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  struct _D3DKMT_CREATEALLOCATION *v29; // r10
  __int64 v30; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v31; // r15
  const struct _D3DKM_CREATESTANDARDALLOCATION *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // di
  DXGDEVICE *v36; // rdi
  struct DXGPROCESS *Current; // rbx
  __int64 v38; // rcx
  const GUID *v39; // r8
  const GUID *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r12
  struct DXGPROCESS *v44; // rbx
  __int64 v45; // rcx
  const GUID *v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v49; // ecx
  int v50; // edx
  DXGDEVICE *v51; // rsi
  __int64 v53; // rax
  int v54; // ecx
  int v55; // r9d
  int v56; // r9d
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  HANDLE hSection; // r10
  NTSTATUS v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rax
  __int64 v72; // rcx
  __int64 (__fastcall *v73)(_QWORD, _QWORD); // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  void *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // r11
  HANDLE v82; // r8
  SIZE_T Size; // rdx
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rdx
  HANDLE v87; // rax
  int v88; // ecx
  __int64 v89; // rax
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  _DWORD *v92; // rcx
  _DWORD *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned int v97; // edx
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  UINT v103; // ebx
  struct DXGALLOCATION *v104; // r14
  __int64 v105; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v106; // r8
  __int64 v107; // rdx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-B1h]
  __int64 v114; // [rsp+30h] [rbp-A9h]
  __int64 v115; // [rsp+38h] [rbp-A1h]
  __int64 v116; // [rsp+40h] [rbp-99h]
  __int64 v117; // [rsp+48h] [rbp-91h]
  __int64 v118; // [rsp+50h] [rbp-89h]
  char v119; // [rsp+60h] [rbp-79h]
  char v120; // [rsp+61h] [rbp-78h] BYREF
  char v121; // [rsp+62h] [rbp-77h]
  HANDLE v122; // [rsp+68h] [rbp-71h]
  int v123; // [rsp+70h] [rbp-69h]
  int v124; // [rsp+74h] [rbp-65h] BYREF
  __int64 v125; // [rsp+78h] [rbp-61h]
  int v126; // [rsp+80h] [rbp-59h]
  __int64 v127; // [rsp+88h] [rbp-51h]
  __int64 v128; // [rsp+90h] [rbp-49h]
  __int64 v129; // [rsp+98h] [rbp-41h] BYREF
  __int64 v130; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v132; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v133; // [rsp+B8h] [rbp-21h] BYREF
  PVOID v134; // [rsp+C0h] [rbp-19h] BYREF
  char v135[16]; // [rsp+C8h] [rbp-11h] BYREF

  Flags = a2->Flags;
  LODWORD(v9) = 0;
  v123 = 0;
  v10 = 1;
  v119 = 1;
  v11 = a4;
  v12 = a2;
  if ( (*(_DWORD *)&Flags & 0x10000) != 0 && a6 )
  {
    v59 = WdLogNewEntry5_WdError(this);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v59 + 24) = this;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    return (unsigned int)v9;
  }
  v14 = (__int16)Flags;
  v15 = 1;
  v16 = (*(_WORD *)&Flags & 0x4000) != 0;
  if ( (v14 & 0x400) == 0 )
    v15 = v16;
  v17 = this[2];
  v126 = v15;
  OwnerTable = v17->OwnerTable;
  if ( KeGetCurrentThread() != (struct _KTHREAD *)OwnerTable[10].OwnerThread
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)OwnerTable[9].OwnerThread) )
  {
    v60 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v60 + 24) = 3856LL;
    WdLogEvent5_WdAssertion(v60);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( a8 )
  {
    v20 = *((_QWORD *)a8 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v20 + 144));
  }
  v21 = a5;
  v22 = 0LL;
  if ( !v12->NumAllocations )
  {
LABEL_66:
    v12->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v12->Flags & 0xFFFFBFFF | (v10 << 14));
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v23 = *((_QWORD *)v21 + 6);
    v24 = 0LL;
    v25 = 0LL;
    v120 = v126;
    v26 = &v11[(unsigned int)v22];
    v122 = 0LL;
    v27 = (LODWORD(v26->Size) + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v23 + 4) & 0x200F) != 0 )
      v120 = 1;
    if ( !*(_QWORD *)(v23 + 16) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v61 + 24) = 3884LL;
      WdLogEvent5_WdAssertion(v61);
      v24 = 0LL;
    }
    Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v26->Flags.Value;
    if ( (*(_WORD *)&Value & 0x4000) != 0 )
    {
      v62 = *(_QWORD *)(this[2]->OwnerTable[158].OwnerThread + 16);
      v9 = *(_QWORD *)(352LL * ((*((_DWORD *)v21 + 18) >> 12) & 0x3F) + *(_QWORD *)(v62 + 2416) + 32);
      if ( !*((_BYTE *)this + 1744) || !v9 )
      {
        v63 = WdLogNewEntry5_WdError(v62);
        v51 = (DXGDEVICE *)this;
        *(_QWORD *)(v63 + 24) = this;
        *(_QWORD *)(v63 + 32) = v9;
        WdLogEvent5_WdError(v63);
        LODWORD(v9) = -1073741823;
        goto LABEL_167;
      }
    }
    if ( a7 )
    {
      v53 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL);
      if ( v53 )
        v122 = *(HANDLE *)(v53 + 184);
      v36 = (DXGDEVICE *)this;
      if ( (*(_DWORD *)&a2->Flags & 0x80u) != 0 )
        v123 = 1;
      goto LABEL_45;
    }
    v29 = a2;
    v121 = 0;
    v30 = *(_DWORD *)&a2->Flags & 0x20;
    if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
    {
      v31 = a3;
      hSection = a3[v22].hSection;
      if ( (_DWORD)v30 )
      {
        v122 = a3[v22].hSection;
        v24 = hSection;
        v26->Flags.Value = *(_DWORD *)&Value | 0x10;
        v29 = a2;
        goto LABEL_24;
      }
      v65 = ObReferenceObjectByHandle(hSection, 0x20000u, 0LL, 1, &v134, 0LL);
      v25 = v134;
      v9 = v65;
      if ( v65 < 0 )
      {
        v102 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v102 + 24) = a3[v22].hSection;
        *(_QWORD *)(v102 + 32) = v9;
        WdLogEvent5_WdError(v102);
        goto LABEL_161;
      }
      v26->Flags.Value |= 0x400000u;
      v67 = ProcessSectionAttributes(v25, v26);
      v9 = v67;
      if ( v67 < 0 )
      {
        v101 = WdLogNewEntry5_WdError(v68);
        v51 = (DXGDEVICE *)this;
        *(_QWORD *)(v101 + 24) = this;
        *(_QWORD *)(v101 + 32) = v9;
        WdLogEvent5_WdError(v101);
        ObfDereferenceObject(v25);
        v12 = a2;
        v10 = v119;
        goto LABEL_65;
      }
      v69 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL);
      *(_DWORD *)(v69 + 12) |= 0x400u;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL) + 184LL) = v25;
      *(_DWORD *)(v69 + 196) = v26->Alignment;
      *(_DWORD *)(v69 + 12) ^= (*(_DWORD *)(v69 + 12) ^ (v26->Flags.Value << 9)) & 0x800;
      goto LABEL_124;
    }
    if ( !(_DWORD)v30 )
    {
      if ( (*(_BYTE *)&Value & 0x10) != 0 )
      {
        v31 = a3;
        v24 = a3[v22].hSection;
        v122 = v24;
        goto LABEL_24;
      }
      if ( (*(_DWORD *)&Value & 0x400000) == 0 )
        goto LABEL_23;
      if ( a2->NumAllocations == 1
        && (*(_DWORD *)&Value & 0x2000000) != 0
        && a6
        && (v73 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4)) != 0LL )
      {
        v74 = a6;
      }
      else
      {
        v75 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v75 + 24) = 4020LL;
        WdLogEvent5_WdAssertion(v75);
        v74 = a6;
        v73 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4);
      }
      v25 = (PVOID)v73(*((_QWORD *)v74 + 5), v27);
      if ( !v25 )
      {
        v77 = WdLogNewEntry5_WdError(v76);
        *(_QWORD *)(v77 + 24) = 4026LL;
LABEL_165:
        WdLogEvent5_WdError(v77);
        LODWORD(v9) = -1073741823;
LABEL_166:
        v51 = (DXGDEVICE *)this;
LABEL_167:
        v12 = a2;
        goto LABEL_168;
      }
      v121 = 1;
LABEL_124:
      v29 = a2;
      v24 = v122;
LABEL_23:
      v31 = a3;
      goto LABEL_24;
    }
    if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 8) != 0 )
    {
      v31 = a3;
      v29 = a2;
      v24 = a3[v22].hSection;
      v26->Flags.Value |= 0x10u;
      v122 = v24;
    }
    else
    {
      if ( v26->Size > v27 )
      {
        LODWORD(v9) = -1073741811;
        v109 = WdLogNewEntry5_WdError(v70);
        *(_QWORD *)(v109 + 24) = v26->Size;
        *(_QWORD *)(v109 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v109);
        goto LABEL_166;
      }
      v26->Size = v27;
      v71 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v27);
      v122 = v71;
      v24 = v71;
      if ( !v71 )
      {
        v77 = WdLogNewEntry5_WdError(v72);
        *(_QWORD *)(v77 + 24) = 4001LL;
        goto LABEL_165;
      }
      v31 = a3;
      v29 = a2;
      a3[v22].hSection = v71;
    }
LABEL_24:
    v32 = a6;
    if ( !a6 || (*(_DWORD *)a6 & 0x40) == 0 )
      goto LABEL_25;
    if ( *(_OWORD *)((char *)a6 + 328) == 0LL )
    {
      v77 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v77 + 24) = 4048LL;
      goto LABEL_165;
    }
    v78 = (void *)*((_QWORD *)a6 + 42);
    if ( v78 )
    {
      v26->Flags.Value |= 0x10u;
      v24 = v78;
      v122 = v78;
      v79 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL);
      *(_DWORD *)(v79 + 12) |= 0x200u;
      *(_QWORD *)(v79 + 184) = v78;
LABEL_131:
      *(_DWORD *)(v79 + 196) = *((_DWORD *)v32 + 98);
      *(_DWORD *)(v79 + 12) ^= ((unsigned __int16)*(_DWORD *)(v79 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)v32 << 7)) & 0x800;
      goto LABEL_25;
    }
    if ( *((_QWORD *)a6 + 41) )
    {
      v26->Flags.Value |= 0x400000u;
      ObfReferenceObject(*((PVOID *)a6 + 41));
      v32 = a6;
      v24 = v122;
      v29 = a2;
      v79 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL);
      v25 = (PVOID)*((_QWORD *)a6 + 41);
      *(_DWORD *)(v79 + 12) |= 0x400u;
      *(_QWORD *)(v79 + 184) = *((_QWORD *)a6 + 41);
      goto LABEL_131;
    }
LABEL_25:
    v33 = v22;
    if ( (v31[v22].Flags.Value & 4) != 0 )
    {
      v26->AllocationPriority = v31[v33].Priority;
    }
    else if ( !v26->AllocationPriority )
    {
      v80 = WdLogNewEntry5_WdError(v33 * 96);
      *(_QWORD *)(v80 + 24) = 4094LL;
      WdLogEvent5_WdError(v80);
      v24 = v122;
      v29 = a2;
    }
    v34 = *((_QWORD *)v21 + 5);
    v35 = 0;
    if ( v34 )
    {
      if ( (v26->Flags.Value & 0x100000) != 0 )
      {
        v81 = *(_QWORD *)(v34 + 56);
        v35 = 1;
        if ( !*(_QWORD *)(v81 + 176) )
        {
          v82 = 0LL;
          Size = 0LL;
          if ( (*(_DWORD *)&v29->Flags & 0x10000) != 0 && v24 )
          {
            v82 = v24;
            Size = v29->pStandardAllocation->ExistingHeapData.Size;
          }
          v84 = (*(__int64 (__fastcall **)(PVOID, __int64, HANDLE, SIZE_T))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount
                                                                                      + 8LL)
                                                                          + 1200LL))(
                  this[2][5].SharedWaiters,
                  v81 + 176,
                  v82,
                  Size);
          v9 = v84;
          if ( v84 < 0 )
          {
            v110 = WdLogNewEntry5_WdError(v85);
            *(_QWORD *)(v110 + 24) = v9;
            WdLogEvent5_WdError(v110);
            if ( v121 )
              ObfDereferenceObject(v25);
LABEL_161:
            v10 = v119;
            goto LABEL_162;
          }
          v24 = v122;
          v29 = a2;
        }
      }
    }
    if ( (*(_DWORD *)&v29->Flags & 0x10020) == 0x10020 )
    {
      LODWORD(v9) = ProcessSysMemAttributes(v24, v27, v26);
      if ( (int)v9 < 0 )
        goto LABEL_166;
      v86 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL);
      v87 = v122;
      *(_DWORD *)(v86 + 12) |= 0x200u;
      v88 = *(_DWORD *)(v86 + 12);
      *(_QWORD *)(v86 + 184) = v87;
      *(_DWORD *)(v86 + 196) = v26->Alignment;
      *(_DWORD *)(v86 + 12) = v88 ^ ((unsigned __int16)v88 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v26->Flags.0 << 9)) & 0x800;
    }
    if ( v35 )
      v125 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 56LL) + 176LL;
    else
      v125 = 0LL;
    v36 = (DXGDEVICE *)this;
    v9 = (__int64)this[81];
    v127 = *(_QWORD *)&this[2][5].ActiveCount;
    v128 = *((_QWORD *)v21 + 6);
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      {
        Current = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v55 = *((_DWORD *)Current + 40);
            if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v38, &EventBlockThread, v39, v55);
          }
          ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
        }
        *((_QWORD *)Current + 19) = KeGetCurrentThread();
      }
      v36 = (DXGDEVICE *)this;
    }
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, struct _DXGK_ALLOCATIONINFO *, __int64, PVOID, __int64, __int64 *))(*(_QWORD *)(v127 + 8) + 120LL))(
                    v9,
                    v26,
                    v128,
                    v25,
                    v125,
                    &v129);
    if ( Current )
    {
      *((_QWORD *)Current + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v121 )
      ObfDereferenceObject(v25);
    if ( (int)v9 < 0 )
      goto LABEL_166;
    v41 = v129;
    if ( !v129 )
    {
      v89 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v89 + 24) = 4179LL;
      WdLogEvent5_WdAssertion(v89);
      v41 = v129;
    }
    *(_QWORD *)(*((_QWORD *)v21 + 6) + 8LL) = v41;
    if ( a6 )
    {
      v54 = *((_DWORD *)a6 + 4);
      if ( v54 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v93 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v118) = v93[5];
          LODWORD(v117) = v93[4];
          LODWORD(v116) = v93[3];
          LODWORD(v115) = v93[2];
          LODWORD(v114) = v93[1];
          LODWORD(HandleInformation) = *v93;
          LODWORD(Object) = *(_DWORD *)a6;
          McTemplateK0pqqqqqqq(
            (__int64)v93,
            &EventCddStandardAllocationGdiSurface,
            v40,
            *((_QWORD *)v21 + 6),
            Object,
            HandleInformation,
            v114,
            v115,
            v116,
            v117,
            v118);
        }
      }
      else
      {
        v57 = v54 - 1;
        if ( v57 )
        {
          v58 = v57 - 1;
          if ( v58 )
          {
            if ( v58 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v90 = (_DWORD *)*((_QWORD *)a6 + 3);
              LODWORD(v115) = v90[2];
              LODWORD(v114) = v90[1];
              LODWORD(HandleInformation) = *v90;
              LODWORD(Object) = *(_DWORD *)a6;
              McTemplateK0pqqqq(
                (__int64)v90,
                &EventCddStandardAllocationStagingSurface,
                v40,
                *((_QWORD *)v21 + 6),
                Object,
                HandleInformation,
                v114,
                v115);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v91 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v116) = v91[3];
            LODWORD(v115) = v91[2];
            LODWORD(v114) = v91[1];
            LODWORD(HandleInformation) = *v91;
            LODWORD(Object) = *(_DWORD *)a6;
            McTemplateK0pqqqqq(
              (__int64)v91,
              (__int64)a6,
              v40,
              *((_QWORD *)v21 + 6),
              Object,
              HandleInformation,
              v114,
              v115,
              v116);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v92 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v118) = v92[5];
          LODWORD(v117) = v92[4];
          LODWORD(v116) = v92[3];
          LODWORD(v115) = v92[2];
          LODWORD(v114) = v92[1];
          LODWORD(HandleInformation) = *v92;
          LODWORD(Object) = *(_DWORD *)a6;
          McTemplateK0pqqqqqqq(
            (__int64)v92,
            &EventCddStandardAllocationSharedPrimarySurface,
            v40,
            *((_QWORD *)v21 + 6),
            Object,
            HandleInformation,
            v114,
            v115,
            v116,
            v117,
            v118);
        }
      }
    }
LABEL_45:
    v42 = *((_QWORD *)v36 + 2);
    v9 = *((_QWORD *)v36 + 81);
    v124 = 0;
    v43 = *(_QWORD *)(v42 + 552);
    v128 = *(_QWORD *)(v42 + 544);
    LODWORD(v125) = v26->MaximumRenamingListLength;
    v127 = *(_QWORD *)(*((_QWORD *)v21 + 6) + 8LL);
    v44 = DXGPROCESS::GetCurrent();
    if ( v44 )
    {
      if ( *((struct _KTHREAD **)v44 + 19) == KeGetCurrentThread() )
      {
        v44 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v44 + 144, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v56 = *((_DWORD *)v44 + 40);
            if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v45, &EventBlockThread, v46, v56);
          }
          ExAcquirePushLockExclusiveEx((char *)v44 + 144, 0LL);
        }
        *((_QWORD *)v44 + 19) = KeGetCurrentThread();
      }
      v36 = (DXGDEVICE *)this;
    }
    LODWORD(HandleInformation) = v123;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, HANDLE, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(v128 + 8) + 136LL))(
                    v43,
                    v9,
                    v127,
                    (unsigned int)v125,
                    v122,
                    HandleInformation,
                    v21,
                    &v130,
                    &v124,
                    &v120);
    if ( v44 )
    {
      *((_QWORD *)v44 + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v44 + 144, 0LL);
      KeLeaveCriticalRegion();
    }
    v10 = v120 && v119;
    v119 = v10;
    *((_DWORD *)v21 + 18) ^= (*((_DWORD *)v21 + 18) ^ (v124 << 12)) & 0x3F000;
    if ( (int)v9 < 0 )
      goto LABEL_166;
    v48 = v130;
    if ( !v130 )
    {
      v94 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v94 + 24) = 4283LL;
      WdLogEvent5_WdAssertion(v94);
      v48 = v130;
    }
    *((_QWORD *)v21 + 3) = v48;
    v49 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v26->Flags.Value;
    if ( (*(_WORD *)&v49 & 0x100) != 0
      || (v50 = *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL), (v50 & 0x20) != 0)
      || (*(_DWORD *)&v49 & 0x20200) != 0
      || (v50 & 0x4000) != 0 )
    {
      if ( (v26->Flags.Value & 0x100) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL) |= 8u;
        v49 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v26->Flags.Value;
      }
      if ( (*(_WORD *)&v49 & 0x200) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL) |= 0x20u;
        v49 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v26->Flags.Value;
      }
      if ( (*(_DWORD *)&v49 & 0x20000) != 0 )
        *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL) |= 0x4000u;
      LODWORD(v9) = VIDMM_EXPORT::VidMmPinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)v36 + 2) + 544LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)v36 + 2) + 552LL),
                      *((struct _VIDMM_MULTI_ALLOC **)v21 + 3),
                      0LL,
                      0LL);
      if ( (int)v9 < 0 )
        goto LABEL_166;
      v95 = *((_QWORD *)v21 + 6);
      *((_DWORD *)v21 + 18) |= 0x800u;
      if ( (*(_DWORD *)(v95 + 4) & 0x4000) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v36 + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v36 + 2) + 552LL),
          *((struct _VIDMM_MULTI_ALLOC **)v21 + 3));
        *((_DWORD *)v21 + 18) &= ~0x800u;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(v36) && a6 && *((_DWORD *)a6 + 4) == 2 )
      break;
LABEL_63:
    v12 = a2;
    v22 = (unsigned int)(v22 + 1);
    v21 = (struct DXGALLOCATION *)*((_QWORD *)v21 + 8);
    if ( (unsigned int)v22 >= a2->NumAllocations )
      goto LABEL_64;
    v11 = a4;
  }
  v96 = *((_QWORD *)v36 + 2);
  v97 = *((_DWORD *)v21 + 18);
  v131 = 0LL;
  v133 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v96 + 544) + 8LL) + 976LL))(
    *((_QWORD *)v36 + 81),
    (v97 >> 12) & 0x3F,
    &v131,
    &v133);
  v98 = *((_QWORD *)v36 + 2);
  v132 = 0LL;
  v99 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v98 + 544) + 8LL)
                                                                                             + 768LL))(
          *(_QWORD *)(v98 + 552),
          v131,
          (__int64)v21 + 24,
          1LL,
          3,
          &v132,
          v135);
  v9 = v99;
  if ( v99 >= 0 )
  {
    if ( v99 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 2)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 984LL))(
        *(_QWORD *)(*((_QWORD *)v36 + 2) + 552LL),
        &v133,
        &v132,
        1LL);
      LODWORD(v9) = 0;
    }
    goto LABEL_63;
  }
  v111 = WdLogNewEntry5_WdError(v100);
  *(_QWORD *)(v111 + 24) = v9;
  WdLogEvent5_WdError(v111);
LABEL_162:
  v12 = a2;
LABEL_64:
  v51 = (DXGDEVICE *)this;
LABEL_65:
  if ( (int)v9 >= 0 )
    goto LABEL_66;
LABEL_168:
  v103 = 0;
  if ( v12->NumAllocations )
  {
    v104 = a5;
    do
    {
      if ( (*((_DWORD *)v104 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v51 + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v51 + 2) + 552LL),
          *((struct _VIDMM_MULTI_ALLOC **)v104 + 3));
        *((_DWORD *)v104 + 18) &= ~0x800u;
      }
      v105 = *((_QWORD *)v104 + 6);
      v106 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v105 + 8);
      if ( v106
        && !a7
        && (!*((_DWORD *)v51 + 82) && (*(_DWORD *)(v105 + 4) & 1) != 0 || (*(_DWORD *)(v105 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v51 + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v51 + 2) + 552LL),
          v106);
        *(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) |= 0x10u;
      }
      v107 = *((_QWORD *)v104 + 3);
      if ( v107 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v51 + 2) + 544LL)
                                                                            + 8LL)
                                                                + 160LL))(
          *(_QWORD *)(*((_QWORD *)v51 + 2) + 552LL),
          v107,
          0LL,
          0LL);
        *((_QWORD *)v104 + 3) = 0LL;
      }
      v108 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v104 + 6) + 8LL);
      if ( v108 && !a7 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v51 + 2) + 544LL),
          *((struct VIDMM_DEVICE **)v51 + 81),
          0LL,
          v108);
        *(_QWORD *)(*((_QWORD *)v104 + 6) + 8LL) = 0LL;
      }
      v104 = (struct DXGALLOCATION *)*((_QWORD *)v104 + 8);
      ++v103;
    }
    while ( v103 < v12->NumAllocations );
  }
  return (unsigned int)v9;
}
