/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0130EA0
 * Callers:
 *     DxgkRender @ 0x1C00EAB30 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        ULONG_PTR a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  HANDLE v8; // r13
  HANDLE v9; // r12
  __int64 v10; // r14
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  ULONG_PTR v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGADAPTER *v37; // rbx
  struct DXGGLOBAL *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  ULONG_PTR v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  PVOID v57; // rbx
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-90h] BYREF
  ULONG_PTR Size; // [rsp+40h] [rbp-88h] BYREF
  PVOID v61; // [rsp+48h] [rbp-80h] BYREF
  PVOID Address; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  PVOID BaseAddress; // [rsp+60h] [rbp-68h] BYREF
  HANDLE v65; // [rsp+68h] [rbp-60h]
  HANDLE v66; // [rsp+70h] [rbp-58h]
  PVOID PoolWithTag; // [rsp+78h] [rbp-50h]
  ULONG_PTR v68; // [rsp+80h] [rbp-48h]
  ULONG_PTR RegionSize; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v71; // [rsp+E8h] [rbp+20h]

  v71 = a4;
  RegionSize = a3;
  v5 = a4;
  v7 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v7 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 104));
  BaseAddress = 0LL;
  PoolWithTag = 0LL;
  Size = 0LL;
  Address = 0LL;
  v8 = 0LL;
  v66 = 0LL;
  NumberOfBytes = 0LL;
  v61 = 0LL;
  P = 0LL;
  v9 = 0LL;
  v65 = 0LL;
  LODWORD(v10) = 0;
  if ( RegionSize )
  {
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
    v10 = v11;
    if ( v11 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
      v20[3] = this;
      v20[4] = RegionSize;
      v20[5] = v10;
      WdLogEvent5_WdWarning(v20);
    }
    else
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v16 = *(struct DXGADAPTER **)(v15 + 16);
      Global = DXGGLOBAL::GetGlobal(v15);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1316), v16) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, RegionSize, 0x4B677844u);
        if ( !PoolWithTag )
        {
          LODWORD(v10) = -1073741801;
          v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, a2, a3);
          v19[3] = this;
          v19[4] = RegionSize;
          v19[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v19);
        }
      }
      v5 = v71;
    }
  }
  if ( (int)v10 < 0 || !v5 )
    goto LABEL_22;
  v68 = v5;
  v21 = 8LL * v5;
  v22 = 0xFFFFFFFFLL;
  if ( v21 <= 0xFFFFFFFF )
    v22 = (unsigned int)v21;
  LODWORD(v10) = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
  Size = v22;
  if ( v21 > 0xFFFFFFFF )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, a2, a3);
    v27[3] = this;
    v28 = v68;
    goto LABEL_18;
  }
  v23 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u);
  v10 = v23;
  if ( v23 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v27[3] = this;
    v28 = Size;
    v27[5] = v10;
LABEL_18:
    v27[4] = v28;
    WdLogEvent5_WdWarning(v27);
  }
  if ( (int)v10 < 0 )
  {
LABEL_61:
    v57 = P;
    goto LABEL_62;
  }
  v8 = MmSecureVirtualMemory(Address, Size, 4u);
  v66 = v8;
  if ( !v8 )
  {
    LODWORD(v10) = -1073741801;
    v30 = WdLogNewEntry5_WdWarning(v29, a2, a3);
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v30);
  }
LABEL_22:
  if ( (int)v10 < 0 )
    goto LABEL_61;
  if ( !a5 )
    goto LABEL_37;
  v31 = 24LL * a5;
  v32 = 0xFFFFFFFFLL;
  if ( v31 <= 0xFFFFFFFF )
    v32 = (unsigned int)v31;
  LODWORD(v10) = v31 > 0xFFFFFFFF ? 0xC0000095 : 0;
  NumberOfBytes = v32;
  if ( v31 > 0xFFFFFFFF )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, a2, a3);
    v42[3] = this;
    v43 = a5;
    goto LABEL_33;
  }
  v33 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v61, 0LL, &NumberOfBytes, 0x3000u, 4u);
  v10 = v33;
  if ( v33 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
    v42[3] = this;
    v43 = NumberOfBytes;
    v42[5] = v10;
    goto LABEL_33;
  }
  v37 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v38 = DXGGLOBAL::GetGlobal(v35);
  if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v38 + 1316), v37) )
  {
    P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B677844u);
    if ( !P )
    {
      LODWORD(v10) = -1073741801;
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
      v42[3] = this;
      v43 = RegionSize;
      v42[5] = -1073741801LL;
LABEL_33:
      v42[4] = v43;
      WdLogEvent5_WdWarning(v42);
    }
  }
  if ( (int)v10 < 0 )
    goto LABEL_61;
  v9 = MmSecureVirtualMemory(v61, NumberOfBytes, 4u);
  v65 = v9;
  if ( !v9 )
  {
    LODWORD(v10) = -1073741801;
    v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
    *(_QWORD *)(v47 + 24) = this;
    *(_QWORD *)(v47 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v47);
  }
LABEL_37:
  if ( (int)v10 < 0 )
    goto LABEL_61;
  v48 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                                  + 8LL)
                                                                                      + 472LL))(
          a2,
          RegionSize,
          v71,
          a5);
  v10 = v48;
  if ( v48 < 0 )
  {
    v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
    *(_QWORD *)(v52 + 24) = this;
    *(_QWORD *)(v52 + 32) = v10;
    WdLogEvent5_WdWarning(v52);
  }
  if ( (int)v10 < 0 )
    goto LABEL_61;
  if ( RegionSize )
  {
    if ( *((_QWORD *)this + 7) )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    v53 = (void *)*((_QWORD *)this + 8);
    if ( v53 )
      ExFreePoolWithTag(v53, 0);
    *((_QWORD *)this + 7) = BaseAddress;
    *((_QWORD *)this + 8) = PoolWithTag;
    *((_QWORD *)this + 6) = RegionSize;
  }
  if ( v71 )
  {
    v54 = (void *)*((_QWORD *)this + 12);
    if ( v54 )
      MmUnsecureVirtualMemory(v54);
    if ( *((_QWORD *)this + 11) )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 12) = v8;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v71;
    *((_QWORD *)this + 10) = Size;
  }
  if ( !a5 )
    goto LABEL_61;
  v55 = (void *)*((_QWORD *)this + 17);
  if ( v55 )
    MmUnsecureVirtualMemory(v55);
  if ( *((_QWORD *)this + 15) )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
  v56 = (void *)*((_QWORD *)this + 16);
  if ( v56 )
    ExFreePoolWithTag(v56, 0);
  *((_QWORD *)this + 17) = v9;
  *((_QWORD *)this + 15) = v61;
  v57 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *((_QWORD *)this + 14) = NumberOfBytes;
LABEL_62:
  if ( (int)v10 < 0 )
  {
    if ( v9 )
      MmUnsecureVirtualMemory(v9);
    if ( v61 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v61, &NumberOfBytes, 0x8000u);
    if ( v57 )
      ExFreePoolWithTag(v57, 0);
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    if ( Address )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v10;
}
