/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C010F510
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000C3A4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C00357F8 (McTemplateK0pqtqq.c)
 *     McTemplateK0pqqqqq @ 0x1C003BE4C (McTemplateK0pqqqqq.c)
 *     McTemplateK0pqqqqqqq @ 0x1C003BF0C (McTemplateK0pqqqqqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0207360 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C020748C (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
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
  struct _DXGK_ALLOCATIONINFO *v10; // rbx
  struct _D3DKMT_CREATEALLOCATION *v11; // rdi
  __int16 v13; // cx
  __int64 v14; // rdx
  BOOL v15; // eax
  PERESOURCE v16; // rax
  POWNER_ENTRY OwnerTable; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct DXGALLOCATION *v20; // r14
  __int64 v21; // r13
  __int64 v22; // rcx
  HANDLE hSection; // r9
  PVOID v24; // r12
  struct _DXGK_ALLOCATIONINFO *v25; // rsi
  unsigned int v26; // ebx
  __int64 Value; // r8
  struct _D3DKMT_CREATEALLOCATION *v28; // r10
  __int64 v29; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v30; // r15
  const struct _D3DKM_CREATESTANDARDALLOCATION *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  char v34; // di
  HANDLE v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rdx
  const GUID *v38; // r8
  __int64 v39; // rcx
  DXGDEVICE *v40; // r12
  __int64 MaximumRenamingListLength; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v45; // ecx
  int v46; // edx
  __int64 v48; // rbx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  NTSTATUS v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // r8
  void *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 (__fastcall *v70)(_QWORD, _QWORD); // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  void *v76; // rax
  __int64 v77; // rax
  __int64 v78; // r11
  HANDLE v79; // r8
  SIZE_T Size; // rdx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  int v86; // ecx
  __int64 v87; // rax
  _DWORD *v88; // rcx
  _DWORD *v89; // rcx
  _DWORD *v90; // rcx
  __int64 v91; // r9
  const EVENT_DESCRIPTOR *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  PERESOURCE v95; // rax
  int v96; // edx
  PERESOURCE v97; // rax
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rax
  UINT v103; // ebx
  struct DXGALLOCATION *v104; // rsi
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  PVOID *Object; // [rsp+20h] [rbp-A9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-A1h]
  __int64 v112; // [rsp+30h] [rbp-99h]
  __int64 v113; // [rsp+38h] [rbp-91h]
  __int64 v114; // [rsp+40h] [rbp-89h]
  __int64 v115; // [rsp+48h] [rbp-81h]
  __int64 v116; // [rsp+50h] [rbp-79h]
  unsigned __int8 v117; // [rsp+60h] [rbp-69h]
  char v118; // [rsp+61h] [rbp-68h] BYREF
  char v119; // [rsp+62h] [rbp-67h]
  HANDLE v120; // [rsp+68h] [rbp-61h]
  int v121; // [rsp+70h] [rbp-59h]
  int v122; // [rsp+74h] [rbp-55h] BYREF
  int v123; // [rsp+78h] [rbp-51h]
  __int64 v124; // [rsp+80h] [rbp-49h] BYREF
  __int64 v125; // [rsp+88h] [rbp-41h] BYREF
  __int64 v126; // [rsp+90h] [rbp-39h] BYREF
  __int64 v127; // [rsp+98h] [rbp-31h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-29h] BYREF
  PVOID v129; // [rsp+A8h] [rbp-21h] BYREF
  char v130[24]; // [rsp+B0h] [rbp-19h] BYREF

  Flags = a2->Flags;
  LODWORD(v9) = 0;
  v121 = 0;
  v10 = a4;
  v117 = 1;
  v11 = a2;
  if ( (*(_DWORD *)&Flags & 0x10000) != 0 && a6 )
  {
    v52 = WdLogNewEntry5_WdError(this, a2, a3);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v52 + 24) = this;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v52);
    return (unsigned int)v9;
  }
  v13 = (__int16)Flags;
  v14 = 1LL;
  v15 = (*(_WORD *)&Flags & 0x4000) != 0;
  if ( (v13 & 0x400) == 0 )
    v14 = v15;
  v16 = this[2];
  v123 = v14;
  OwnerTable = v16->OwnerTable;
  if ( KeGetCurrentThread() != (struct _KTHREAD *)OwnerTable[10].OwnerThread
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)OwnerTable[9].OwnerThread) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v18, v14);
    *(_QWORD *)(v53 + 24) = 3851LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( a8 )
  {
    v19 = *((_QWORD *)a8 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v19 + 144));
  }
  v20 = a5;
  v21 = 0LL;
  if ( !v11->NumAllocations )
  {
LABEL_53:
    v11->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v11->Flags & 0xFFFFBFFF | (v117 << 14));
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)v20 + 6);
    hSection = 0LL;
    v24 = 0LL;
    v118 = v123;
    v25 = &v10[(unsigned int)v21];
    v120 = 0LL;
    v26 = (LODWORD(v25->Size) + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v22 + 4) & 0x200F) != 0 )
      v118 = 1;
    if ( !*(_QWORD *)(v22 + 16) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v22, v14);
      *(_QWORD *)(v54 + 24) = 3879LL;
      WdLogEvent5_WdAssertion(v54);
      hSection = 0LL;
    }
    Value = v25->Flags.Value;
    if ( (Value & 0x4000) != 0 )
    {
      v14 = 352LL * ((*((_DWORD *)v20 + 18) >> 12) & 0x3F);
      v55 = *(_QWORD *)(this[2]->OwnerTable[160].OwnerThread + 16);
      v9 = *(_QWORD *)(v14 + *(_QWORD *)(v55 + 2440) + 32);
      if ( !*((_BYTE *)this + 1744) || !v9 )
      {
        v56 = WdLogNewEntry5_WdError(v55, v14, Value);
        v40 = (DXGDEVICE *)this;
        *(_QWORD *)(v56 + 24) = this;
        *(_QWORD *)(v56 + 32) = v9;
        WdLogEvent5_WdError(v56);
        LODWORD(v9) = -1073741823;
        goto LABEL_143;
      }
    }
    if ( !a7 )
      break;
    v48 = *(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL);
    if ( v48 )
      v35 = *(HANDLE *)(v48 + 184);
    else
      v35 = 0LL;
    v11 = a2;
    if ( (*(_DWORD *)&a2->Flags & 0x80u) != 0 )
      v121 = 1;
