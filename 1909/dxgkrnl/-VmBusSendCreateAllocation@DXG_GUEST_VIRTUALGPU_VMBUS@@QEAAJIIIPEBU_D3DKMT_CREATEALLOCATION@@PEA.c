/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C02230A0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C0217AA4 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0217B1C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *Src,
        unsigned int a10,
        char a11,
        unsigned __int8 **a12)
{
  bool v13; // zf
  UINT PrivateRuntimeDataSize; // ecx
  unsigned int v15; // edx
  __int64 NumAllocations; // rcx
  unsigned int v17; // edi
  unsigned int v18; // r9d
  UINT *p_PrivateDriverDataSize; // r8
  unsigned int v20; // r10d
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // r15d
  __int64 v24; // r8
  size_t v25; // r12
  char *v26; // rax
  char *v27; // r14
  _DWORD *v29; // r13
  struct _MDL *v30; // rdi
  __int64 v31; // rcx
  size_t v32; // r8
  char v33; // al
  __int64 PrivateDriverDataSize; // rdx
  __int64 v35; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v36; // eax
  char v37; // r12
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // edi
  int v41; // eax
  int v42; // r9d
  __int64 v43; // rdx
  _DWORD *v44; // r15
  UINT *v45; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  const void *v49; // rdx
  __int64 v50; // r8
  struct _MDL *v51; // r9
  UINT v52; // r12d
  UINT v53; // edx
  __int64 v54; // rcx
  union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB *p_hSection; // r15
  __int64 v56; // rdx
  __int64 v57; // r12
  SIZE_T v58; // rax
  PMDL PagesForMdl; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  struct DXGGLOBAL *v64; // rax
  __int64 v65; // rax
  NTSTATUS v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 CurrentProcess; // rax
  __int64 v72; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 hSection_low; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rax
  struct _MDL *Flags; // [rsp+30h] [rbp-99h]
  int v89; // [rsp+58h] [rbp-71h]
  char *v90; // [rsp+58h] [rbp-71h]
  __int64 v91; // [rsp+60h] [rbp-69h] BYREF
  PVOID v92; // [rsp+68h] [rbp-61h]
  void *hSection; // [rsp+70h] [rbp-59h] BYREF
  PVOID Object; // [rsp+78h] [rbp-51h] BYREF
  __int64 v95; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v96[2]; // [rsp+88h] [rbp-41h]
  __int64 v97; // [rsp+90h] [rbp-39h]
  __int64 v98; // [rsp+98h] [rbp-31h] BYREF
  int v99; // [rsp+A0h] [rbp-29h]
  int v100; // [rsp+A4h] [rbp-25h]
  int v101; // [rsp+A8h] [rbp-21h]
  int v102; // [rsp+B0h] [rbp-19h]
  int v103; // [rsp+B4h] [rbp-15h]
  int v104; // [rsp+B8h] [rbp-11h]
  int v109; // [rsp+138h] [rbp+6Fh]
  UINT v110; // [rsp+138h] [rbp+6Fh]

  *a12 = 0LL;
  if ( !(_BYTE)a10 || (v13 = (*(_DWORD *)&a5->Flags & 0x10000) == 0, LOBYTE(a10) = 1, !v13) )
    LOBYTE(a10) = 0;
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v15 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  if ( v15 < PrivateRuntimeDataSize )
    return 2147483653LL;
  NumAllocations = a5->NumAllocations;
  v17 = 0;
  v18 = 0;
  if ( (_DWORD)NumAllocations )
  {
    p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
    do
    {
      v20 = v17 + *p_PrivateDriverDataSize;
      if ( v20 < v17 )
        return 2147483653LL;
      ++v18;
      p_PrivateDriverDataSize += 24;
      v17 = v20;
    }
    while ( v18 < (unsigned int)NumAllocations );
  }
  v21 = v17 + v15;
  if ( v17 + v15 < v15 )
    return 2147483653LL;
  v22 = v21 + 64;
  if ( (unsigned int)v22 < v21 )
    return 2147483653LL;
  v23 = 12 * NumAllocations;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  v24 = (unsigned int)(v23 + v22);
  LODWORD(v92) = v24;
  if ( (unsigned int)v24 < (unsigned int)v22 )
    return 2147483653LL;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v17 > 0x20000 )
  {
    v87 = WdLogNewEntry5_WdError(NumAllocations, v22, v24);
    *(_QWORD *)(v87 + 24) = v17;
    *(_QWORD *)(v87 + 32) = a5->NumAllocations;
    WdLogEvent5_WdError(v87);
    return 2147483653LL;
  }
  v25 = (unsigned int)v24;
  v109 = 0;
  v26 = (char *)operator new[]((unsigned int)v24, 0x4B677844u, (POOL_TYPE)512);
  v27 = v26;
  if ( !v26 )
    return 3221225495LL;
  memset(v26, 0, v25);
  *(_QWORD *)v27 = 0LL;
  *((_QWORD *)v27 + 1) = 0LL;
  *((_DWORD *)v27 + 4) = 4;
  LODWORD(hSection) = (v17 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
  v97 = (unsigned int)hSection;
  v29 = operator new((unsigned int)hSection, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v29 )
  {
    LODWORD(v30) = -1073741801;
    goto LABEL_86;
  }
  *((_DWORD *)v27 + 6) = a3;
  *((_DWORD *)v27 + 2) = a2;
  v31 = (unsigned int)a5->Flags;
  *((_DWORD *)v27 + 11) = v31;
  LODWORD(v31) = v31 & 0xFFFEFFFF;
  *((_DWORD *)v27 + 7) = a4;
  *((_QWORD *)v27 + 6) = a5->hPrivateRuntimeResourceHandle;
  *((_DWORD *)v27 + 10) = a5->NumAllocations;
  v32 = a5->PrivateRuntimeDataSize;
  v33 = a11;
  *((_DWORD *)v27 + 8) = v32;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  *((_DWORD *)v27 + 9) = PrivateDriverDataSize;
  v27[56] = v33;
  *((_DWORD *)v27 + 11) = v31;
  if ( (v31 & 0x1800) != 0 )
  {
    if ( (*(_DWORD *)&a5->Flags & 0x20020) == 0 )
    {
      v35 = WdLogNewEntry5_WdError(v31, PrivateDriverDataSize, v32);
      *(_QWORD *)(v35 + 24) = 6484LL;
      WdLogEvent5_WdError(v35);
      LODWORD(v30) = -1073741811;
      goto LABEL_86;
    }
    LODWORD(v31) = v31 & 0xFFFFE7FF;
    *((_DWORD *)v27 + 11) = v31;
  }
  v36 = a5->Flags;
  if ( (*(_BYTE *)&v36 & 8) != 0 )
  {
    v37 = 1;
    v38 = v31 & 0xFFFFFFF7;
LABEL_25:
    LOBYTE(v109) = v37;
    *((_DWORD *)v27 + 11) = v38 | 0x20;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)&v36 & 0x20) != 0 )
  {
    v37 = 2;
    LOBYTE(v109) = 2;
  }
  else
  {
    if ( (*(_DWORD *)&v36 & 0x20000) != 0 )
    {
      v37 = 2;
      v38 = v31 & 0xFFFDFFFF;
      goto LABEL_25;
    }
    v37 = 0;
  }
