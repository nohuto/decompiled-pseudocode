/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00FADB0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C860 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003BA28 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x1C003BAA0 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C003BAC8 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5338 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FB0D0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FB100 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C020668C (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // ebp
  struct _EX_RUNDOWN_REF *PoolWithQuotaTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGALLOCATION *v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  struct DXGALLOCATION *v27; // rax
  DXGADAPTERALLOCATION_VGPU *v28; // rax
  struct DXGALLOCATION **v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  DXGALLOCATION *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  DXGADAPTERALLOCATION_VGPU *v36; // rax
  __int64 v37; // rax
  struct DXGALLOCATION *v38; // rbx
  struct DXGALLOCATION *v39; // rdi
  DXGADAPTERALLOCATION *v40; // rcx
  __int64 v41; // [rsp+70h] [rbp+8h]
  char v42; // [rsp+78h] [rbp+10h]
  struct DXGALLOCATION **v43; // [rsp+90h] [rbp+28h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v32 + 24) = 2786LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v42 = 1;
    v43 = *(struct DXGALLOCATION ***)(*((_QWORD *)a4 + 7) + 136LL);
  }
  else
  {
    v43 = 0LL;
    v42 = 0;
  }
  v14 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1749) & 1) != 0 )
      {
        v33 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x90uLL);
        v19 = v33;
        if ( !v33 )
          goto LABEL_42;
        DXGALLOCATION::DXGALLOCATION(v33, this);
        *((_DWORD *)v19 + 18) |= 0x40000u;
        *((_DWORD *)v19 + 24) = 0;
        *((_DWORD *)v19 + 26) = 0;
        *((_QWORD *)v19 + 14) = 0LL;
        *((_QWORD *)v19 + 15) = 0LL;
        *((_QWORD *)v19 + 16) = 0LL;
        *((_QWORD *)v19 + 17) = 0LL;
      }
      else
      {
        PoolWithQuotaTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
        v19 = (DXGALLOCATION *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          goto LABEL_42;
        PoolWithQuotaTag[1].Count = (ULONG_PTR)this;
        LODWORD(PoolWithQuotaTag[2].Count) = 0;
        PoolWithQuotaTag[3].Count = 0LL;
        PoolWithQuotaTag[4].Count = 0LL;
        PoolWithQuotaTag[5].Count = 0LL;
        PoolWithQuotaTag[6].Count = 0LL;
        PoolWithQuotaTag[7].Count = 0LL;
        PoolWithQuotaTag[8].Count = 0LL;
        LODWORD(PoolWithQuotaTag[9].Count) = 0;
        PoolWithQuotaTag[10].Count = 0LL;
        ExInitializeRundownProtection(PoolWithQuotaTag + 11);
      }
      if ( !v19 )
        goto LABEL_42;
      v41 = *((_QWORD *)this + 5);
      v20 = v41 + 184;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v41 + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v31 = *(_DWORD *)(v41 + 200);
          if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v21, &EventBlockThread, v22, v31);
        }
        ExAcquirePushLockExclusiveEx(v20, 0LL);
      }
      *(_QWORD *)(v41 + 192) = KeGetCurrentThread();
      *((_DWORD *)v19 + 4) = HMGRTABLE::AllocHandle(v41 + 208, v19, 5LL);
      DxgkReferenceDxgAllocation(v19);
      *(_QWORD *)(v41 + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
      if ( !*((_DWORD *)v19 + 4) )
        break;
      *((_QWORD *)v19 + 5) = a4;
      if ( !*a5 )
        *a5 = v19;
      v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v17, v26);
        *(_QWORD *)(v35 + 24) = 7751LL;
        WdLogEvent5_WdAssertion(v35);
      }
      *((_QWORD *)v19 + 7) = 0LL;
      v27 = *a3;
      *((_QWORD *)v19 + 8) = *a3;
      if ( v27 )
        *((_QWORD *)v27 + 7) = v19;
      *a3 = v19;
      if ( v42 )
      {
        v30 = v43 - 6;
        v43 = (struct DXGALLOCATION **)v43[1];
        *((_QWORD *)v19 + 6) = v30;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
        {
          v36 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
          if ( !v36 )
          {
LABEL_42:
            v37 = WdLogNewEntry5_WdWarning(v17, v16, v18);
            *(_QWORD *)(v37 + 24) = this;
            *(_QWORD *)(v37 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v37);
            goto LABEL_43;
          }
          v28 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v36);
        }
        else
        {
          v28 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
          if ( !v28 )
            goto LABEL_42;
          *((_DWORD *)v28 + 1) = 0;
          *((_QWORD *)v28 + 1) = 0LL;
          *((_QWORD *)v28 + 2) = 0LL;
          *((_QWORD *)v28 + 4) = 0LL;
          *((_DWORD *)v28 + 10) = 0;
          *((_QWORD *)v28 + 7) = 0LL;
          *((_QWORD *)v28 + 6) = 0LL;
        }
        if ( !v28 )
          goto LABEL_42;
        *((_QWORD *)v19 + 6) = v28;
      }
LABEL_26:
      if ( --v14 < 0 )
      {
        if ( v9 < 0 )
        {
          v38 = *a3;
          while ( v38 )
          {
            v39 = v38;
            v38 = (struct DXGALLOCATION *)*((_QWORD *)v38 + 8);
            ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v17, v39, 0LL);
            v40 = (DXGADAPTERALLOCATION *)*((_QWORD *)v39 + 6);
            if ( v40 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              DXGADAPTERALLOCATION::`scalar deleting destructor'(v40);
            DXGALLOCATION::`scalar deleting destructor'(v39);
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
    v34 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v34 + 24) = this;
    *(_QWORD *)(v34 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v34);
    DXGALLOCATION::`scalar deleting destructor'(v19);
LABEL_43:
    v9 = -1073741801;
    goto LABEL_26;
  }
  return (unsigned int)v9;
}
