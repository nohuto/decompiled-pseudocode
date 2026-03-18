/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00635D4
 * Callers:
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C00634A4 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C007F248 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00107D4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00109F4 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0015E04 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0027D98 (McTemplateK0ppxxxxxqxx.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0060FD4 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00714EC (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0081A74 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C0081BC8 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00B7514 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v7; // rdi
  struct _LIST_ENTRY **v9; // r15
  struct _LIST_ENTRY **v10; // rax
  struct _LIST_ENTRY *v11; // rdi
  struct _VIDMM_GLOBAL_ALLOC ***VidMmAllocFromOwner; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  struct _VIDMM_GLOBAL_ALLOC ****v17; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v18; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v19; // rax
  char **v20; // rcx
  char *v21; // rax
  bool v22; // sf
  unsigned __int64 v24; // rcx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *v27; // r12
  struct _LIST_ENTRY *v28; // r13
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  struct _LIST_ENTRY *v31; // r9
  PVOID v32; // r10
  struct VIDMM_MAPPED_VA_RANGE *v33; // r15
  struct _LIST_ENTRY *v34; // r9
  __int64 v35; // r9
  __int64 v36; // rdi
  struct _LIST_ENTRY *v37; // r9
  PVOID v38; // r10
  __int64 v39; // rax
  struct _KTHREAD **v40; // r14
  struct _KTHREAD ***v41; // rax
  struct _KTHREAD *v42; // rcx
  __int64 v43; // rax
  const GUID *v44; // r8
  __int64 v45; // [rsp+50h] [rbp-68h]
  char v46; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+10h]
  char v48; // [rsp+D0h] [rbp+18h]

  v48 = a3;
  v7 = a3;
  v46 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v46 = 1;
  }
  v9 = (struct _LIST_ENTRY **)((char *)a2 + 24 * v7 + 96);
  v10 = v9;
  if ( a4 )
    v10 = a4;
  v11 = *v10;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( v11 == (struct _LIST_ENTRY *)v9 )
        {
          VidMmAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC ***)GetVidMmAllocFromOwner(
                                                                  (int)(*((_DWORD *)a5 + 16) << 28) >> 28,
                                                                  *((_QWORD *)a5 + 7));
          v13 = VidMmAllocFromOwner;
          if ( VidMmAllocFromOwner )
          {
            v16 = CheckUniqueGpuVaMapping(**VidMmAllocFromOwner, a5);
            if ( v16 < 0 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v15, v14);
              *(_QWORD *)(v39 + 24) = 8908LL;
              WdLogEvent5_WdAssertion(v39);
              goto LABEL_14;
            }
            v17 = (struct _VIDMM_GLOBAL_ALLOC ****)(v13 + 16);
            v18 = v13[16];
            v19 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)a5 + 24);
            if ( v18[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v13 + 16) )
              goto LABEL_53;
            *v19 = v18;
            *((_QWORD *)a5 + 4) = v17;
            v18[1] = (struct _VIDMM_GLOBAL_ALLOC *)v19;
            *v17 = v19;
          }
          v20 = (char **)v9[1];
          v21 = (char *)a5 + 8;
          if ( *v20 == (char *)v9 )
          {
            *(_QWORD *)v21 = v9;
            *((_QWORD *)a5 + 2) = v20;
            *v20 = v21;
            v9[1] = (struct _LIST_ENTRY *)v21;
            ++*((_DWORD *)a2 + 19);
            if ( (*((_BYTE *)a5 + 88) & 4) == 0 )
              goto LABEL_13;
            v40 = (struct _KTHREAD **)((char *)a2 + 56);
            if ( *v40 )
              goto LABEL_13;
            v41 = (struct _KTHREAD ***)(this + 15);
            v42 = this[15];
            if ( *((struct _KTHREAD ***)v42 + 1) == this + 15 )
            {
              *v40 = v42;
              v40[1] = (struct _KTHREAD *)v41;
              *((_QWORD *)v42 + 1) = v40;
              *v41 = v40;
LABEL_13:
              v16 = 0;
LABEL_14:
              v22 = v16 < 0;
              goto LABEL_15;
            }
          }