LABEL_31:
  v39 = (unsigned int)(v23 + 64);
  v40 = v39 + a5->PrivateRuntimeDataSize;
  if ( (_DWORD)v32 && Src )
  {
    memmove(&v27[v39], Src, v32);
    LODWORD(PrivateDriverDataSize) = *((_DWORD *)v27 + 9);
  }
  v41 = PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize && a8 )
  {
    memmove(&v27[v40], a8, (unsigned int)PrivateDriverDataSize);
    v41 = *((_DWORD *)v27 + 9);
  }
  v42 = v41 + v40;
  v43 = 0LL;
  v44 = v27 + 64;
  LODWORD(v91) = v41 + v40;
  v89 = 0;
  if ( a5->NumAllocations )
  {
    v45 = &a6->PrivateDriverDataSize;
    do
    {
      v46 = a5->Flags;
      if ( *((_QWORD *)v45 - 2) )
      {
        if ( (*(_DWORD *)&v46 & 0x20000) == 0 )
        {
          *((_DWORD *)v27 + 11) |= 0x20u;
          v37 |= 2u;
          LOBYTE(v109) = v37;
        }
      }
      else if ( (*(_BYTE *)&v46 & 0x20) != 0 )
      {
        LODWORD(v30) = -1073741811;
        v65 = WdLogNewEntry5_WdError(v39, v43, v32);
        *(_QWORD *)(v65 + 24) = 6567LL;
        WdLogEvent5_WdError(v65);
        goto LABEL_86;
      }
      *v44 = v45[2];
      v44[2] = v45[1];
      v47 = *v45;
      if ( v42 + (int)v47 > (unsigned int)v92 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v43);
        v48[3] = 275LL;
        v48[4] = 2LL;
        v48[5] = 0LL;
        v48[6] = 0LL;
        v48[7] = 0LL;
        WdLogEvent5_WdCriticalError(v48);
        LODWORD(v47) = *v45;
        LODWORD(v43) = v89;
        v42 = v91;
      }
      v44[1] = v47;
      v39 = *v45;
      if ( (_DWORD)v39 )
      {
        if ( (_BYTE)a10 )
          v49 = a7[(unsigned int)v43];
        else
          v49 = (const void *)*((_QWORD *)v45 - 1);
        if ( v49 )
        {
          memmove(&v27[v42], v49, *v45);
          v39 = *v45;
          v42 = v91;
        }
        LODWORD(v43) = v89;
        v42 += v39;
        LODWORD(v91) = v42;
      }
      v43 = (unsigned int)(v43 + 1);
      v44 += 3;
      v45 += 24;
      v89 = v43;
    }
    while ( (unsigned int)v43 < a5->NumAllocations );
  }
  a10 = (unsigned int)hSection;
  LODWORD(v30) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (struct DXGKVMB_COMMAND_BASE *)v27,
                   (unsigned int)v92,
                   v29,
                   &a10,
                   Flags);
  if ( (int)v30 < 0 )
    goto LABEL_86;
  LODWORD(v30) = -1073741823;
  if ( a10 < (unsigned int)hSection )
    goto LABEL_86;
  LODWORD(v30) = 0;
  v29[3] = v109;
  v52 = 0;
  v53 = a5->NumAllocations;
  v110 = 0;
  v54 = v53 - 1;
  v90 = (char *)&v29[16 * v54 + 22 + 2 * v54];
  if ( !v53 )
    goto LABEL_85;
  p_hSection = (union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB *)&a6->hSection;
  while ( 1 )
  {
    v56 = (unsigned int)a5->Flags;
    LOBYTE(v54) = (*((_DWORD *)v27 + 11) & 0x20020) == 0;
    if ( ((unsigned __int8)v54 & ((v56 & 8) == 0)) != 0 || (int)v30 < 0 )
      goto LABEL_80;
    v57 = 9LL * v52;
    v58 = *(_QWORD *)&v29[2 * v57 + 8];
    *(_QWORD *)v96 = v58;
    if ( (v56 & 8) != 0 )
      break;
    hSection = 0LL;
    v92 = 0LL;
    LOBYTE(a10) = 0;
    if ( (v56 & 0x20000) != 0 )
    {
      v66 = ObReferenceObjectByHandle(p_hSection->hSection, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
      v30 = (struct _MDL *)v66;
      v92 = Object;
      if ( v66 >= 0 )
      {
        v91 = *(_QWORD *)&v29[2 * v57 + 8];
        v95 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v68, v67);
        LODWORD(v30) = MmMapViewOfSection(v92, CurrentProcess, &hSection, 0LL, v91, &v95, &v91, 2, 0, 4, (_DWORD)v90);
        if ( (int)v30 >= 0 )
        {
          LOBYTE(a10) = 1;
        }
        else
        {
          v72 = WdLogNewEntry5_WdError(v54, v56, v50);
          *(_QWORD *)(v72 + 24) = v91;
          WdLogEvent5_WdError(v72);
          ObfDereferenceObject(v92);
        }
      }
      else
      {
        v70 = WdLogNewEntry5_WdError(v68, v67, v69);
        *(union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB *)(v70 + 24) = (union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB)p_hSection->hSection;
        *(_QWORD *)(v70 + 32) = v30;
        WdLogEvent5_WdError(v70);
      }
    }
    else
    {
      hSection = p_hSection->hSection;
    }
    if ( (int)v30 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v54, v56);
      LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                       *((struct _KTHREAD ***)Global + 164),
                       hSection,
                       v96[0],
                       &v29[2 * v57 + 7]);
    }
    if ( (_BYTE)a10 )
    {
      v74 = PsGetCurrentProcess(v54, v56);
      MmUnmapViewOfSection(v74);
      ObfDereferenceObject(v92);
    }
