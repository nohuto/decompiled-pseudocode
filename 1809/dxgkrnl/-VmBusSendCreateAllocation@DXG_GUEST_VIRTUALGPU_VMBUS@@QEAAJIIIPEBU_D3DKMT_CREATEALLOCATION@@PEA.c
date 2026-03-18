/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C01F2D0C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C01E7CC4 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C01E7D3C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
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
  UINT PrivateRuntimeDataSize; // edx
  unsigned int v15; // r8d
  __int64 NumAllocations; // r9
  unsigned int v17; // ebx
  unsigned int v18; // r10d
  UINT *p_PrivateDriverDataSize; // r11
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // r12d
  unsigned int v25; // esi
  char *v26; // rax
  char *v27; // rdi
  _DWORD *v29; // r13
  struct _MDL *v30; // rbx
  __int64 v31; // rcx
  size_t v32; // r8
  char v33; // al
  UINT PrivateDriverDataSize; // edx
  __int64 v35; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v36; // eax
  char v37; // r15
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // ebx
  UINT v41; // eax
  UINT v42; // edx
  UINT v43; // r9d
  _DWORD *v44; // r12
  UINT *v45; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  const void *v49; // rdx
  __int64 v50; // rcx
  struct _MDL *v51; // r9
  __int64 v52; // r15
  UINT v53; // edx
  char *v54; // r12
  UINT *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // r15
  SIZE_T v58; // rax
  PMDL PagesForMdl; // rax
  __int64 v60; // rcx
  struct DXGGLOBAL *v61; // rax
  __int64 v62; // rax
  PVOID v63; // r12
  void *v64; // rax
  NTSTATUS v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 CurrentProcess; // rax
  __int64 v70; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  struct _MDL *Flags; // [rsp+30h] [rbp-89h]
  UINT v82; // [rsp+58h] [rbp-61h]
  char *v83; // [rsp+58h] [rbp-61h]
  __int64 v84; // [rsp+60h] [rbp-59h] BYREF
  void *v85; // [rsp+68h] [rbp-51h] BYREF
  PVOID Object; // [rsp+70h] [rbp-49h] BYREF
  __int64 v87; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v88[2]; // [rsp+80h] [rbp-39h]
  __int64 v89; // [rsp+88h] [rbp-31h]
  __int64 v90; // [rsp+90h] [rbp-29h] BYREF
  int v91; // [rsp+98h] [rbp-21h]
  int v92; // [rsp+9Ch] [rbp-1Dh]
  int v93; // [rsp+A0h] [rbp-19h]
  int v94; // [rsp+A8h] [rbp-11h]
  int v95; // [rsp+ACh] [rbp-Dh]
  int v96; // [rsp+B0h] [rbp-9h]
  int v101; // [rsp+128h] [rbp+6Fh]
  int v102; // [rsp+128h] [rbp+6Fh]

  *a12 = 0LL;
  if ( !(_BYTE)a10 || (v13 = (*(_DWORD *)&a5->Flags & 0x10000) == 0, LOBYTE(a10) = 1, !v13) )
    LOBYTE(a10) = 0;
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  if ( PrivateRuntimeDataSize + a5->PrivateDriverDataSize < PrivateRuntimeDataSize )
    return 2147483653LL;
  v15 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  NumAllocations = a5->NumAllocations;
  v17 = 0;
  v18 = 0;
  if ( (_DWORD)NumAllocations )
  {
    p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
    do
    {
      v20 = v17;
      v21 = v17 + *p_PrivateDriverDataSize;
      v22 = -1;
      if ( v21 >= v17 )
        v22 = v17 + *p_PrivateDriverDataSize;
      v17 = v22;
      if ( v21 < v20 )
        return 2147483653LL;
      ++v18;
      p_PrivateDriverDataSize += 24;
    }
    while ( v18 < (unsigned int)NumAllocations );
  }
  if ( v17 + v15 < v15 )
    return 2147483653LL;
  if ( v17 + v15 + 64 < v17 + v15 )
    return 2147483653LL;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  v23 = 12 * NumAllocations;
  v24 = 12 * NumAllocations;
  if ( 12 * (_DWORD)NumAllocations + v17 + v15 + 64 < v17 + v15 + 64 )
    return 2147483653LL;
  v25 = v23 + v17 + v15 + 64;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v17 > 0x20000 )
    return 2147483653LL;
  v101 = 0;
  v26 = (char *)operator new[](v23 + v17 + v15 + 64, 0x4B677844u, (POOL_TYPE)512);
  v27 = v26;
  if ( !v26 )
    return 3221225495LL;
  memset(v26, 0, v25);
  *(_QWORD *)v27 = 0LL;
  *((_QWORD *)v27 + 1) = 0LL;
  *((_DWORD *)v27 + 4) = 4;
  LODWORD(v85) = (v17 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
  v89 = (unsigned int)v85;
  v29 = operator new((unsigned int)v85, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v29 )
  {
    LODWORD(v30) = -1073741801;
    goto LABEL_89;
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
      v35 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v35 + 24) = 6518LL;
      WdLogEvent5_WdError(v35);
      LODWORD(v30) = -1073741811;
      goto LABEL_89;
    }
    LODWORD(v31) = v31 & 0xFFFFE7FF;
    *((_DWORD *)v27 + 11) = v31;
  }
  v36 = a5->Flags;
  if ( (*(_BYTE *)&v36 & 8) != 0 )
  {
    v37 = 1;
    v38 = v31 & 0xFFFFFFF7;
LABEL_27:
    LOBYTE(v101) = v37;
    *((_DWORD *)v27 + 11) = v38 | 0x20;
    goto LABEL_33;
  }
  if ( (*(_BYTE *)&v36 & 0x20) != 0 )
  {
    v37 = 2;
    LOBYTE(v101) = 2;
  }
  else
  {
    if ( (*(_DWORD *)&v36 & 0x20000) != 0 )
    {
      v37 = 2;
      v38 = v31 & 0xFFFDFFFF;
      goto LABEL_27;
    }
    v37 = 0;
  }