LABEL_53:
          __fastfail(3u);
        }
        v24 = *((_QWORD *)a5 + 13);
        p_Blink = &v11[-1].Blink;
        Blink = v11[5].Blink;
        v27 = v11;
        v28 = v11;
        v11 = v11->Flink;
        if ( v24 <= (unsigned __int64)Blink )
        {
          v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v27);
          v22 = v16 < 0;
LABEL_15:
          if ( !v22 )
            goto LABEL_16;
          goto LABEL_20;
        }
        v29 = *((_QWORD *)a5 + 12);
        v30 = (unsigned __int64)p_Blink[13];
      }
      while ( v29 >= v30 );
      if ( v29 > (unsigned __int64)Blink )
        break;
      if ( v24 < v30 )
      {
        v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v27);
        if ( v16 >= 0 )
        {
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)this,
            (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
            (unsigned __int64)p_Blink[9],
            (unsigned __int64)p_Blink[12],
            *((_QWORD *)a5 + 13));
          if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
            p_Blink[9] = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                                 *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
          p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
LABEL_16:
          if ( a4 )
            *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
          {
            v43 = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
            LODWORD(v45) = (_DWORD)v44;
            McTemplateK0ppxxxxxqxx(
              *((_QWORD *)a5 + 9),
              &UpdateGpuVirtualAddressRangeMapping,
              v44,
              this,
              v43,
              *((_QWORD *)a5 + 9),
              *((_QWORD *)a5 + 12),
              *((_QWORD *)a5 + 13),
              *((_QWORD *)a5 + 11),
              *((_QWORD *)a5 + 10),
              v45,
              *((_QWORD *)a5 + 14),
              *((_QWORD *)a5 + 15));
          }
        }
        goto LABEL_20;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
        (unsigned __int64)p_Blink[9],
        (unsigned __int64)Blink,
        (unsigned __int64)p_Blink[13]);
      CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v28, 0, 1u);
    }
    if ( v24 < v30 )
      break;
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      (unsigned __int64)p_Blink[9],
      *((_QWORD *)a5 + 12),
      (unsigned __int64)p_Blink[13]);
    p_Blink[13] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
  }
  v32 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v32 )
    v33 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v32,
                                            (__int64)a2,
                                            (__int64)p_Blink[12],
                                            *((_QWORD *)a5 + 12),
                                            v48,
                                            (__int64)p_Blink[7],
                                            (__int64)p_Blink[9],
                                            (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                            (__int64)p_Blink[11],
                                            (__int64)p_Blink[10],
                                            (__int64)p_Blink[15],
                                            (__int64)p_Blink[14]);
  else
    v33 = 0LL;
  if ( !v33 )
    goto LABEL_43;
  v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v33, v31, v28);
  if ( v16 < 0 )
    goto LABEL_44;
  v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v34, v28);
  if ( v16 >= 0 )
  {
    v47 = VidMmiCalculateNewOwnerOffset(
            (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
            *((_QWORD *)a5 + 12) - (_QWORD)p_Blink[12]);
    v36 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, *((_QWORD *)a5 + 13) - v35);
    v38 = operator new[](0x88uLL, 0x39346956u, PagedPool);
    if ( v38 )
      v33 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                              (__int64)v38,
                                              (__int64)a2,
                                              *((_QWORD *)a5 + 13),
                                              (__int64)p_Blink[13],
                                              v48,
                                              (__int64)p_Blink[7],
                                              v36,
                                              (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                              (__int64)p_Blink[11],
                                              (__int64)p_Blink[10],
                                              (__int64)p_Blink[15],
                                              (__int64)p_Blink[14]);
    else
      v33 = 0LL;
    if ( v33 )
    {
      v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v33, v37, v28);
      if ( v16 >= 0 )
      {
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          v47,
          *((_QWORD *)a5 + 12),
          *((_QWORD *)a5 + 13));
        CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v27, 0, 0);
        goto LABEL_16;
      }
LABEL_44:
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((char *)v33);
      goto LABEL_20;
    }
LABEL_43:
    v16 = -1073741801;
  }
LABEL_20:
  if ( v46 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v16;
}