LABEL_40:
    v40 = (DXGDEVICE *)this;
    MaximumRenamingListLength = v25->MaximumRenamingListLength;
    v122 = 0;
    LODWORD(HandleInformation) = v121;
    LODWORD(v9) = (*(__int64 (__fastcall **)(PVOID, PERESOURCE, _QWORD, __int64, HANDLE, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount + 8LL) + 136LL))(
                    this[2][5].SharedWaiters,
                    this[81],
                    *(_QWORD *)(*((_QWORD *)v20 + 6) + 8LL),
                    MaximumRenamingListLength,
                    v35,
                    HandleInformation,
                    v20,
                    &v125,
                    &v122,
                    &v118);
    if ( !v117 || (v117 = 1, !v118) )
      v117 = 0;
    *((_DWORD *)v20 + 18) ^= (*((_DWORD *)v20 + 18) ^ (v122 << 12)) & 0x3F000;
    if ( (int)v9 < 0 )
      goto LABEL_143;
    v44 = v125;
    if ( !v125 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v93 + 24) = 4278LL;
      WdLogEvent5_WdAssertion(v93);
      v44 = v125;
    }
    *((_QWORD *)v20 + 3) = v44;
    v45 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v25->Flags.Value;
    if ( (*(_WORD *)&v45 & 0x100) != 0
      || (v46 = *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL), (v46 & 0x20) != 0)
      || (*(_DWORD *)&v45 & 0x20200) != 0
      || (v46 & 0x4000) != 0 )
    {
      if ( (v25->Flags.Value & 0x100) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL) |= 8u;
        v45 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v25->Flags.Value;
      }
      if ( (*(_WORD *)&v45 & 0x200) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL) |= 0x20u;
        v45 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v25->Flags.Value;
      }
      if ( (*(_DWORD *)&v45 & 0x20000) != 0 )
        *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL) |= 0x4000u;
      LODWORD(v9) = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount
                                                                                         + 8LL)
                                                                             + 224LL))(
                      this[2][5].SharedWaiters,
                      *((_QWORD *)v20 + 3),
                      0LL,
                      0LL);
      if ( (int)v9 < 0 )
        goto LABEL_143;
      v94 = *((_QWORD *)v20 + 6);
      *((_DWORD *)v20 + 18) |= 0x800u;
      if ( (*(_DWORD *)(v94 + 4) & 0x4000) != 0 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount + 8LL) + 232LL))(
          this[2][5].SharedWaiters,
          *((_QWORD *)v20 + 3));
        *((_DWORD *)v20 + 18) &= ~0x800u;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency((DXGDEVICE *)this) && a6 && *((_DWORD *)a6 + 4) == 2 )
    {
      v95 = this[2];
      v96 = *((_DWORD *)v20 + 18) >> 12;
      v126 = 0LL;
      v128 = 0LL;
      (*(void (__fastcall **)(PERESOURCE, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)&v95[5].ActiveCount + 8LL)
                                                                       + 976LL))(
        this[81],
        v96 & 0x3F,
        &v126,
        &v128);
      v97 = this[2];
      v127 = 0LL;
      v98 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)&v97[5].ActiveCount + 8LL)
                                                                                                + 768LL))(
              v97[5].SharedWaiters,
              v126,
              (__int64)v20 + 24,
              1LL,
              3,
              &v127,
              v130);
      v9 = v98;
      if ( v98 < 0 )
      {
        v109 = WdLogNewEntry5_WdError(v99, v14, v100);
        *(_QWORD *)(v109 + 24) = v9;
        WdLogEvent5_WdError(v109);
        goto LABEL_52;
      }
      if ( v98 == 259 )
      {
        (*(void (__fastcall **)(PVOID, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount
                                                                                 + 8LL)
                                                                     + 984LL))(
          this[2][5].SharedWaiters,
          &v128,
          &v127,
          1LL);
        LODWORD(v9) = 0;
      }
    }
    v20 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v11->NumAllocations )
      goto LABEL_52;
    v10 = a4;
  }
  v28 = a2;
  v119 = 0;
  v29 = *(_DWORD *)&a2->Flags & 0x20;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    v30 = a3;
    v14 = 96 * v21;
    if ( (_DWORD)v29 )
    {
      hSection = *(HANDLE *)((char *)&a3->hSection + v14);
      v120 = hSection;
      v25->Flags.Value = Value | 0x10;
      goto LABEL_24;
    }
    v57 = ObReferenceObjectByHandle(
            *(HANDLE *)((char *)&a3->hSection + v14),
            0x20000u,
            MmSectionObjectType,
            1,
            &v129,
            0LL);
    v24 = v129;
    v9 = v57;
    if ( v57 < 0 )
    {
      v102 = WdLogNewEntry5_WdError(v59, v58, v60);
      *(_QWORD *)(v102 + 24) = a3[v21].hSection;
      *(_QWORD *)(v102 + 32) = v9;
      WdLogEvent5_WdError(v102);
      goto LABEL_137;
    }
    v25->Flags.Value |= 0x400000u;
    v61 = ProcessSectionAttributes(v24, v25);
    v9 = v61;
    if ( v61 < 0 )
    {
      v101 = WdLogNewEntry5_WdError(v63, v62, v64);
      *(_QWORD *)(v101 + 24) = this;
      *(_QWORD *)(v101 + 32) = v9;
      WdLogEvent5_WdError(v101);
LABEL_136:
      ObfDereferenceObject(v24);
      goto LABEL_137;
    }
    v14 = *(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL);
    *(_DWORD *)(v14 + 12) |= 0x400u;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL) + 184LL) = v24;
    *(_DWORD *)(v14 + 196) = v25->Alignment;
    *(_DWORD *)(v14 + 12) ^= (*(_DWORD *)(v14 + 12) ^ (v25->Flags.Value << 9)) & 0x800;
    goto LABEL_100;
  }
  if ( !(_DWORD)v29 )
  {
    if ( (Value & 0x10) != 0 )
    {
      v30 = a3;
      hSection = a3[v21].hSection;
      v120 = hSection;
      goto LABEL_24;
    }
    if ( (Value & 0x400000) == 0 )
      goto LABEL_23;
    if ( a2->NumAllocations == 1
      && (Value & 0x2000000) != 0
      && a6
      && (v70 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4)) != 0LL )
    {
      v71 = a6;
    }
    else
    {
      v72 = WdLogNewEntry5_WdAssertion(v29, v14);
      *(_QWORD *)(v72 + 24) = 4015LL;
      WdLogEvent5_WdAssertion(v72);
      v71 = a6;
      v70 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4);
    }
    v24 = (PVOID)v70(*((_QWORD *)v71 + 5), v26);
    if ( !v24 )
    {
      v75 = WdLogNewEntry5_WdError(v73, v14, v74);
      *(_QWORD *)(v75 + 24) = 4021LL;
      goto LABEL_141;
    }
    v119 = 1;