LABEL_33:
  v39 = (unsigned int)(v24 + 64);
  v40 = v39 + a5->PrivateRuntimeDataSize;
  if ( (_DWORD)v32 && Src )
  {
    memmove(&v27[v39], Src, v32);
    PrivateDriverDataSize = *((_DWORD *)v27 + 9);
  }
  v41 = PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a8 )
  {
    memmove(&v27[v40], a8, PrivateDriverDataSize);
    v41 = *((_DWORD *)v27 + 9);
  }
  v42 = 0;
  v43 = v41 + v40;
  v44 = v27 + 64;
  v82 = v41 + v40;
  LODWORD(v84) = 0;
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
          LOBYTE(v101) = v37;
        }
      }
      else if ( (*(_BYTE *)&v46 & 0x20) != 0 )
      {
        LODWORD(v30) = -1073741811;
        v62 = WdLogNewEntry5_WdError(v39);
        *(_QWORD *)(v62 + 24) = 6601LL;
        WdLogEvent5_WdError(v62);
        goto LABEL_89;
      }
      *v44 = v45[2];
      v44[2] = v45[1];
      v47 = *v45;
      if ( v43 + (unsigned int)v47 > v25 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47);
        v48[5] = 0LL;
        v48[6] = 0LL;
        v48[7] = 0LL;
        v48[3] = 275LL;
        v48[4] = 2LL;
        WdLogEvent5_WdCriticalError(v48);
        LODWORD(v47) = *v45;
        v42 = v84;
        v43 = v82;
      }
      v44[1] = v47;
      v39 = *v45;
      if ( (_DWORD)v39 )
      {
        if ( (_BYTE)a10 )
          v49 = a7[v42];
        else
          v49 = (const void *)*((_QWORD *)v45 - 1);
        if ( v49 )
        {
          memmove(&v27[v43], v49, *v45);
          v39 = *v45;
          v43 = v82;
        }
        v42 = v84;
        v43 += v39;
        v82 = v43;
      }
      ++v42;
      v44 += 3;
      v45 += 24;
      LODWORD(v84) = v42;
    }
    while ( v42 < a5->NumAllocations );
  }
  a10 = (unsigned int)v85;
  LODWORD(v30) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (struct DXGKVMB_COMMAND_BASE *)v27,
                   v25,
                   v29,
                   &a10,
                   Flags);
  if ( (int)v30 < 0 )
    goto LABEL_89;
  LODWORD(v30) = -1073741823;
  if ( a10 < (unsigned int)v85 )
    goto LABEL_89;
  v52 = 0LL;
  v29[3] = v101;
  LODWORD(v30) = 0;
  v53 = a5->NumAllocations;
  v102 = 0;
  v54 = (char *)&v29[18 * v53 + 4];
  v83 = v54;
  if ( !v53 )
    goto LABEL_88;
  v55 = &a6->PrivateDriverDataSize;
  while ( 1 )
  {
    v56 = (unsigned int)a5->Flags;
    LOBYTE(v50) = (*((_DWORD *)v27 + 11) & 0x20020) == 0;
    if ( ((unsigned __int8)v50 & ((v56 & 8) == 0)) != 0 || (int)v30 < 0 )
      goto LABEL_83;
    v57 = 9 * v52;
    v58 = *(_QWORD *)&v29[2 * v57 + 8];
    *(_QWORD *)v88 = v58;
    if ( (v56 & 8) != 0 )
      break;
    v85 = 0LL;
    v63 = 0LL;
    v64 = (void *)*((_QWORD *)v55 - 2);
    LOBYTE(a10) = 0;
    if ( (v56 & 0x20000) != 0 )
    {
      v65 = ObReferenceObjectByHandle(v64, 0x20000u, 0LL, 1, &Object, 0LL);
      v63 = Object;
      v30 = (struct _MDL *)v65;
      if ( v65 >= 0 )
      {
        v87 = 0LL;
        v84 = *(_QWORD *)&v29[2 * v57 + 8];
        CurrentProcess = PsGetCurrentProcess(v67, v66);
        LODWORD(v30) = MmMapViewOfSection(v63, CurrentProcess, &v85, 0LL, v84, &v87, &v84, 2, 0, 4, (_DWORD)v83);
        if ( (int)v30 >= 0 )
        {
          LOBYTE(a10) = 1;
        }
        else
        {
          v70 = WdLogNewEntry5_WdError(v50);
          *(_QWORD *)(v70 + 24) = v84;
          WdLogEvent5_WdError(v70);
          ObfDereferenceObject(v63);
        }
      }
      else
      {
        v68 = WdLogNewEntry5_WdError(v67);
        *(_QWORD *)(v68 + 24) = *((_QWORD *)v55 - 2);
        *(_QWORD *)(v68 + 32) = v30;
        WdLogEvent5_WdError(v68);
      }
    }
    else
    {
      v85 = v64;
    }
    if ( (int)v30 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v50);
      LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                       *((DXG_GUEST_GLOBAL_VMBUS **)Global + 168),
                       v85,
                       v88[0],
                       &v29[2 * v57 + 7]);
    }
    if ( (_BYTE)a10 )
    {
      v72 = PsGetCurrentProcess(v50, v56);
      MmUnmapViewOfSection(v72);
      ObfDereferenceObject(v63);
    }
    v54 = v83;
