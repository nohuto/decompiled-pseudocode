/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C0146340
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiAcpiExposeInfo @ 0x1C0146084 (DpiAcpiExposeInfo.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0146674 (DpiFdoCreateChildDescriptor.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C01467FC (DxgkDWCloneCheckTargetID.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C0146E28 (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C0266AE8 (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int ChildRelations; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r10
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // r15
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v25; // ebx
  __int64 v26; // rcx
  bool v27; // zf
  unsigned int i; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  SIZE_T v35; // rax
  bool v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // [rsp+30h] [rbp-68h]
  unsigned int v48; // [rsp+34h] [rbp-64h]
  int v49; // [rsp+38h] [rbp-60h]
  char v51; // [rsp+A8h] [rbp+10h]
  unsigned int v52; // [rsp+B0h] [rbp+18h]
  unsigned int v53; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2608) + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v10) = -1073741801;
    v30 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_41;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v7, v4);
  v10 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v31 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v31 + 32) = v10;
    WdLogEvent5_WdError(v31);
    goto LABEL_33;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3232), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3336), Executive, 0, 0, 0LL);
  v47 = -1;
  v11 = 0LL;
  v12 = -1;
  v51 = 0;
  v13 = 0xFFFFFFFFLL;
  *(_DWORD *)(v1 + 3408) = 0;
  v14 = 0xFFFFFFFFLL;
  v53 = -1;
  v15 = 0;
  v16 = 0LL;
  LOBYTE(v17) = 0;
  v48 = 0;
  v52 = 0;
  v49 = -1;
  *(_WORD *)(v1 + 2626) = 257;
  if ( !*(_DWORD *)(v1 + 2608) )
  {
LABEL_16:
    if ( *(_QWORD *)(v1 + 3112) == v11 )
    {
      if ( !v15 )
      {
        v27 = 0;
LABEL_24:
        if ( v27 )
          *(_DWORD *)(v1 + 3152) = v14;
        if ( v12 != -1 )
        {
          v45 = 7LL * v12;
          if ( v7[v45 + 1] == 6 )
            v7[v45 + 1] = 0x80000000;
          if ( (_BYTE)v17 )
          {
            v46 = WdLogNewEntry5_WdError(v45 * 4);
            *(_QWORD *)(v46 + 24) = 0LL;
            WdLogEvent5_WdError(v46);
            *(_DWORD *)(v1 + 2648) |= 1u;
          }
        }
        if ( *(_BYTE *)(v1 + 1149) == 1 )
          DpiAcpiExposeInfo(v2);
        for ( i = 0; i < *(_DWORD *)(v1 + 2608); ++i )
        {
          LOBYTE(v14) = 1;
          LODWORD(v10) = DpiFdoCreateChildDescriptor(
                           v1,
                           v7[7 * i + 6],
                           v14,
                           (unsigned int)v7 + 28 * i,
                           (__int64)&v7[7 * i + 1],
                           v7[7 * i + 5]);
          if ( (int)v10 < 0 )
            break;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v27 = v15 == 1;
      if ( v15 <= 1 )
        goto LABEL_24;
    }
LABEL_97:
    LODWORD(v10) = -1073741637;
    v44 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v44 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v44);
    goto LABEL_32;
  }
  while ( 1 )
  {
    v18 = (unsigned int)v16;
    v19 = 7LL * (unsigned int)v16;
    if ( v7[v19 + 4] == 2 )
    {
      v32 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v32 + 24) = 0LL;
      WdLogEvent5_WdError(v32);
      v16 = v52;
      v11 = 0LL;
      v13 = v53;
      v7[v19 + 4] = 4;
    }
    v20 = v7[v19];
    if ( v20 == 1 )
    {
      *(_BYTE *)(v1 + 2626) &= DxgkDWCloneCheckTargetID((unsigned int)v7[v19 + 6], v13, v14, v17);
      v21 = v7[v19 + 6];
      DXGGLOBAL::GetGlobal(v22);
      *(_BYTE *)(v1 + 2627) &= (v21 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
      {
        v7[v19 + 1] = -1;
        v25 = D3DKMDT_VOT_OTHER;
        v33 = WdLogNewEntry5_WdWarning(v16, v23, v24);
        *(_QWORD *)(v33 + 24) = 0LL;
        WdLogEvent5_WdWarning(v33);
      }
      else
      {
        v25 = v7[v19 + 1];
        if ( v25 < D3DKMDT_VOT_HD15 )
        {
          v25 = D3DKMDT_VOT_OTHER;
          if ( (v7[v19 + 1] & 0x7FFFFFFFu) <= 0xE )
            v25 = 0x80000000;
        }
        v7[v19 + 1] = v25;
        if ( (unsigned int)v25 >= D3DKMDT_VOT_MIRACAST
          && (unsigned int)v25 <= (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED) )
        {
          if ( v7[v19 + 4] != 4 )
            goto LABEL_45;
          if ( v25 == D3DKMDT_VOT_MIRACAST )
          {
            ++v48;
            v49 = v7[v19 + 6];
          }
          else if ( !*(_BYTE *)(v1 + 1151) )
          {
            goto LABEL_45;
          }
        }
      }
      if ( !IsInternalVideoOutput(v25) && v25 != D3DKMDT_VOT_LVDS )
        goto LABEL_12;
      v13 = v53;
      if ( v53 == -1 )
      {
        *(_DWORD *)(v1 + 3412) = v7[v19 + 6];
        if ( *(_BYTE *)(v1 + 1144) == (_BYTE)v11
          && *(_BYTE *)(v1 + 1146) == (_BYTE)v11
          && (*(_BYTE *)(v1 + 1147) == (_BYTE)v11 || *(_BYTE *)(v1 + 480) == (_BYTE)v11) )
        {
          v2 = a1;
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          if ( *(_DWORD *)(v16 + 28) >= 0x4000u && *(_BYTE *)(v1 + 2620) == (_BYTE)v11 )
            goto LABEL_97;
        }
        if ( v12 == -1 )
        {
          v12 = v52;
          LODWORD(v16) = v52;
          v47 = v25;
          goto LABEL_14;
        }
        if ( *(_BYTE *)(v1 + 2620) != (_BYTE)v11 )
        {
          LODWORD(v16) = v52;
          goto LABEL_14;
        }
        v35 = RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL);
        v11 = 0LL;
        if ( v35 == 16 && byte_1C008E758 )
          goto LABEL_12;
        v14 = v47;
        v51 = 1;
        if ( v25 == v47 )
          goto LABEL_67;
        switch ( v25 )
        {
          case D3DKMDT_VOT_INTERNAL:
            v36 = 1;
            break;
          case D3DKMDT_VOT_LVDS:
            v36 = v47 != 0x80000000;
            break;
          case D3DKMDT_VOT_DISPLAYPORT_EMBEDDED:
            v36 = v47 == 13;
            break;
          default:
LABEL_67:
            v7[v19 + 1] = -1;
LABEL_12:
            LODWORD(v16) = v52;
LABEL_13:
            v13 = v53;
            goto LABEL_14;
        }
        if ( v36 )
        {
          v37 = v12;
          v12 = v52;
          v47 = v25;
          v7[7 * v37 + 1] = -1;
          LODWORD(v16) = v52;
          goto LABEL_13;
        }
        goto LABEL_67;
      }
      LODWORD(v10) = -1073741637;
      v34 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v34 + 24) = (unsigned int)v7[v19 + 6];
      v43 = (unsigned int)v7[7 * v53 + 6];
LABEL_99:
      *(_QWORD *)(v34 + 32) = v43;
      goto LABEL_96;
    }
    if ( v20 != 3 )
    {
      if ( v20 == 2 || *(_DWORD *)(v3 + 28) < 0x700Au )
        goto LABEL_14;
      LODWORD(v10) = -1073741637;
      v34 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v34 + 24) = (unsigned int)v7[7 * v18 + 6];
      v43 = (int)v7[7 * v18];
      goto LABEL_99;
    }
    if ( *(_DWORD *)(v3 + 28) < 0x7007u )
    {
      LODWORD(v10) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v38 + 24) = *(unsigned int *)(v3 + 28);
      *(_QWORD *)(v38 + 32) = 28680LL;
      WdLogEvent5_WdError(v38);
      v11 = 0LL;
      goto LABEL_12;
    }
    if ( v12 != -1 )
    {
      LODWORD(v10) = -1073741637;
      v34 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v34 + 24) = (unsigned int)v7[7 * v12 + 6];
      goto LABEL_102;
    }
    if ( *(_BYTE *)(v1 + 1144) == (_BYTE)v11
      && *(_BYTE *)(v1 + 1146) == (_BYTE)v11
      && (*(_BYTE *)(v1 + 1147) == (_BYTE)v11 || *(_BYTE *)(v1 + 480) == (_BYTE)v11)
      && *(_BYTE *)(v1 + 2620) == (_BYTE)v11
      || *(_BYTE *)(v1 + 2620) == (_BYTE)v11 && byte_1C008E758 == (_BYTE)v11 && (_DWORD)v13 != -1 )
    {
LABEL_45:
      LODWORD(v10) = -1073741637;
      v34 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v34 + 24) = -1073741637LL;
      goto LABEL_96;
    }
    v39 = DxgkDWCloneCheckTargetID((unsigned int)v7[v19 + 6], v13, v14, v17);
    v11 = 0LL;
    if ( !v39 )
    {
      LODWORD(v10) = -1073741637;
      v34 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v34 + 24) = (unsigned int)v7[v19 + 6];
      goto LABEL_96;
    }
    v41 = (int)v7[v19 + 1];
    if ( (_DWORD)v41 != 0x80000000 && ((int)v41 <= 3 || (int)v41 > 6 && (unsigned int)(v41 - 8) > 5) )
      break;
    v42 = v7[v19 + 4];
    if ( v42 != 4 && v42 != 1 )
    {
      LODWORD(v10) = -1073741637;
      v34 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v34 + 24) = (unsigned int)v7[7 * v18 + 6];
      goto LABEL_96;
    }
    v13 = v53;
    if ( v53 == -1 )
    {
      v13 = v52;
      LODWORD(v16) = v52;
      v53 = v52;
      *(_DWORD *)(v1 + 3412) = v7[v19 + 6];
    }
    else
    {
      LODWORD(v16) = v52;
    }
LABEL_14:
    v16 = (unsigned int)(v16 + 1);
    v52 = v16;
    if ( (unsigned int)v16 >= *(_DWORD *)(v1 + 2608) )
    {
      v15 = v48;
      v2 = a1;
      LODWORD(v14) = v49;
      LOBYTE(v17) = v51;
      goto LABEL_16;
    }
  }
  LODWORD(v10) = -1073741637;
  v34 = WdLogNewEntry5_WdError(v40);
  *(_QWORD *)(v34 + 24) = v41;
LABEL_102:
  *(_QWORD *)(v34 + 32) = (unsigned int)v7[7 * v18 + 6];
LABEL_96:
  WdLogEvent5_WdError(v34);
  v2 = a1;
LABEL_32:
  KeReleaseMutex((PRKMUTEX)(v1 + 3336), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3232));
  KeLeaveCriticalRegion();
LABEL_33:
  if ( (int)v10 < 0 )
LABEL_41:
    DpiFdoRemoveChildDescriptors(v2);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