LABEL_100:
    v28 = a2;
    hSection = v120;
LABEL_23:
    v30 = a3;
    goto LABEL_24;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v29, v14) + 299) & 8) != 0 )
  {
    v30 = a3;
    v28 = a2;
    hSection = a3[v21].hSection;
    v25->Flags.Value |= 0x10u;
    v120 = hSection;
  }
  else
  {
    if ( v25->Size > v26 )
    {
      LODWORD(v9) = -1073741811;
      v107 = WdLogNewEntry5_WdError(v65, v14, v66);
      *(_QWORD *)(v107 + 24) = v25->Size;
      *(_QWORD *)(v107 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v107);
      goto LABEL_142;
    }
    v25->Size = v26;
    v67 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v26);
    v120 = v67;
    hSection = v67;
    if ( !v67 )
    {
      v75 = WdLogNewEntry5_WdError(v68, v14, v69);
      *(_QWORD *)(v75 + 24) = 3996LL;
      goto LABEL_141;
    }
    v30 = a3;
    v28 = a2;
    a3[v21].hSection = v67;
  }
LABEL_24:
  v31 = a6;
  if ( a6 && (*(_DWORD *)a6 & 0x40) != 0 )
  {
    if ( *(_OWORD *)((char *)a6 + 328) == 0LL )
    {
      v75 = WdLogNewEntry5_WdError(0LL, v14, a6);
      *(_QWORD *)(v75 + 24) = 4043LL;
LABEL_141:
      WdLogEvent5_WdError(v75);
      LODWORD(v9) = -1073741823;
LABEL_142:
      v40 = (DXGDEVICE *)this;
      goto LABEL_143;
    }
    v76 = (void *)*((_QWORD *)a6 + 42);
    if ( v76 )
    {
      v25->Flags.Value |= 0x10u;
      hSection = v76;
      v120 = v76;
      v14 = *(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL);
      *(_DWORD *)(v14 + 12) |= 0x200u;
      *(_QWORD *)(v14 + 184) = v76;
    }
    else
    {
      if ( !*((_QWORD *)a6 + 41) )
        goto LABEL_25;
      v25->Flags.Value |= 0x400000u;
      ObfReferenceObject(*((PVOID *)a6 + 41));
      v31 = a6;
      hSection = v120;
      v28 = a2;
      v14 = *(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL);
      v24 = (PVOID)*((_QWORD *)a6 + 41);
      *(_DWORD *)(v14 + 12) |= 0x400u;
      *(_QWORD *)(v14 + 184) = *((_QWORD *)a6 + 41);
    }
    *(_DWORD *)(v14 + 196) = *((_DWORD *)v31 + 98);
    *(_DWORD *)(v14 + 12) ^= ((unsigned __int16)*(_DWORD *)(v14 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)v31 << 7)) & 0x800;
  }
