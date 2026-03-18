/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C0177880
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiAcpiExposeInfo @ 0x1C01775B0 (DpiAcpiExposeInfo.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0177BB4 (DpiFdoCreateChildDescriptor.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C0177D3C (DxgkDWCloneCheckTargetID.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C017816C (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02A23B8 (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rdi
  int ChildRelations; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // r10
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // r15
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // ebx
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int i; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  SIZE_T v39; // rax
  bool v40; // al
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // [rsp+30h] [rbp-68h]
  unsigned int v53; // [rsp+34h] [rbp-64h]
  unsigned int v54; // [rsp+38h] [rbp-60h]
  char v56; // [rsp+A8h] [rbp+10h]
  unsigned int v57; // [rsp+B0h] [rbp+18h]
  unsigned int v58; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2680) + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v15) = -1073741801;
    v34 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
    goto LABEL_41;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v10, v4);
  v15 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v35 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v35 + 32) = v15;
    WdLogEvent5_WdError(v35);
    goto LABEL_33;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3304), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3408), Executive, 0, 0, 0LL);
  v52 = -1;
  v16 = 0LL;
  v17 = -1;
  v56 = 0;
  v18 = 0xFFFFFFFFLL;
  *(_DWORD *)(v1 + 3480) = 0;
  v19 = 0xFFFFFFFFLL;
  v58 = -1;
  v20 = 0;
  v21 = 0LL;
  LOBYTE(v22) = 0;
  v53 = 0;
  v57 = 0;
  v54 = -1;
  *(_WORD *)(v1 + 2697) = 257;
  if ( !*(_DWORD *)(v1 + 2680) )
  {
LABEL_16:
    if ( *(_QWORD *)(v1 + 3184) == v16 )
    {
      if ( !v20 )
      {
        v31 = 0;
LABEL_24:
        if ( v31 )
          *(_DWORD *)(v1 + 3224) = v19;
        if ( v17 != -1 )
        {
          v50 = 7LL * v17;
          if ( v10[v50 + 1] == 6 )
            v10[v50 + 1] = 0x80000000;
          if ( (_BYTE)v22 )
          {
            v51 = WdLogNewEntry5_WdError(v50 * 4, v18, v19);
            *(_QWORD *)(v51 + 24) = 0LL;
            WdLogEvent5_WdError(v51);
            *(_DWORD *)(v1 + 2720) |= 1u;
          }
        }
        if ( *(_BYTE *)(v1 + 1157) == 1 )
          DpiAcpiExposeInfo(v2);
        for ( i = 0; i < *(_DWORD *)(v1 + 2680); ++i )
        {
          LOBYTE(v19) = 1;
          LODWORD(v15) = DpiFdoCreateChildDescriptor(
                           v1,
                           v10[7 * i + 6],
                           v19,
                           (unsigned int)v10 + 28 * i,
                           (__int64)&v10[7 * i + 1],
                           v10[7 * i + 5]);
          if ( (int)v15 < 0 )
            break;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v31 = v20 == 1;
      if ( v20 <= 1 )
        goto LABEL_24;
    }
LABEL_97:
    LODWORD(v15) = -1073741637;
    v49 = WdLogNewEntry5_WdError(v21, v18, v19);
    *(_QWORD *)(v49 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v49);
    goto LABEL_32;
  }
  while ( 1 )
  {
    v23 = (unsigned int)v21;
    v24 = 7LL * (unsigned int)v21;
    if ( v10[v24 + 4] == 2 )
    {
      v36 = WdLogNewEntry5_WdError(v21, v18, v19);
      *(_QWORD *)(v36 + 24) = 0LL;
      WdLogEvent5_WdError(v36);
      v21 = v57;
      v16 = 0LL;
      v18 = v58;
      v10[v24 + 4] = 4;
    }
    v25 = v10[v24];
    if ( v25 == 1 )
    {
      *(_BYTE *)(v1 + 2697) &= DxgkDWCloneCheckTargetID((unsigned int)v10[v24 + 6], v18, v19, v22);
      v26 = v10[v24 + 6];
      DXGGLOBAL::GetGlobal(v28, v27);
      *(_BYTE *)(v1 + 2698) &= (v26 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
      {
        v10[v24 + 1] = -1;
        v29 = D3DKMDT_VOT_OTHER;
        v37 = WdLogNewEntry5_WdWarning(v21, v18, v19);
        *(_QWORD *)(v37 + 24) = 0LL;
        WdLogEvent5_WdWarning(v37);
      }
      else
      {
        v29 = v10[v24 + 1];
        if ( v29 < D3DKMDT_VOT_HD15 )
        {
          v29 = D3DKMDT_VOT_OTHER;
          if ( (v10[v24 + 1] & 0x7FFFFFFFu) <= 0xE )
            v29 = 0x80000000;
        }
        v10[v24 + 1] = v29;
        if ( (unsigned int)v29 >= D3DKMDT_VOT_MIRACAST
          && (unsigned int)v29 <= (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED) )
        {
          if ( v10[v24 + 4] != 4 )
            goto LABEL_45;
          if ( v29 == D3DKMDT_VOT_MIRACAST )
          {
            ++v53;
            v54 = v10[v24 + 6];
          }
          else if ( !*(_BYTE *)(v1 + 1159) )
          {
            goto LABEL_45;
          }
        }
      }
      if ( !IsInternalVideoOutput(v29) && v29 != D3DKMDT_VOT_LVDS )
        goto LABEL_12;
      v18 = v58;
      if ( v58 == -1 )
      {
        *(_DWORD *)(v1 + 3484) = v10[v24 + 6];
        if ( *(_BYTE *)(v1 + 1152) == (_BYTE)v16
          && *(_BYTE *)(v1 + 1154) == (_BYTE)v16
          && (*(_BYTE *)(v1 + 1155) == (_BYTE)v16 || *(_BYTE *)(v1 + 480) == (_BYTE)v16) )
        {
          v2 = a1;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          if ( *(_DWORD *)(v21 + 28) >= 0x4000u && *(_BYTE *)(v1 + 2692) == (_BYTE)v16 )
            goto LABEL_97;
        }
        if ( v17 == -1 )
        {
          v17 = v57;
          LODWORD(v21) = v57;
          v52 = v29;
          goto LABEL_14;
        }
        if ( *(_BYTE *)(v1 + 2692) != (_BYTE)v16 )
        {
          LODWORD(v21) = v57;
          goto LABEL_14;
        }
        v39 = RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL);
        v16 = 0LL;
        if ( v39 == 16 && byte_1C00A2758 )
          goto LABEL_12;
        v19 = v52;
        v56 = 1;
        if ( v29 == v52 )
          goto LABEL_67;
        switch ( v29 )
        {
          case D3DKMDT_VOT_INTERNAL:
            v40 = 1;
            break;
          case D3DKMDT_VOT_LVDS:
            v40 = v52 != 0x80000000;
            break;
          case D3DKMDT_VOT_DISPLAYPORT_EMBEDDED:
            v40 = v52 == 13;
            break;
          default:
LABEL_67:
            v10[v24 + 1] = -1;
LABEL_12:
            LODWORD(v21) = v57;
LABEL_13:
            v18 = v58;
            goto LABEL_14;
        }
        if ( v40 )
        {
          v41 = v17;
          v17 = v57;
          v52 = v29;
          v10[7 * v41 + 1] = -1;
          LODWORD(v21) = v57;
          goto LABEL_13;
        }
        goto LABEL_67;
      }
      LODWORD(v15) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v30, v58, v19);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[v24 + 6];
      v48 = (unsigned int)v10[7 * v58 + 6];
LABEL_99:
      *(_QWORD *)(v38 + 32) = v48;
      goto LABEL_96;
    }
    if ( v25 != 3 )
    {
      if ( v25 == 2 || *(_DWORD *)(v3 + 28) < 0x700Au )
        goto LABEL_14;
      LODWORD(v15) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v21, v18, v19);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[7 * v23 + 6];
      v48 = (int)v10[7 * v23];
      goto LABEL_99;
    }
    if ( *(_DWORD *)(v3 + 28) < 0x7007u )
    {
      LODWORD(v15) = -1073741637;
      v42 = WdLogNewEntry5_WdError(v21, v18, v19);
      *(_QWORD *)(v42 + 24) = *(unsigned int *)(v3 + 28);
      *(_QWORD *)(v42 + 32) = 28680LL;
      WdLogEvent5_WdError(v42);
      v16 = 0LL;
      goto LABEL_12;
    }
    if ( v17 != -1 )
    {
      LODWORD(v15) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v21, v18, v19);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[7 * v17 + 6];
      goto LABEL_102;
    }
    if ( *(_BYTE *)(v1 + 1152) == (_BYTE)v16
      && *(_BYTE *)(v1 + 1154) == (_BYTE)v16
      && (*(_BYTE *)(v1 + 1155) == (_BYTE)v16 || *(_BYTE *)(v1 + 480) == (_BYTE)v16)
      && *(_BYTE *)(v1 + 2692) == (_BYTE)v16
      || *(_BYTE *)(v1 + 2692) == (_BYTE)v16 && byte_1C00A2758 == (_BYTE)v16 && (_DWORD)v18 != -1 )
    {
LABEL_45:
      LODWORD(v15) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v21, v18, v19);
      *(_QWORD *)(v38 + 24) = -1073741637LL;
      goto LABEL_96;
    }
    v43 = DxgkDWCloneCheckTargetID((unsigned int)v10[v24 + 6], v18, v19, v22);
    v16 = 0LL;
    if ( !v43 )
    {
      LODWORD(v15) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v45, v44, v19);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[v24 + 6];
      goto LABEL_96;
    }
    v46 = (int)v10[v24 + 1];
    if ( (_DWORD)v46 != 0x80000000 && ((int)v46 <= 3 || (int)v46 > 6 && (unsigned int)(v46 - 8) > 5) )
      break;
    v47 = v10[v24 + 4];
    if ( v47 != 4 && v47 != 1 )
    {
      LODWORD(v15) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v45, v44, v19);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[7 * v23 + 6];
      goto LABEL_96;
    }
    v18 = v58;
    if ( v58 == -1 )
    {
      v18 = v57;
      LODWORD(v21) = v57;
      v58 = v57;
      *(_DWORD *)(v1 + 3484) = v10[v24 + 6];
    }
    else
    {
      LODWORD(v21) = v57;
    }
LABEL_14:
    v21 = (unsigned int)(v21 + 1);
    v57 = v21;
    if ( (unsigned int)v21 >= *(_DWORD *)(v1 + 2680) )
    {
      v20 = v53;
      v2 = a1;
      v19 = v54;
      LOBYTE(v22) = v56;
      goto LABEL_16;
    }
  }
  LODWORD(v15) = -1073741637;
  v38 = WdLogNewEntry5_WdError(v45, v44, v19);
  *(_QWORD *)(v38 + 24) = v46;
LABEL_102:
  *(_QWORD *)(v38 + 32) = (unsigned int)v10[7 * v23 + 6];
LABEL_96:
  WdLogEvent5_WdError(v38);
  v2 = a1;
LABEL_32:
  KeReleaseMutex((PRKMUTEX)(v1 + 3408), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3304));
  KeLeaveCriticalRegion();
LABEL_33:
  if ( (int)v15 < 0 )
LABEL_41:
    DpiFdoRemoveChildDescriptors(v2);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v15;
}
