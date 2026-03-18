/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C025AE2C
 * Callers:
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CDC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
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
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  struct _KTHREAD *v19; // r8
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // eax
  ULONG_PTR Count; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  const GUID *v31; // r8
  __int64 v32; // rdx
  struct DXGCONTEXT *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37; // [rsp+48h] [rbp-B8h]
  _BYTE v38[16]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v39; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v41[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v42[88]; // [rsp+D8h] [rbp-28h] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38, a2->hAdapter, a1, &v34, 0);
  v9 = v34;
  if ( !v34 )
  {
    LODWORD(v10) = -1073741811;
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
    v11[3] = -1073741811LL;
    v11[4] = PsGetCurrentProcess(v13, v12);
    v11[5] = a2->hAdapter;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_28;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v36,
    *((struct DXGDEVICE **)v34 + 2));
  v35 = 0LL;
  hSource = a2->hSource;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(a1 + 23, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)a1 + 50);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx(a1 + 23, 0LL);
  }
  v18 = (hSource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *((_DWORD *)a1 + 56) )
    goto LABEL_15;
  v19 = a1[26];
  v20 = *((_DWORD *)v19 + 4 * v18 + 2);
  if ( ((hSource >> 25) & 0x60) != (*((_BYTE *)v19 + 16 * v18 + 8) & 0x60) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
    goto LABEL_15;
  v21 = v20 & 0x1F;
  if ( (_BYTE)v21 != 5 )
  {
    v22 = WdLogNewEntry5_WdError(v21, 2LL * (unsigned int)v18, v19);
    *(_QWORD *)(v22 + 24) = 267LL;
    WdLogEvent5_WdError(v22);
LABEL_15:
    v23 = 0LL;
    goto LABEL_16;
  }
  v23 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v19 + 2 * (unsigned int)v18);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34, v23);
  ExReleasePushLockSharedEx(a1 + 23, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v35, (struct _EX_RUNDOWN_REF **)&v34);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v34, v24);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, *((_QWORD *)v9 + 2), 0, v25, 0);
  v26 = COREDEVICEACCESS::AcquireShared((__int64)v40, 0xFFFFFFFF, 0LL);
  v10 = v26;
  if ( v26 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v28, Count, v29);
    *(_QWORD *)(v30 + 24) = v10;
LABEL_24:
    WdLogEvent5_WdError(v30);
    goto LABEL_25;
  }
  if ( !v35
    || (Count = v35[1].Count) == 0
    || (v28 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), *(_QWORD *)(Count + 16) != v28) )
  {
    v30 = WdLogNewEntry5_WdError(v28, Count, v29);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    *(_QWORD *)(v30 + 32) = a2->hSource;
    goto LABEL_24;
  }
  memset(&v39, 0, sizeof(v39));
  v39.hAllocation = *(HANDLE *)(v35[6].Count + 16);
  LODWORD(v10) = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v9 + 2) + 16LL), &v39, v31);
  *(_DWORD *)a3 = v39.Width;
  *((_DWORD *)a3 + 1) = v39.Height;
  *((_DWORD *)a3 + 2) = v39.Format;
LABEL_25:
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35, v32);
  if ( v36 && v37 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v36 + 104));
    KeLeaveCriticalRegion();
  }
LABEL_28:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
  return (unsigned int)v10;
}