LABEL_25:
  v32 = v21;
  if ( (v30[v21].Flags.Value & 4) != 0 )
  {
    v25->AllocationPriority = v30[v32].Priority;
  }
  else if ( !v25->AllocationPriority )
  {
    v77 = WdLogNewEntry5_WdError(v32 * 96, v14, v31);
    *(_QWORD *)(v77 + 24) = 4089LL;
    WdLogEvent5_WdError(v77);
    hSection = v120;
    v28 = a2;
  }
  v33 = *((_QWORD *)v20 + 5);
  v34 = 0;
  if ( !v33 || (v25->Flags.Value & 0x100000) == 0 || (v78 = *(_QWORD *)(v33 + 56), v34 = 1, *(_QWORD *)(v78 + 176)) )
  {
LABEL_29:
    if ( (*(_DWORD *)&v28->Flags & 0x10020) == 0x10020 )
    {
      LODWORD(v9) = ProcessSysMemAttributes(hSection, v26, v25);
      if ( (int)v9 < 0 )
        goto LABEL_142;
      v35 = v120;
      v85 = *(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL);
      *(_DWORD *)(v85 + 12) |= 0x200u;
      v86 = *(_DWORD *)(v85 + 12);
      *(_QWORD *)(v85 + 184) = v35;
      *(_DWORD *)(v85 + 196) = v25->Alignment;
      *(_DWORD *)(v85 + 12) = v86 ^ ((unsigned __int16)v86 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v25->Flags.0 << 9)) & 0x800;
    }
    else
    {
      v35 = v120;
    }
    if ( v34 )
      v36 = *(_QWORD *)(*((_QWORD *)v20 + 5) + 56LL) + 176LL;
    else
      v36 = 0LL;
    LODWORD(v9) = (*(__int64 (__fastcall **)(PERESOURCE, struct _DXGK_ALLOCATIONINFO *, _QWORD, PVOID, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount + 8LL) + 120LL))(
                    this[81],
                    v25,
                    *((_QWORD *)v20 + 6),
                    v24,
                    v36,
                    &v124);
    if ( v119 )
      ObfDereferenceObject(v24);
    if ( (int)v9 < 0 )
      goto LABEL_142;
    v39 = v124;
    if ( !v124 )
    {
      v87 = WdLogNewEntry5_WdAssertion(0LL, v37);
      *(_QWORD *)(v87 + 24) = 4174LL;
      WdLogEvent5_WdAssertion(v87);
      v39 = v124;
    }
    *(_QWORD *)(*((_QWORD *)v20 + 6) + 8LL) = v39;
    if ( !a6 )
      goto LABEL_39;
    v49 = *((_DWORD *)a6 + 4);
    if ( v49 == 4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v90 = (_DWORD *)*((_QWORD *)a6 + 3);
        v91 = *((_QWORD *)v20 + 6);
        LODWORD(v116) = v90[5];
        LODWORD(v115) = v90[4];
        LODWORD(v114) = v90[3];
        LODWORD(v113) = v90[2];
        LODWORD(v112) = v90[1];
        LODWORD(HandleInformation) = *v90;
        v92 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationGdiSurface;
        LODWORD(Object) = *(_DWORD *)a6;
LABEL_121:
        McTemplateK0pqqqqqqq((__int64)v90, v92, v38, v91, Object, HandleInformation, v112, v113, v114, v115, v116);
      }
    }
    else
    {
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          if ( v51 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v88 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v113) = v88[2];
            LODWORD(v112) = v88[1];
            LODWORD(HandleInformation) = *v88;
            LODWORD(Object) = *(_DWORD *)a6;
            McTemplateK0pqtqq(
              (__int64)v88,
              &EventCddStandardAllocationStagingSurface,
              v38,
              *((_QWORD *)v20 + 6),
              Object,
              HandleInformation,
              v112,
              v113);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v89 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v114) = v89[3];
          LODWORD(v113) = v89[2];
          LODWORD(v112) = v89[1];
          LODWORD(HandleInformation) = *v89;
          LODWORD(Object) = *(_DWORD *)a6;
          McTemplateK0pqqqqq(
            (__int64)v89,
            (__int64)a6,
            v38,
            *((_QWORD *)v20 + 6),
            Object,
            HandleInformation,
            v112,
            v113,
            v114);
        }
        goto LABEL_39;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v90 = (_DWORD *)*((_QWORD *)a6 + 3);
        v91 = *((_QWORD *)v20 + 6);
        LODWORD(v116) = v90[5];
        LODWORD(v115) = v90[4];
        LODWORD(v114) = v90[3];
        LODWORD(v113) = v90[2];
        LODWORD(v112) = v90[1];
        LODWORD(HandleInformation) = *v90;
        v92 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationSharedPrimarySurface;
        LODWORD(Object) = *(_DWORD *)a6;
        goto LABEL_121;
      }
    }
