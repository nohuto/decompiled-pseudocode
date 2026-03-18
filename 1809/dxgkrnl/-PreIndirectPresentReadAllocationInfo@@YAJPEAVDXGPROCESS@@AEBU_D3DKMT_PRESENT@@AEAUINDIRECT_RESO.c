/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0225EE8
 * Callers:
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct _KTHREAD **a1,
        const struct _D3DKMT_PRESENT *a2,
        struct INDIRECT_RESOURCE_INFO *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGCONTEXT *v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  D3DKMT_HANDLE hSource; // edi
  __int64 v15; // rax
  struct _KTHREAD *v16; // r8
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  const GUID *v26; // r8
  __int64 v28; // [rsp+30h] [rbp-79h] BYREF
  char v29; // [rsp+38h] [rbp-71h]
  _BYTE v30[16]; // [rsp+40h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v31; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v32[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v33[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v34[56]; // [rsp+A8h] [rbp-1h] BYREF
  struct DXGCONTEXT *v35; // [rsp+118h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+128h] [rbp+7Fh] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, a2->hAdapter, a1, &v35, 0);
  v9 = v35;
  if ( !v35 )
  {
    LODWORD(v10) = -1073741811;
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
    v11[3] = -1073741811LL;
    v11[4] = PsGetCurrentProcess(v13, v12);
    v11[5] = a2->hAdapter;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_22;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v28,
    *((struct DXGDEVICE **)v35 + 2));
  v35 = 0LL;
  hSource = a2->hSource;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 26));
  v15 = (hSource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *((_DWORD *)a1 + 62) )
    goto LABEL_9;
  v16 = a1[29];
  v17 = *((_DWORD *)v16 + 4 * v15 + 2);
  if ( ((hSource >> 25) & 0x60) != (*((_BYTE *)v16 + 16 * v15 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
    goto LABEL_9;
  v18 = v17 & 0x1F;
  if ( (_BYTE)v18 != 5 )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = 316LL;
    WdLogEvent5_WdError(v19);
LABEL_9:
    v20 = 0LL;
    goto LABEL_10;
  }
  v20 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v16 + 2 * (unsigned int)v15);
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36, v20);
  ExReleasePushLockSharedEx(a1 + 26, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v35, (struct DXGALLOCATION **)&v36);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, *((_QWORD *)v9 + 2), 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32);
  v10 = v22;
  if ( v22 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v24 + 24) = v10;
LABEL_18:
    WdLogEvent5_WdError(v24);
    goto LABEL_19;
  }
  if ( !v35
    || (v25 = *((_QWORD *)v35 + 1)) == 0
    || (v23 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), *(_QWORD *)(v25 + 16) != v23) )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    *(_QWORD *)(v24 + 32) = a2->hSource;
    goto LABEL_18;
  }
  memset(&v31, 0, sizeof(v31));
  v31.hAllocation = *(HANDLE *)(*((_QWORD *)v35 + 6) + 16LL);
  LODWORD(v10) = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v9 + 2) + 16LL), &v31, v26);
  *(_DWORD *)a3 = v31.Width;
  *((_DWORD *)a3 + 1) = v31.Height;
  *((_DWORD *)a3 + 2) = v31.Format;
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v35);
  if ( v28 && v29 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v28 + 104));
    KeLeaveCriticalRegion();
  }
LABEL_22:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
  return (unsigned int)v10;
}
