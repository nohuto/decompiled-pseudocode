/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C01439EC
 * Callers:
 *     DxgkRender @ 0x1C0120C10 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C7F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  ULONG_PTR v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  struct DXGADAPTER *v32; // rbx
  struct DXGGLOBAL *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  PVOID v45; // rbx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  ULONG_PTR v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  ULONG_PTR v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-90h] BYREF
  ULONG_PTR Size; // [rsp+40h] [rbp-88h] BYREF
  PVOID v62; // [rsp+48h] [rbp-80h] BYREF
  PVOID Address; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  PVOID BaseAddress; // [rsp+60h] [rbp-68h] BYREF
  HANDLE v66; // [rsp+68h] [rbp-60h]
  HANDLE v67; // [rsp+70h] [rbp-58h]
  PVOID PoolWithTag; // [rsp+78h] [rbp-50h]
  ULONG_PTR v69; // [rsp+80h] [rbp-48h]
  ULONG_PTR RegionSize; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v72; // [rsp+E8h] [rbp+20h]

  v72 = a4;
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
  v67 = 0LL;
  NumberOfBytes = 0LL;
  v62 = 0LL;
  P = 0LL;
  v9 = 0LL;
  v66 = 0LL;
  LODWORD(v10) = 0;
  if ( RegionSize )
  {
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
    v10 = v11;
    if ( v11 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
      v49[3] = this;
      v49[4] = RegionSize;
      v49[5] = v10;
      WdLogEvent5_WdWarning(v49);
    }
    else
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v16 = *(struct DXGADAPTER **)(v15 + 16);
      Global = DXGGLOBAL::GetGlobal(v15, v12);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1284), v16) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, RegionSize, 0x4B677844u);
        if ( !PoolWithTag )
        {
          LODWORD(v10) = -1073741801;
          v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, a2, a3);
          v48[3] = this;
          v48[4] = RegionSize;
          v48[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v48);
        }
      }
      v5 = v72;
    }
  }
  if ( (int)v10 < 0 || !v5 )
    goto LABEL_16;
  v69 = v5;
  v18 = 8LL * v5;
  v19 = 0xFFFFFFFFLL;
  if ( v18 <= 0xFFFFFFFF )
    v19 = (unsigned int)v18;
  LODWORD(v10) = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
  Size = v19;
  if ( v18 > 0xFFFFFFFF )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, a2, a3);
    v50[3] = this;
    v51 = v69;
    goto LABEL_57;
  }
  v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u);
  v10 = v20;
  if ( v20 < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v50[3] = this;
    v51 = Size;
    v50[5] = v10;
LABEL_57:
    v50[4] = v51;
    WdLogEvent5_WdWarning(v50);
  }
  if ( (int)v10 < 0 )
  {
LABEL_64:
    v45 = P;
    goto LABEL_50;
  }
  v8 = MmSecureVirtualMemory(Address, Size, 4u);
  v67 = v8;
  if ( !v8 )
  {
    LODWORD(v10) = -1073741801;
    v52 = WdLogNewEntry5_WdWarning(v24, a2, a3);
    *(_QWORD *)(v52 + 24) = this;
    *(_QWORD *)(v52 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v52);
  }
LABEL_16:
  if ( (int)v10 < 0 )
    goto LABEL_64;
  if ( !a5 )
    goto LABEL_26;
  v25 = 24LL * a5;
  v26 = 0xFFFFFFFFLL;
  if ( v25 <= 0xFFFFFFFF )
    v26 = (unsigned int)v25;
  LODWORD(v10) = v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
  NumberOfBytes = v26;
  if ( v25 > 0xFFFFFFFF )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, a2, a3);
    v56[3] = this;
    v57 = a5;
    goto LABEL_63;
  }
  v27 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v62, 0LL, &NumberOfBytes, 0x3000u, 4u);
  v10 = v27;
  if ( v27 < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
    v56[3] = this;
    v57 = NumberOfBytes;
    v56[5] = v10;
    goto LABEL_63;
  }
  v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v32 = *(struct DXGADAPTER **)(v31 + 16);
  v33 = DXGGLOBAL::GetGlobal(v29, v31);
  if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v33 + 1284), v32) )
  {
    P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B677844u);
    if ( !P )
    {
      LODWORD(v10) = -1073741801;
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53, v55);
      v56[3] = this;
      v57 = RegionSize;
      v56[5] = -1073741801LL;
LABEL_63:
      v56[4] = v57;
      WdLogEvent5_WdWarning(v56);
    }
  }
  if ( (int)v10 < 0 )
    goto LABEL_64;
  v9 = MmSecureVirtualMemory(v62, NumberOfBytes, 4u);
  v66 = v9;
  if ( !v9 )
  {
    LODWORD(v10) = -1073741801;
    v58 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v58 + 24) = this;
    *(_QWORD *)(v58 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v58);
  }
LABEL_26:
  if ( (int)v10 < 0 )
    goto LABEL_64;
  v37 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                                  + 8LL)
                                                                                      + 472LL))(
          a2,
          RegionSize,
          v72,
          a5);
  v10 = v37;
  if ( v37 < 0 )
  {
    v59 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v59 + 24) = this;
    *(_QWORD *)(v59 + 32) = v10;
    WdLogEvent5_WdWarning(v59);
  }
  if ( (int)v10 < 0 )
    goto LABEL_64;
  if ( RegionSize )
  {
    if ( *((_QWORD *)this + 7) )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    v41 = (void *)*((_QWORD *)this + 8);
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
    *((_QWORD *)this + 7) = BaseAddress;
    *((_QWORD *)this + 8) = PoolWithTag;
    *((_QWORD *)this + 6) = RegionSize;
  }
  if ( v72 )
  {
    v42 = (void *)*((_QWORD *)this + 12);
    if ( v42 )
      MmUnsecureVirtualMemory(v42);
    if ( *((_QWORD *)this + 11) )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 12) = v8;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v72;
    *((_QWORD *)this + 10) = Size;
  }
  if ( !a5 )
    goto LABEL_64;
  v43 = (void *)*((_QWORD *)this + 17);
  if ( v43 )
    MmUnsecureVirtualMemory(v43);
  if ( *((_QWORD *)this + 15) )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
  v44 = (void *)*((_QWORD *)this + 16);
  if ( v44 )
    ExFreePoolWithTag(v44, 0);
  *((_QWORD *)this + 17) = v9;
  *((_QWORD *)this + 15) = v62;
  v45 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *((_QWORD *)this + 14) = NumberOfBytes;
LABEL_50:
  if ( (int)v10 < 0 )
  {
    if ( v9 )
      MmUnsecureVirtualMemory(v9);
    if ( v62 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v62, &NumberOfBytes, 0x8000u);
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
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
