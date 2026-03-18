/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00707E8
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071870 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B0530 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C007EB6C (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  __int64 v9; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v14; // edx
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  int v17; // r9d
  unsigned __int8 v18; // r14
  unsigned int v19; // r10d
  char v20; // di
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  __int64 v28; // rcx
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v29; // rbx
  __int64 Value; // rdx
  unsigned __int8 result; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // [rsp+70h] [rbp+8h]
  unsigned int v44; // [rsp+78h] [rbp+10h]

  v44 = a2;
  v9 = 1560LL * (unsigned int)a2;
  v11 = (unsigned int)a2;
  v12 = *((_QWORD *)this + 5023);
  v43 = v9;
  if ( (~*(_DWORD *)(v12 + v9 + 16) & a3) != 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v9, a2);
    *(_QWORD *)(v42 + 24) = 11879LL;
    goto LABEL_42;
  }
  v14 = a3;
  v15 = *(_DWORD *)(v12 + v9 + 20);
  v16 = 0;
  v17 = 0;
  v18 = 1;
  if ( (~*(_DWORD *)(v12 + 16) & v14) != 0 )
    goto LABEL_33;
  if ( !v14 )
    goto LABEL_9;
  do
  {
    v19 = v14;
    if ( (v14 & 1) != 0 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v16 + v15));
      if ( (*(_DWORD *)(v9 + 80) & 0x1001) == 0 )
      {
        v9 = v16;
        v17 |= 1 << v16;
      }
    }
    v14 >>= 1;
    ++v16;
  }
  while ( v19 >= 2 );
  if ( v17 )
LABEL_33:
    v20 = 0;
  else
LABEL_9:
    v20 = 1;
  v21 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v22 = v21;
      if ( (v21 & 1) != 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v15);
        if ( (*(_DWORD *)(v9 + 80) & 0x1001) != 0 )
          break;
      }
      v21 = (unsigned int)v21 >> 1;
      ++v15;
      if ( v22 < 2 )
        goto LABEL_32;
    }
  }
  else
  {
LABEL_32:
    v18 = 0;
  }
  if ( (a4->Value & 0x40000) != 0 && !v20 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v9, v21);
    *(_QWORD *)(v42 + 24) = 11893LL;
    goto LABEL_42;
  }
  if ( (a4->Value & 0x20000) == 0 )
    goto LABEL_15;
  if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v44, a3, 0x10000u, 0LL) )
  {
    v36 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2440LL) + 352 * v11 + 16);
    if ( (v36 & 0x10) == 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v36, v34);
      *(_QWORD *)(v42 + 24) = 11917LL;
      goto LABEL_42;
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v36);
    a4->Value &= ~0x20000u;
LABEL_15:
    v23 = v43;
    goto LABEL_16;
  }
  if ( v18 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v42 + 24) = 11925LL;
    goto LABEL_42;
  }
  v23 = v43;
  v37 = a3;
  v38 = *(_DWORD *)(v12 + v43 + 20);
  if ( a3 )
  {
    do
    {
      v39 = v37;
      if ( (v37 & 1) != 0 )
      {
        v40 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v38);
        if ( a5 > *(_QWORD *)(v40 + 392) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v42 + 24) = 11938LL;
          goto LABEL_42;
        }
        if ( (*(_DWORD *)(v40 + 80) & 0x20) != 0 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v42 + 24) = 11943LL;
          goto LABEL_42;
        }
      }
      v37 = (unsigned int)v37 >> 1;
      ++v38;
    }
    while ( v39 >= 2 );
  }
LABEL_16:
  v24 = *((_QWORD *)this + 5023);
  v25 = a3;
  v26 = *(_DWORD *)(v23 + v24 + 20);
  if ( (~*(_DWORD *)(v23 + v24 + 16) & a3) != 0 || !a3 )
  {
LABEL_21:
    v29 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      v27 = v25;
      if ( (v25 & 1) != 0 )
      {
        v28 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v26);
        if ( (*(_DWORD *)(v28 + 80) & 0x20) != 0 )
          break;
      }
      v25 = (unsigned int)v25 >> 1;
      ++v26;
      if ( v27 < 2 )
        goto LABEL_21;
    }
    if ( !a6 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v28, v25);
      *(_QWORD *)(v42 + 24) = 11965LL;
      goto LABEL_42;
    }
    if ( a6 < a5 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v28, v25);
      *(_QWORD *)(v42 + 24) = 11971LL;
      goto LABEL_42;
    }
    v29 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = a4->Value;
  if ( (a4->Value & 0x800004) == 4 )
  {
    if ( *((_BYTE *)this + 7073) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v44, a3, 0x10u, 0LL) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v42 + 24) = 12001LL;
        goto LABEL_42;
      }
      Value = a4->Value;
    }
    else
    {
      v41 = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL);
      if ( (v41 & 8) == 0 && !v20 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41, Value);
        *(_QWORD *)(v42 + 24) = 12008LL;
        goto LABEL_42;
      }
    }
  }
  if ( (Value & 0x20000001) == 0x20000001 && !v20 )
  {
    v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
    *(_QWORD *)(v42 + 24) = 12019LL;
    goto LABEL_42;
  }
  if ( (Value & 0x100000) == 0 || v20 )
  {
    if ( (Value & 0x4000) == 0 || v20 )
    {
      if ( !a7 || (Value & 1) == 0 || v20 )
      {
        result = 1;
        *(_DWORD *)v29 = (2 * v18) | v20 & 0xFD | *(_DWORD *)v29 & 0xFFFFFFFC;
        return result;
      }
      v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
      *(_QWORD *)(v42 + 24) = 12045LL;
    }
    else
    {
      v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
      *(_QWORD *)(v42 + 24) = 12033LL;
    }
  }
  else
  {
    v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
    *(_QWORD *)(v42 + 24) = 12026LL;
  }
LABEL_42:
  WdLogEvent5_WdAssertion(v42);
  return 0;
}
