/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C01234E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C012355C (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C01DCCBC (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(unsigned int a1, char a2, struct D3DDDI_MAKERESIDENT *a3)
{
  __int64 v4; // rsi
  unsigned int ResidentInternal; // edi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const D3DKMT_HANDLE *v23; // rsi
  __int64 v24; // rax
  D3DKMT_HANDLE v25; // edi
  __int64 v26; // rax
  struct _KTHREAD *v27; // r8
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _EX_RUNDOWN_REF *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  ULONG_PTR Count; // r8
  __int64 v37; // rdx
  __int64 i; // r8
  __int64 v39; // rax
  struct DXGDEVICE *v40; // [rsp+30h] [rbp-89h] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+38h] [rbp-81h] BYREF
  struct DXGDEVICE *v42; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v43[24]; // [rsp+48h] [rbp-71h] BYREF
  char v44[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v45[32]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v46[56]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v47[3]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+1Fh]

  v47[0] = 0LL;
  v48 = 0;
  v4 = a1;
  if ( !a2 )
  {
LABEL_2:
    ResidentInternal = DxgkMakeResidentInternal(a3, 0);
    goto LABEL_3;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    ResidentInternal = -1073741811;
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v10);
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v4, Current, &v42);
  v12 = v42;
  if ( v42 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v12, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    v18 = v15;
    if ( v15 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
      v19[3] = v18;
      v19[4] = v12;
      v19[5] = v9;
      WdLogEvent5_WdEvent(v19);
LABEL_15:
      ResidentInternal = v18;
LABEL_37:
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
      goto LABEL_38;
    }
    v20 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
    if ( *(int *)(v20 + 2160) < 0x2000 )
      v21 = 1LL;
    else
      v21 = *(unsigned int *)(v20 + 256);
    PagedPoolArray<unsigned int,4>::AllocateElements(v47, v21);
    v23 = (const D3DKMT_HANDLE *)v47[0];
    if ( !v47[0] )
    {
      v24 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v24 + 24) = 3446LL;
      WdLogEvent5_WdError(v24);
      LODWORD(v18) = -1073741801;
      goto LABEL_15;
    }
    v25 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 26));
    v26 = (v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)v9 + 62) )
    {
      v27 = v9[29];
      v28 = *((_DWORD *)v27 + 4 * v26 + 2);
      if ( ((v25 >> 25) & 0x60) == (*((_BYTE *)v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        v29 = v28 & 0x1F;
        if ( (_BYTE)v29 == 5 )
        {
          v31 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v27 + 2 * (unsigned int)v26);
          goto LABEL_23;
        }
        v30 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v30 + 24) = 316LL;
        WdLogEvent5_WdError(v30);
      }
    }
    v31 = 0LL;
LABEL_23:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41, v31);
    ExReleasePushLockSharedEx(v9 + 26, 0LL);
    KeLeaveCriticalRegion();
    ResidentInternal = -1073741811;
    if ( v41 )
    {
      Count = v41[5].Count;
      v37 = 0LL;
      if ( !Count )
      {
LABEL_32:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        COREACCESS::~COREACCESS((COREACCESS *)v45);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
        if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
        goto LABEL_2;
      }
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v23;
          a3->NumAllocations = v37;
          goto LABEL_32;
        }
        if ( (unsigned int)v37 >= v48 )
          break;
        v23[v37] = *(_DWORD *)(i + 16);
        v37 = (unsigned int)(v37 + 1);
      }
      v39 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v39 + 24) = 3472LL;
      WdLogEvent5_WdError(v39);
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = *a3->AllocationList;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v35);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    goto LABEL_37;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  ResidentInternal = -1073741811;
  v13[3] = -1073741811LL;
  v13[4] = v4;
  v13[5] = v9;
  WdLogEvent5_WdError(v13);
LABEL_38:
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
LABEL_3:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v47);
  return ResidentInternal;
}
