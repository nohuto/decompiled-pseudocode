/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007647C
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C005F164 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005F950 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqxx @ 0x1C0027998 (McTemplateK0pqxx.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0076758 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C0076804 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C00768A0 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0077668 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C00778FC (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
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
  unsigned __int8 v9; // r15
  unsigned __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int64 v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // r14d
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct VIDMM_VAD *v25; // rbx
  __int64 v26; // r8
  unsigned __int64 v27; // rsi
  struct VIDMM_VAD *Vad; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  struct VIDMM_VAD **v31; // r15
  __int64 v32; // rcx
  __int64 **v33; // rdx
  __int64 *v34; // rax
  __int64 v36; // rcx
  struct VIDMM_VAD *v37; // r12
  unsigned __int64 v38; // rdx
  struct VIDMM_VAD *v39; // r13
  __int64 v40; // rcx
  char *v41; // rsi
  char *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD v53[10]; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v54; // [rsp+108h] [rbp+7Fh]

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
  v54 = v15;
  if ( a3 + a4 <= a4 )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v46 + 24) = 827LL;
LABEL_51:
    WdLogEvent5_WdAssertion(v46);
    return 3221225485LL;
  }
  if ( !a7 || (v17 = a7 - 1, ((a7 - 1) & a7) != 0) )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v46 + 24) = 833LL;
    goto LABEL_51;
  }
  memset(v53, 0, 0x48uLL);
  v53[5] = v17;
  v53[6] = ~(unsigned __int64)v17;
  if ( ((a7 - 1) & (unsigned int)a4) != 0 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v17, v18);
    *(_QWORD *)(v46 + 24) = 843LL;
    goto LABEL_51;
  }
  v19 = a6;
  v20 = a5;
  v53[0] = a4;
  v53[1] = v16;
  v53[2] = a5;
  if ( !a6 )
    v19 = *((_QWORD *)this + 2);
  v21 = 0;
  v53[3] = v19;
  v53[4] = v11;
  if ( v9 && dword_1C004E400 && v16 != *((_QWORD *)this + 2) )
  {
    v47 = v11 + 4096;
    v48 = v16 + 4096;
    if ( v11 + 4096 < v11 || v48 < v16 )
    {
      v49 = WdLogNewEntry5_WdAssertion(a5, v48);
      *(_QWORD *)(v49 + 24) = 865LL;
      WdLogEvent5_WdAssertion(v49);
      v19 = v53[3];
      v20 = v53[2];
      v11 = v53[4];
    }
    else
    {
      v11 += 4096LL;
      v53[1] = v16 + 4096;
      v53[4] = v47;
      v21 = 1;
    }
  }
  if ( v20 < v19 && v19 - v20 >= v11 )
  {
    NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, v53);
    v25 = NodeInFreeList;
    if ( !NodeInFreeList )
    {
      v50 = WdLogNewEntry5_WdWarning(v24, v23);
      WdLogEvent5_WdWarning(v50);
      return 3221225473LL;
    }
    v26 = *((_QWORD *)NodeInFreeList + 3);
    v27 = v53[7] + v53[4];
    if ( v26 == v53[7] )
    {
      if ( *((_QWORD *)NodeInFreeList + 4) - v26 != v53[4] )
      {
        Vad = CVirtualAddressAllocator::AllocateVad(v53[7], v53[7] + v53[4], v15);
        if ( Vad )
        {
          v31 = a8;
          v32 = (__int64)v25 + 40;
          v33 = (__int64 **)*((_QWORD *)v25 + 6);
          *a8 = Vad;
          v34 = (__int64 *)((char *)Vad + 40);
          if ( *v33 == (__int64 *)((char *)v25 + 40) )
          {
            *v34 = v32;
            v34[1] = (__int64)v33;
            *v33 = v34;
            *((_QWORD *)v25 + 6) = v34;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
              McTemplateK0pqxx(
                v32,
                &DestroyGpuVirtualAddressRange,
                v30,
                this,
                *((_DWORD *)v25 + 18),
                *((_QWORD *)v25 + 3),
                *((_QWORD *)v25 + 4));
            RtlAvlRemoveNode((char *)this + 40, v25);
            *((_DWORD *)v25 + 18) &= 0xFFFFFFF0;
            *((_QWORD *)v25 + 3) = v27;
            CVirtualAddressAllocator::InsertVadToFreeList(this, v25);
            goto LABEL_24;
          }
LABEL_35:
          __fastfail(3u);
        }
        _InterlockedIncrement(&dword_1C004E6AC);
        v51 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v51 + 24) = 925LL;
        goto LABEL_47;
      }
      CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList);
      v31 = a8;
      *a8 = v25;
    }
    else
    {
      v37 = CVirtualAddressAllocator::AllocateVad(v53[7], v53[7] + v53[4], v15);
      if ( !v37 )
      {
        _InterlockedIncrement(&dword_1C004E6AC);
        v51 = WdLogNewEntry5_WdLowResource(v36);
        *(_QWORD *)(v51 + 24) = 958LL;
LABEL_47:
        WdLogEvent5_WdLowResource(v51);
        return 3221225495LL;
      }
      v38 = *((_QWORD *)v25 + 4);
      v39 = 0LL;
      if ( v27 < v38 )
      {
        v39 = CVirtualAddressAllocator::AllocateVad(v27, v38, v54);
        if ( !v39 )
        {
          _InterlockedIncrement(&dword_1C004E6AC);
          v52 = WdLogNewEntry5_WdLowResource(v40);
          *(_QWORD *)(v52 + 24) = 971LL;
          WdLogEvent5_WdLowResource(v52);
          CVirtualAddressAllocator::FreeVad(v37);
          return 3221225495LL;
        }
      }
      CVirtualAddressAllocator::RemoveVadFromFreeList(this, v25);
      *((_QWORD *)v25 + 4) = v53[7];
      CVirtualAddressAllocator::InsertVadToFreeList(this, v25);
      v31 = a8;
      v41 = (char *)v37 + 40;
      v42 = (char *)v25 + 40;
      *a8 = v37;
      v43 = *(_QWORD *)v42;
      if ( *(char **)(*(_QWORD *)v42 + 8LL) != v42 )
        goto LABEL_35;
      *(_QWORD *)v41 = v43;
      *((_QWORD *)v37 + 6) = v42;
      *(_QWORD *)(v43 + 8) = v41;
      *(_QWORD *)v42 = v41;
      if ( v39 )
      {
        CVirtualAddressAllocator::InsertVadToFreeList(this, v39);
        v44 = *(_QWORD *)v41;
        v45 = (_QWORD *)((char *)v39 + 40);
        if ( *(char **)(*(_QWORD *)v41 + 8LL) != v41 )
          goto LABEL_35;
        *v45 = v44;
        *((_QWORD *)v39 + 6) = v41;
        *(_QWORD *)(v44 + 8) = v45;
        *(_QWORD *)v41 = v45;
      }
    }
LABEL_24:
    *((_DWORD *)*v31 + 18) = (v21 << 12) | *((_DWORD *)*v31 + 18) & 0xFFFFEFFF;
    return 0LL;
  }
  return 3221225485LL;
}