LABEL_77:
    if ( (int)v30 < 0 )
    {
      v73 = WdLogNewEntry5_WdError(v50);
      *(_QWORD *)(v73 + 24) = (int)v30;
LABEL_81:
      WdLogEvent5_WdError(v73);
      goto LABEL_82;
    }
    v90 = 0LL;
    v92 = 0;
    v91 = a2;
    v94 = a3;
    v95 = v29[2 * v57 + 4];
    v96 = v29[2 * v57 + 7];
    v93 = 45;
    v74 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (struct DXGKVMB_COMMAND_BASE *)&v90,
            0x28u,
            v51);
    v30 = (struct _MDL *)v74;
    if ( v74 < 0 )
    {
      v73 = WdLogNewEntry5_WdError(v75);
      *(_QWORD *)(v73 + 24) = v30;
      goto LABEL_81;
    }
LABEL_82:
    LODWORD(v52) = v102;
LABEL_83:
    v76 = *v55;
    if ( &v54[v76] > (char *)v29 + v89 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76);
      v77[5] = 0LL;
      v77[6] = 0LL;
      v77[7] = 0LL;
      v77[3] = 275LL;
      v77[4] = 2LL;
      WdLogEvent5_WdCriticalError(v77);
      LODWORD(v76) = *v55;
    }
    memmove(a7[(unsigned int)v52], v54, (unsigned int)v76);
    v52 = (unsigned int)(v52 + 1);
    v54 += *v55;
    v102 = v52;
    v55 += 24;
    v83 = v54;
    if ( (unsigned int)v52 >= a5->NumAllocations )
      goto LABEL_88;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v58, MmCached, 4u);
  v30 = PagesForMdl;
  if ( PagesForMdl )
  {
    *((_QWORD *)v55 - 2) = PagesForMdl;
    v61 = DXGGLOBAL::GetGlobal(v60);
    LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                     *((DXG_GUEST_GLOBAL_VMBUS **)v61 + 168),
                     v30,
                     &v29[2 * v57 + 7]);
    goto LABEL_77;
  }
  LODWORD(v30) = -1073741801;
  v78 = WdLogNewEntry5_WdLowResource(v60);
  *(_QWORD *)(v78 + 24) = 6678LL;
  WdLogEvent5_WdLowResource(v78);
LABEL_88:
  *a12 = (unsigned __int8 *)v29;
  v29 = 0LL;
LABEL_89:
  operator delete[](v29);
  operator delete[](v27);
  if ( (int)v30 < 0 )
  {
    v80 = WdLogNewEntry5_WdError(v79);
    *(_QWORD *)(v80 + 24) = (int)v30;
    WdLogEvent5_WdError(v80);
  }
  return (unsigned int)v30;
}