LABEL_74:
    if ( (int)v30 < 0 )
    {
      v75 = WdLogNewEntry5_WdError(v54, v56, v50);
      *(_QWORD *)(v75 + 24) = (int)v30;
LABEL_78:
      WdLogEvent5_WdError(v75);
      goto LABEL_79;
    }
    v99 = a2;
    v102 = a3;
    v103 = v29[2 * v57 + 4];
    v104 = v29[2 * v57 + 7];
    v98 = 0LL;
    v100 = 0;
    v101 = 45;
    v76 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (struct DXGKVMB_COMMAND_BASE *)&v98,
            0x28u,
            v51);
    v30 = (struct _MDL *)v76;
    if ( v76 < 0 )
    {
      v75 = WdLogNewEntry5_WdError(v78, v77, v79);
      *(_QWORD *)(v75 + 24) = v30;
      goto LABEL_78;
    }
LABEL_79:
    v52 = v110;
LABEL_80:
    hSection_low = LODWORD(p_hSection[2].hSection);
    if ( &v90[hSection_low] > (char *)v29 + v97 )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(hSection_low, (char *)v29 + v97);
      v81[3] = 275LL;
      v81[4] = 2LL;
      v81[5] = 0LL;
      v81[6] = 0LL;
      v81[7] = 0LL;
      WdLogEvent5_WdCriticalError(v81);
      LODWORD(hSection_low) = p_hSection[2].hSection;
    }
    memmove(a7[v52++], v90, (unsigned int)hSection_low);
    v90 += LODWORD(p_hSection[2].hSection);
    p_hSection += 12;
    v110 = v52;
    if ( v52 >= a5->NumAllocations )
      goto LABEL_85;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v58, MmCached, 4u);
  v30 = PagesForMdl;
  if ( PagesForMdl )
  {
    p_hSection->hSection = PagesForMdl;
    v64 = DXGGLOBAL::GetGlobal(v61, v60);
    LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(*((struct _KTHREAD ***)v64 + 164), v30, &v29[2 * v57 + 7]);
    goto LABEL_74;
  }
  LODWORD(v30) = -1073741801;
  v82 = WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
  *(_QWORD *)(v82 + 24) = 6644LL;
  WdLogEvent5_WdLowResource(v82);
LABEL_85:
  *a12 = (unsigned __int8 *)v29;
  v29 = 0LL;
LABEL_86:
  operator delete[](v29);
  operator delete[](v27);
  if ( (int)v30 < 0 )
  {
    v86 = WdLogNewEntry5_WdError(v84, v83, v85);
    *(_QWORD *)(v86 + 24) = (int)v30;
    WdLogEvent5_WdError(v86);
  }
  return (unsigned int)v30;
}