LABEL_39:
    v11 = a2;
    goto LABEL_40;
  }
  v79 = 0LL;
  Size = 0LL;
  if ( (*(_DWORD *)&v28->Flags & 0x10000) != 0 && hSection )
  {
    v79 = hSection;
    Size = v28->pStandardAllocation->ExistingHeapData.Size;
  }
  v81 = (*(__int64 (__fastcall **)(PVOID, __int64, HANDLE, SIZE_T))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount + 8LL)
                                                                  + 1200LL))(
          this[2][5].SharedWaiters,
          v78 + 176,
          v79,
          Size);
  v9 = v81;
  if ( v81 >= 0 )
  {
    hSection = v120;
    v28 = a2;
    goto LABEL_29;
  }
  v108 = WdLogNewEntry5_WdError(v83, v82, v84);
  *(_QWORD *)(v108 + 24) = v9;
  WdLogEvent5_WdError(v108);
  if ( v119 )
    goto LABEL_136;
LABEL_137:
  v40 = (DXGDEVICE *)this;
  v11 = a2;
LABEL_52:
  if ( (int)v9 >= 0 )
    goto LABEL_53;
LABEL_143:
  v103 = 0;
  if ( a2->NumAllocations )
  {
    v104 = a5;
    do
    {
      if ( (*((_DWORD *)v104 + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 544LL) + 8LL) + 232LL))(
          *(_QWORD *)(*((_QWORD *)v40 + 2) + 552LL),
          *((_QWORD *)v104 + 3));
        *((_DWORD *)v104 + 18) &= ~0x800u;
      }
      v105 = *((_QWORD *)v104 + 6);
      if ( *(_QWORD *)(v105 + 8)
        && !a7
        && (!*((_DWORD *)v40 + 82) && (*(_DWORD *)(v105 + 4) & 1) != 0 || (*(_DWORD *)(v105 + 4) & 2) != 0) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 544LL) + 8LL) + 192LL))(*(_QWORD *)(*((_QWORD *)v40 + 2) + 552LL));
        *(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) |= 0x10u;
      }
      v106 = *((_QWORD *)v104 + 3);
      if ( v106 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 544LL)
                                                                            + 8LL)
                                                                + 160LL))(
          *(_QWORD *)(*((_QWORD *)v40 + 2) + 552LL),
          v106,
          0LL,
          0LL);
        *((_QWORD *)v104 + 3) = 0LL;
      }
      if ( *(_QWORD *)(*((_QWORD *)v104 + 6) + 8LL) && !a7 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 544LL) + 8LL) + 128LL))(
          *((_QWORD *)v40 + 81),
          0LL);
        *(_QWORD *)(*((_QWORD *)v104 + 6) + 8LL) = 0LL;
      }
      v104 = (struct DXGALLOCATION *)*((_QWORD *)v104 + 8);
      ++v103;
    }
    while ( v103 < a2->NumAllocations );
  }
  return (unsigned int)v9;
}
