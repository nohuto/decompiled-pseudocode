/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00627CC
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0001CF0 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchInsertContextAllocation @ 0x1C00626A8 (VidSchInsertContextAllocation.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C068 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D0F0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071060 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074040 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00746E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     VidSchRemoveContextAllocation @ 0x1C0081C80 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_DEVICE **a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        struct DXGALLOCATION *a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  struct DXGDEVICE *v14; // r12
  unsigned int v15; // r11d
  int v16; // edi
  struct _VIDMM_GLOBAL_ALLOC *v17; // r13
  struct VIDMM_ALLOC *v18; // r15
  void *v19; // r14
  struct VIDMM_DEVICE *v20; // r10
  struct DXGCONTEXT *v21; // r14
  char v22; // r8
  char v23; // dl
  bool v24; // zf
  int v25; // ecx
  VIDMM_GLOBAL *v26; // r15
  int inserted; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  struct VIDMM_ALLOC *v43; // rdx
  struct VIDMM_ALLOC *v44; // [rsp+A0h] [rbp-80h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v45; // [rsp+A8h] [rbp-78h] BYREF
  struct VIDMM_DEVICE *v46; // [rsp+B0h] [rbp-70h]
  _QWORD v47[16]; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v49; // [rsp+160h] [rbp+40h]
  void *v50; // [rsp+168h] [rbp+48h] BYREF

  v49 = a3;
  v14 = (struct DXGDEVICE *)a4;
  v45 = 0LL;
  v15 = a3;
  v44 = 0LL;
  v16 = a2;
  v50 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( a4 )
    v20 = a4[81];
  else
    v20 = 0LL;
  v46 = v20;
  if ( !a4 || *((_BYTE *)a4[5] + 297) )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v42 + 24) = 2028LL;
    WdLogEvent5_WdAssertion(v42);
    inserted = -1073741811;
LABEL_32:
    if ( v19 )
      VidSchRemoveContextAllocation(v19);
    goto LABEL_34;
  }
  v21 = a5;
  v22 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( !a5 )
      goto LABEL_10;
    v39 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v39 + 24) = 2042LL;
LABEL_20:
    WdLogEvent5_WdAssertion(v39);
    inserted = -1073741811;
LABEL_39:
    *a14 = 0LL;
    return (unsigned int)inserted;
  }
  if ( !a5 )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v39 + 24) = 2035LL;
    goto LABEL_20;
  }
  v23 = -1;
  v24 = !_BitScanForward((unsigned int *)&v25, *((_DWORD *)a5 + 101));
  a4 = (struct VIDMM_DEVICE **)a5;
  if ( !v24 )
    v23 = v25;
  v15 = v23;
  v49 = v23;
LABEL_10:
  v26 = this;
  inserted = VIDMM_GLOBAL::CreateOneAllocation(
               this,
               v20,
               v15,
               a7,
               a7,
               (unsigned int)a8,
               a9,
               a10,
               a11,
               a13,
               0LL,
               0LL,
               a6,
               0xA0000000,
               v22,
               a4,
               0,
               0LL,
               &v45);
  if ( inserted < 0 )
  {
    v17 = v45;
    goto LABEL_37;
  }
  v17 = v45;
  inserted = VIDMM_GLOBAL::OpenOneAllocation(this, v46, v45, 0LL, 0, 0LL, &v44, (unsigned __int8 *)&a12);
  if ( inserted < 0 )
  {
    v18 = v44;
LABEL_34:
    if ( v18 )
    {
      v43 = v18;
      v26 = this;
      VIDMM_GLOBAL::CloseOneAllocation(this, v43, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    }
    else
    {
      v26 = this;
    }
LABEL_37:
    if ( v17 )
      VIDMM_GLOBAL::DestroyOneAllocation(v26, v46, v17, 1);
    goto LABEL_39;
  }
  v18 = v44;
  inserted = VidSchInsertContextAllocation(
               *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
               (__int64)v14,
               (__int64)v21,
               (__int64 *)v44,
               &v50);
  if ( inserted < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v29, v28);
    goto LABEL_25;
  }
  if ( (v16 & 2) != 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)v18 + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                v49);
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            v18,
            0LL,
            1LL,
            *((_QWORD *)v17 + 2),
            0LL,
            0LL,
            0LL,
            *((_DWORD *)v17 + 8),
            17LL,
            0LL,
            v31,
            0LL) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v40 + 32) = 2140LL;
      goto LABEL_25;
    }
  }
  memset(v47, 0, 0x50uLL);
  v34 = 176LL * (*((_DWORD *)v17 + 19) & 0x3F);
  v35 = *((_QWORD *)v18 + 1);
  v47[2] = v18;
  LODWORD(v47[0]) = 209;
  LODWORD(v47[4]) = v16;
  inserted = VIDMM_GLOBAL::QueueDeferredCommand(
               this,
               (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v35 + 72) + v34),
               (struct _VIDMM_DEFERRED_COMMAND *)v47,
               1,
               0LL);
  if ( inserted < 0 )
  {
    if ( inserted == -1071775232 )
    {
      v41 = WdLogNewEntry5_WdWarning(v37, v36);
      v19 = v50;
      *(_QWORD *)(v41 + 24) = v50;
      *(_QWORD *)(v41 + 32) = 2155LL;
      WdLogEvent5_WdWarning(v41);
      goto LABEL_32;
    }
    v40 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v40 + 32) = 2159LL;
LABEL_25:
    v19 = v50;
    *(_QWORD *)(v40 + 24) = v50;
    WdLogEvent5_WdAssertion(v40);
    goto LABEL_32;
  }
  *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v50;
  return (unsigned int)inserted;
}
