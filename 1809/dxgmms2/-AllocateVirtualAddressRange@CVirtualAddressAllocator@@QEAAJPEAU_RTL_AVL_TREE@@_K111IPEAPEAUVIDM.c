/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0061330
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C006C650 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C006CD2C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqxx @ 0x1C0027E94 (McTemplateK0pqxx.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005F5BC (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0061638 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00616E4 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C006177C (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0066AD4 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v9; // r12
  unsigned __int64 v11; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int64 v16; // rbp
  unsigned int v17; // esi
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  struct VIDMM_VAD *v21; // r15
  int v22; // esi
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct VIDMM_VAD *v26; // rbx
  const GUID *v27; // r8
  unsigned __int64 v28; // rbp
  struct VIDMM_VAD *Vad; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  struct VIDMM_VAD **v32; // r12
  __int64 v33; // rcx
  __int64 **v34; // rdx
  __int64 *v35; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  struct VIDMM_VAD *v39; // r14
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rbx
  __int64 v43; // rax
  _QWORD *v44; // r14
  __int64 v45; // rax
  _QWORD *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD v56[15]; // [rsp+40h] [rbp-78h] BYREF

  v9 = a9;
  v11 = a3;
  if ( a9 )
  {
    v13 = *((_QWORD *)this + 11);
    if ( !v13 || (*(_DWORD *)(v13 + 88) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 10) + 40137LL) )
      v9 = 0;
  }
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 6992);
  else
    v15 = 1;
  v16 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    v47 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v47 + 24) = 827LL;
    WdLogEvent5_WdAssertion(v47);
    return 3221225485LL;
  }
  if ( !a7 || (v17 = a7 - 1, ((a7 - 1) & a7) != 0) )
  {
    v55 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v55 + 24) = 833LL;
    WdLogEvent5_WdAssertion(v55);
    return 3221225485LL;
  }
  else
  {
    memset(v56, 0, 0x48uLL);
    v56[5] = v17;
    v56[6] = ~(unsigned __int64)v17;
    if ( ((a7 - 1) & (unsigned int)a4) != 0 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v17, v18);
      *(_QWORD *)(v48 + 24) = 843LL;
      WdLogEvent5_WdAssertion(v48);
      return 3221225485LL;
    }
    v19 = a6;
    v20 = a5;
    v56[0] = a4;
    v56[1] = v16;
    v56[2] = a5;
    if ( !a6 )
      v19 = *((_QWORD *)this + 2);
    v21 = 0LL;
    v56[3] = v19;
    v56[4] = v11;
    v22 = 0;
    if ( v9 && dword_1C004D3F8 && v16 != *((_QWORD *)this + 2) )
    {
      v49 = v11 + 4096;
      v50 = v16 + 4096;
      if ( v11 + 4096 < v11 || v50 < v16 )
      {
        v51 = WdLogNewEntry5_WdAssertion(a5, v50);
        *(_QWORD *)(v51 + 24) = 865LL;
        WdLogEvent5_WdAssertion(v51);
        v19 = v56[3];
        v20 = v56[2];
        v11 = v56[4];
      }
      else
      {
        v11 += 4096LL;
        v56[4] = v49;
        v56[1] = v16 + 4096;
        v22 = 1;
      }
    }
    if ( v20 < v19 && v19 - v20 >= v11 )
    {
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, v56);
      v26 = NodeInFreeList;
      if ( !NodeInFreeList )
      {
        v52 = WdLogNewEntry5_WdWarning(v25, v24);
        WdLogEvent5_WdWarning(v52);
        return 3221225473LL;
      }
      v27 = (const GUID *)*((_QWORD *)NodeInFreeList + 3);
      v28 = v56[7] + v56[4];
      if ( v27 == (const GUID *)v56[7] )
      {
        if ( *((_QWORD *)NodeInFreeList + 4) - (_QWORD)v27 != v56[4] )
        {
          Vad = CVirtualAddressAllocator::AllocateVad(v56[7], v56[7] + v56[4], v15);
          if ( Vad )
          {
            v32 = a8;
            v33 = (__int64)v26 + 40;
            v34 = (__int64 **)*((_QWORD *)v26 + 6);
            *a8 = Vad;
            v35 = (__int64 *)((char *)Vad + 40);
            if ( *v34 == (__int64 *)((char *)v26 + 40) )
            {
              *v35 = v33;
              v35[1] = (__int64)v34;
              *v34 = v35;
              *((_QWORD *)v26 + 6) = v35;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
                McTemplateK0pqxx(
                  v33,
                  &DestroyGpuVirtualAddressRange,
                  v31,
                  this,
                  *((_DWORD *)v26 + 18),
                  *((_QWORD *)v26 + 3),
                  *((_QWORD *)v26 + 4));
              RtlAvlRemoveNode((char *)this + 40, v26);
              *((_DWORD *)v26 + 18) &= 0xFFFFFFF0;
              *((_QWORD *)v26 + 3) = v28;
              CVirtualAddressAllocator::InsertVadToFreeList(this, v26);
              goto LABEL_24;
            }
LABEL_35:
            __fastfail(3u);
          }
          _InterlockedIncrement(&dword_1C004D6CC);
          v53 = WdLogNewEntry5_WdLowResource(v30);
          *(_QWORD *)(v53 + 24) = 925LL;
          goto LABEL_46;
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList, v27);
        v32 = a8;
        *a8 = v26;
      }
      else
      {
        v39 = CVirtualAddressAllocator::AllocateVad(v56[7], v56[7] + v56[4], v15);
        if ( !v39 )
        {
          _InterlockedIncrement(&dword_1C004D6CC);
          v53 = WdLogNewEntry5_WdLowResource(v37);
          *(_QWORD *)(v53 + 24) = 958LL;
LABEL_46:
          WdLogEvent5_WdLowResource(v53);
          return 3221225495LL;
        }
        v40 = *((_QWORD *)v26 + 4);
        if ( v28 < v40 )
        {
          v21 = CVirtualAddressAllocator::AllocateVad(v28, v40, v15);
          if ( !v21 )
          {
            _InterlockedIncrement(&dword_1C004D6CC);
            v54 = WdLogNewEntry5_WdLowResource(v41);
            *(_QWORD *)(v54 + 24) = 971LL;
            WdLogEvent5_WdLowResource(v54);
            CVirtualAddressAllocator::FreeVad(v39);
            return 3221225495LL;
          }
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, v26, v38);
        *((_QWORD *)v26 + 4) = v56[7];
        CVirtualAddressAllocator::InsertVadToFreeList(this, v26);
        v32 = a8;
        v42 = (__int64 *)((char *)v26 + 40);
        v43 = *v42;
        *a8 = v39;
        v44 = (_QWORD *)((char *)v39 + 40);
        if ( *(__int64 **)(v43 + 8) != v42 )
          goto LABEL_35;
        *v44 = v43;
        v44[1] = v42;
        *(_QWORD *)(v43 + 8) = v44;
        *v42 = (__int64)v44;
        if ( v21 )
        {
          CVirtualAddressAllocator::InsertVadToFreeList(this, v21);
          v45 = *v44;
          v46 = (_QWORD *)((char *)v21 + 40);
          if ( *(_QWORD **)(*v44 + 8LL) != v44 )
            goto LABEL_35;
          *v46 = v45;
          v46[1] = v44;
          *(_QWORD *)(v45 + 8) = v46;
          *v44 = v46;
        }
      }
LABEL_24:
      *((_DWORD *)*v32 + 18) = (v22 << 12) | *((_DWORD *)*v32 + 18) & 0xFFFFEFFF;
      return 0LL;
    }
    return 3221225485LL;
  }
}
